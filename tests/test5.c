#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("Running test5 to allocate a block of memory that is larger than available memory and checking if the pointer is null");
    int *ptr;
    ptr = (int *) malloc(1000000000 * sizeof(int));
    if (ptr == NULL) 
    {
        printf("Success: malloc correctly returned null for out-of-memory condition.\n");
    } else {
        printf("Error: malloc should have returned null for out-of-memory condition.\n");
    }
    return 0;
}
