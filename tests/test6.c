#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("Running test6 to allocate a block of memory using malloc to check if the pointer is not null.");
    int *ptr;
    ptr = (int *) malloc(10 * sizeof(int));
    if (ptr == NULL) 
    {
        printf("Error: malloc failed to allocate memory.\n");
        exit(1);
    }
    free(ptr);
    return 0;
}
