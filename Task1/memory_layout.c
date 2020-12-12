#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {

    int *val;

    val = (int*)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
 {
     val[i] = i;
     printf("%c", i);
 }
    // printf() displays the string inside quotation
   printf("Hello, World!");
   return EXIT_SUCCESS;
}
