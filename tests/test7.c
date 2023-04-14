#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("Running test7 to fill allocated memory with data and verify that the data is correct\n");
    int *ptr, i;
    ptr = (int *) malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++) 
    {
        ptr[i] = i;
    }
    for (i = 0; i < 10; i++) 
    {
        if (ptr[i] != i) 
        {
            printf("Error: data in allocated memory is incorrect.\n");
            exit(1);
        }
    }
    free(ptr);
    printf("Success: malloc correctly allocated and filled memory.\n");
    return 0;
}
