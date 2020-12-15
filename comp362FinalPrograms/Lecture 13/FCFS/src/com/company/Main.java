//Sean Blanchard
//Source geeksforgeeks

package com.company;

// Java program to demonstrate
// FCFS Disk Scheduling algorithm
class Main
{
    //array size
    static int size = 21;

    // Driver code
    public static void main(String[] args)
    {
        // request array
        int arr[] = { 223, 45, 183, 233, 12, 238,
                54, 29, 218, 156, 48, 22, 191, 78,
                73, 224, 251, 2, 15, 184, 101};
        int head = 67;

        FCFS(arr, head);
    }

    static void FCFS(int arr[], int head)
    {
        int seek_count = 0;
        int distance, cur_track;

        for (int i = 0; i < size; i++)
        {
            cur_track = arr[i];

            // calculate absolute distance
            distance = Math.abs(cur_track - head);

            // increase the total count
            seek_count += distance;

            // accessed track is now new head
            head = cur_track;
        }

        System.out.println("Total number of " +
                "seek operations = " +
                seek_count);

        // Seek sequence would be the same
        // as request array sequence
        System.out.println("Seek Sequence is");

        for (int i = 0; i < size; i++)
        {
            System.out.println(arr[i]);
        }
    }

}

// This code is contributed by 29AjayKumar
