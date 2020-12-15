package com.company;

public class Main<EAT> {

    public class main{
	// write your code here
        //Compute the memory effective access time in a system
        //with the following chacteristics

        int pageFault = 1/2000; // Enter number of pagefault
        int memoryAccessTime = 100; // Enter number of MAT in nanoseconds
        int diskAccessTime = 5; // Enter DAT in milliseconds
        double dirtyBit = 0.1; //probability that the dirt bit is set on the victim
        int pageFaultOverhead = 7; //nanoseconds
        int restartOverhead = 3; //nanoseconds

        double EAT = (1-pageFault) * memoryAccessTime + pageFault *(pageFaultOverhead + 2 * diskAccessTime + restartOverhead);
        return EAT;
    }
}

