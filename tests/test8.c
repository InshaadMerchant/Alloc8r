#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("Running test 8 by filling in 2 blocks of memory with data and then verifying that the data in both memory blocks are correct.\n");
    int *ptr1, *ptr2, i;
    ptr1 = (int *) malloc(10 * sizeof(int));
    ptr2 = (int *) malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++) 
    {
        ptr1[i] = i;
    }
    for (i = 0; i < 10; i++) 
    {
        ptr2[i] = i + 10;
    }
    for (i = 0; i < 10; i++) 
    {
        if (ptr1[i] != i) 
        {
            printf("Error: data in first block of allocated memory is incorrect.\n");
            exit(1);
        }
    }
    for (i = 0; i < 10; i++) 
    {
        if (ptr2[i] != i + 10) 
        {
            printf("Error: data in second block of allocated memory is incorrect.\n");
            exit(1);
        }
    }
    free(ptr1);
    free(ptr2);
    printf("Success: malloc correctly allocated and filled multiple blocks of memory.\n");
    return 0;
}
