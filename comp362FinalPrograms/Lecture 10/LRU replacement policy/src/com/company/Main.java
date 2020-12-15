package com.company;

import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

//LRUPageReplacement
public class Main
{
    public static void main(String[] args) throws IOException
    {
        Scanner in = new Scanner(System.in);
        int frames = 0;
        int pointer = 0;
        int fault = 0;
        int ref_len = 0;
        Boolean isFull = false;
        char mem[];
        ArrayList<Character> stack = new ArrayList<Character>();
        //ENTER ARRAY HERE seperated by ''
        char refestring[]= new char[] {'4', '3', '6', '2', '1', '2', '5', '4', '3', '4', '2', '3', '6', '1', '2', '3'};
        ref_len=refestring.length;

        System.out.println("Please enter a reference string:"
                + "\n4, 3, 6, 2, 1, 2, 5, 4, 3, 4, 2, 3, 6, 1, 2, 3");

        System.out.println("Please enter the number of Frames: ");
        frames = Integer.parseInt(in.nextLine());

        System.out.print("Starting Memory is:");
        for(int w=0;w<frames;w++)
            System.out.print(" * ");

        mem = new char[frames];
        for(int j = 0; j < frames; j++)
            mem[j] = '*';

        System.out.println();
        for(int i = 0; i < ref_len; i++){
            if(stack.contains(refestring[i])){
                stack.remove(stack.indexOf(refestring[i]));
            }
            stack.add(refestring[i]);
            int search = -1;
            for(int j = 0; j < frames; j++){
                if(mem[j] == refestring[i]){

                    search = j;

                    System.out.print(refestring[i]+": Memory is:");
                    for(int w = 0; w < frames; w++){
                        System.out.printf("%3c ",mem[w]);}
                    System.out.println("Hit: (Number of Page Faults: "+fault+")");
                    break;
                }
            }
            if(search == -1){
                if(isFull){
                    int min_loc = ref_len;
                    for(int j = 0; j < frames; j++){
                        if(stack.contains(mem[j])){
                            int temp = stack.indexOf(mem[j]);
                            if(temp < min_loc){

                                min_loc = temp;
                                pointer = j;
                            }
                        }
                    }
                }
                mem[pointer] = refestring[i];
                fault++;
                System.out.print(refestring[i]+": Memory is:");
                for(int w = 0; w < frames; w++){
                    System.out.printf("%3c ",mem[w]);}
                System.out.println("Page Fault: (Number of Page Faults: "+fault+")");
                pointer++;
                if(pointer == frames){
                    pointer = 0;
                    isFull = true;
                }
            }
        }
        System.out.println("Total number of Faults: " + fault);
    }
}