//Sean Blanchard
//COMP 362 - project 2
//11/30/20


//////////////////////////////////////////////////////////////////////////
///
/// Copyright (c) 2020 Prof. AJ Bieszczad. All rights reserved.
///
//////////////////////////////////////////////////////////////////////////

#include "disk.h"

disk_t disk;

/***
 *
 * Verifies correctness of the logical block address, and then translates it to a cylinder-head-sector equivalent.
 *
 */
CIDEV_RET_CODE lba2chs(lba_t lba, chs_t *chs)
{
    if (lba >= MAX_LOGICAL_BLOCK)
        return CIDEV_ADDRESS_ERROR;

// todo: implement
    //Source: WIKIPEDIA
    //C = LBA ÷ (HPC × SPT)
    //H = (LBA ÷ SPT) mod HPC
    //S = (LBA mod SPT) + 1

    int cylinderCapacity = NUM_OF_SECTS * NUM_OF_HEADS;
    chs->cyl = lba/cylinderCapacity;
    chs->head = (lba / NUM_OF_SECTS) % NUM_OF_HEADS;
    chs->sect = (lba % NUM_OF_SECTS)+1;

    return CIDEV_SUCCESS;
}

/***
 *
 * Verifies correctness of the cylinder-head-sector address, and then translates it to a logical block address.
 *
 */
CIDEV_RET_CODE chs2lba(chs_t *chs, lba_t *lba)
{
// todo: implement


    //LBA = (C × HPC + H) × SPT + (S − 1)
    //We can ignore the - 1 because were 0 based in the program
    //unsigned long translation;
    if(chs->sect >= NUM_OF_SECTS || chs->head >= NUM_OF_HEADS || chs->cyl >= NUM_OF_CYLS){

        return CIDEV_ADDRESS_ERROR;
    }
    (*lba) = ((chs->cyl *  NUM_OF_HEADS) + chs->head) * NUM_OF_SECTS + (chs->sect - 1);
    
    return CIDEV_SUCCESS;
}
/***
 *
 * Verifies the parameters, then allocates space for the requested data (using
 * the caller-provided pointer buffer), copies the data from the disk to the buffer,
 * and appends '\0' to terminate the string.
 *
 */
CIDEV_RET_CODE readDisk(lba_t lba, unsigned int size, char **buffer)
{
// todo: verify parameters
    if (lba > MAX_LOGICAL_BLOCK)
    {
        return CIDEV_SPACE_ERROR;
    }
    if(lba < 0)
    {
        return CIDEV_SPACE_ERROR;
    }
//
//    chs_t chs;
//    //Figure out how much we need to allocate
//    // Figure out how many sectors you need to read
//    // Use that number to allocate to buffer
//    unsigned int sectorSize;
//    sectorSize = (size -1)/SECT_SIZE + 1;
//    *buffer = calloc(sizeof (char), sectorSize + SECT_SIZE); // todo: modify as required
//    CIDEV_RET_CODE errCode = CIDEV_SUCCESS;
//    unsigned int bytesPerSector = SECT_SIZE * NUM_OF_SECTS;
//
//
//    // todo: implement
//    for (int i = 0; i < sectorSize; ++i)
//    {
//        if(lba2chs(lba + i, &chs) == CIDEV_SUCCESS)
//        {
//            strncpy(*buffer +(i * SECT_SIZE),disk[chs.cyl][chs.head][chs.sect],SECT_SIZE);
//        }
//        else
//        {
//            printf("ERROR: Invalid logical address!\n");
//            return CIDEV_ADDRESS_ERROR;
//        }
//    }
    //*((char*)buffer + (size * SECT_SIZE) + 1) = '\0';
    //free(buffer);

//    return errCode;

    chs_t chs;
    unsigned int sectorSize = (size -1)/SECT_SIZE + 1;;

    if(lba2chs(lba,&chs)!= CIDEV_SUCCESS){
        return CIDEV_ADDRESS_ERROR;
    }

    *buffer = calloc(sizeof(char),sectorSize * SECT_SIZE );

    for(int i = 0; i < sectorSize; i++){
        if(lba2chs((lba +i) % MAX_LOGICAL_BLOCK,&chs) == CIDEV_SUCCESS)
        {
            strncpy(*buffer + i * SECT_SIZE, disk[chs.cyl][chs.head][chs.sect], SECT_SIZE);
        }
        else
        {
            return CIDEV_SUCCESS;
        }
    }

    return CIDEV_SUCCESS;
}


/***
 *
 * An auxiliary function to fill a single disk block with '.'
 *
*/
CIDEV_RET_CODE clearBlock(lba_t lba)
{
    char *writeBuffer;
#ifdef __DEBUG_DISK
    writeBuffer = malloc(SECT_SIZE);
#else
    writeBuffer = kmalloc(SECT_SIZE, GFP_USER);
#endif
    if (writeBuffer == NULL)
        return CIDEV_SPACE_ERROR;

    for (int i = 0; i < SECT_SIZE; i++)
        writeBuffer[i] = '.';

    CIDEV_RET_CODE errCode = writeDisk(lba, writeBuffer);

#ifdef __DEBUG_DISK
    free(writeBuffer);
#else
    kfree(writeBuffer);
#endif

    return errCode;
}

/***
 *
 * Validates the parameters, and then writes the caller-provided data to the disk starting at the block pointed
 * to by the logical block address.
 *
 */
CIDEV_RET_CODE writeDisk(lba_t lba, char *buffer)
{
// todo: verify the parameters
    if (lba > MAX_LOGICAL_BLOCK)
    {
        return CIDEV_SPACE_ERROR;
    }
    if(lba < 0)
    {
        return CIDEV_SPACE_ERROR;
    }
//
//
    //CIDEV_RET_CODE errCode = CIDEV_SUCCESS;
    chs_t chs;
    unsigned int sectorSizePerTrack = (strlen(buffer) - 1)/SECT_SIZE + 1;
    //unsigned int bytesPerSector = SECT_SIZE * NUM_OF_SECTS;
    *buffer = (char) calloc(sizeof (char),sectorSizePerTrack * SECT_SIZE);
// todo: implement

    //Copy specifically sectors for the whole range
    //from the buffer to the disk at the location of the lba passed in
    //and since writing to a disk, Need to convert to chs.
    for (int i = 0; i < sectorSizePerTrack; i++)
    {
        if(lba2chs((lba + i) % MAX_LOGICAL_BLOCK, &chs) == CIDEV_SUCCESS)
        {
                //memcpy(((char *) buffer + i * SECT_SIZE), disk[chs.cyl][chs.head][chs.sect], SECT_SIZE);
                strncpy(disk[chs.cyl][chs.head][chs.sect], buffer + (i * SECT_SIZE), SECT_SIZE);
        }
        else
        {
            printf("ERROR: Invalid logical address!\n");

            return CIDEV_ADDRESS_ERROR;
        }
    }
    return 0;





//    CIDEV_RET_CODE errCode = CIDEV_SUCCESS;
//    unsigned int numberOfSects;
//    chs_t chs;
//
//    if(lba2chs(lba,&chs)!=CIDEV_SUCCESS ){
//        return CIDEV_ADDRESS_ERROR;
//    }
//
//// todo: implement DONE
//    numberOfSects = (strlen(buffer) - 1)/SECT_SIZE + 1;
//    *buffer = (char) calloc(sizeof(char), numberOfSects * SECT_SIZE);
//    for(int i = 0; i < numberOfSects; i++){
//        errCode = lba2chs((lba + i) % MAX_LOGICAL_BLOCK, &chs);
//        if(errCode == CIDEV_SUCCESS){
//            strncpy(disk[chs.cyl][chs.head][chs.sect], buffer + (i * SECT_SIZE), SECT_SIZE);
//        }else{
//            return errCode;
//        }
//    }
//
//    return errCode;
}
