//Sean Blanchard
//Test362Code
//Source: Geeksforgeeks

package com.company;

class node {

    // represent difference between
    // head position and track number
    int distance = 0;

    // true if track has been accessed
    boolean accessed = false;
}

public class Main {

    //DRIVER
    public static void main(String[] args)
    {
        // request array - Delete first entry put as head
        int arr[] = { 223, 45, 183, 233, 12,
                238, 54, 29, 218, 156, 48, 22, 191,
                78, 73, 224, 251, 2, 15, 184, 101};
        //Array head is first in array in his examples
        shortestSeekTimeFirst(arr, 67);
    }

    // Calculates difference of each
    // track number with the head position
    public static void calculateDifference(int queue[],
                                           int head, node diff[])

    {
        for (int i = 0; i < diff.length; i++)
            diff[i].distance = Math.abs(queue[i] - head);
    }

    // find unaccessed track
    // which is at minimum distance from head
    public static int findMin(node diff[])
    {
        int index = -1, minimum = Integer.MAX_VALUE;

        for (int i = 0; i < diff.length; i++) {
            if (!diff[i].accessed && minimum > diff[i].distance) {

                minimum = diff[i].distance;
                index = i;
            }
        }
        return index;
    }

    public static void shortestSeekTimeFirst(int request[],
                                             int head)

    {
        if (request.length == 0)
            return;

        // create array of objects of class node
        node diff[] = new node[request.length];

        // initialize array
        for (int i = 0; i < diff.length; i++)

            diff[i] = new node();

        // count total number of seek operation
        int seek_count = 0;

        // stores sequence in which disk access is done
        int[] seek_sequence = new int[request.length + 1];

        for (int i = 0; i < request.length; i++) {

            seek_sequence[i] = head;
            calculateDifference(request, head, diff);

            int index = findMin(diff);

            diff[index].accessed = true;

            // increase the total count
            seek_count += diff[index].distance;

            // accessed track is now new head
            head = request[index];
        }

        // for last accessed track
        seek_sequence[seek_sequence.length - 1] = head;

        System.out.println("Total number of seek operations = "
                + seek_count);

        System.out.println("Seek Sequence is");

        // print the sequence
        for (int i = 0; i < seek_sequence.length; i++)
            System.out.println(seek_sequence[i]);
    }


}
