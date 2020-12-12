/**
* Name: Sean Blanchard
* Lab/task: Lab 10
* Date: 10/29/20
**/

/**
 * This implements the LRU page-replacement algorithm.
 */

#include "../inc/optArray.h"

int *referenceString;
int refStringLength;

// the page frame list
int *pageTable;
int numOfFramesPerProcess;

int victimIndex;
int hitPageNumber;

// statistics
int numOfFaults;

// this index is used to go through the sequence of pages references
int currentPgeReferenceIndex;

int testOPT(int numOfFrames, int *refString, int refStrLen)
{
    // TODO: implement
    referenceString = refString;
    refStringLength = refStrLen;
    numOfFramesPerProcess = numOfFrames;
    victimIndex = FREE_SLOT;
    hitPageNumber = FREE_SLOT;
    pageTable = calloc(numOfFrames, sizeof(int));

    //Set Free Slots in pageTable arr
    for(int frame = 0; frame < numOfFrames; ++frame)
    {
        pageTable[frame] = FREE_SLOT;
    }

    //Iterate through Reference String
    currentPgeReferenceIndex = 0;
    while (currentPgeReferenceIndex < refStringLength)
    {
        insertOPT(referenceString[currentPgeReferenceIndex]);
        displayOPT();
        currentPgeReferenceIndex++;
    }

    //clean up
    freePageTableOPT();
    return numOfFaults;
}

/*
 *	try to insert a page into the page table
 */
void insertOPT(int pageNumber)
{
    int searchVal = searchOPT(pageNumber);

    pageTable[searchVal] = pageNumber;
}

/*
 *  find either an empty slot, or the page, or a vitim to evict
 */
int searchOPT(int pageNumber)
{
    // TODO: implement
    //Iteerate through pageTable Array for pageNumber
    for (int frame = 0; frame < numOfFramesPerProcess; ++frame)
    {
        //Empty frame with pageNumber found
        if(FREE_SLOT == pageTable[frame])
        {
            numOfFaults++;
            victimIndex = frame;
            return victimIndex;
        }

        //Frame with pageNumber Found
        if (pageNumber == pageTable[frame])
        {
            hitPageNumber = frame;
            return hitPageNumber;
        }
    }

    numOfFaults++;
    return findVictimPageOPT();
}

int findVictimPageOPT()
{
    // TODO: implement
    //Replace the page that will not be used for the longest period of time
    int found;
    int longestUnusedTime = 0;

    for (int frame = 0; frame < numOfFramesPerProcess; ++frame)
    {
        found = -1;
        //Iterate Through refence string for longest unused period of time of a page
        for (int refStrIndex = currentPgeReferenceIndex; refStrIndex < refStringLength; ++refStrIndex)
        {
            // Found frame pageNumber in Ref string again
            if (pageTable[frame] == referenceString[refStrIndex])
            {
                found = 1;
                //Check for unsued victim index or longer unused period of time
                if (FREE_SLOT == victimIndex || longestUnusedTime < refStrIndex - currentPgeReferenceIndex)
                {
                    victimIndex = frame;
                    longestUnusedTime = refStrIndex - currentPgeReferenceIndex;
                }
                break;
            }
        }
        if (-1 == found)
        {
            return frame;
        }
    }
    return victimIndex;
}

void displayOPT()
{
    // todo: implement
    printf("%d ->", referenceString[currentPgeReferenceIndex]);
    for (int frame = 0; frame < numOfFramesPerProcess; ++frame)
    {
        printf("\t%d", pageTable[frame]);
        if (hitPageNumber == frame)
            printf("%c", '<');
    }
    printf("%c", '\n');
}

void freePageTableOPT()
{
    // TODO: implement
    free(pageTable);
}
