#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
    int a[5] = {98, 402, 1024, 4096, 16384}; /* Array initialization */
    int *p;                                  /* Pointer declaration */

    p = a;  /* Pointer p points to the first element of array a */

    *(p + 2) = 98;  /* Update the third element of array a to 98 */
    /* Update the third element of the array */
    /* Prepare to print the updated value */
    /* Step 3: Return 0 to indicate successful execution */
    printf("a[2] = %d\n", *(p + 2));  /* Print the updated value of a[2] */

    return (0);  /* Return 0 to indicate successful execution */
}
