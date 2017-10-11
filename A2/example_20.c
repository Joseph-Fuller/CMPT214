/*
   iterative factorial function, while-loop version
*/

#include <stdio.h>

int main()
{
    unsigned i, n, factorial; 
    factorial = 1;
    i = 0;

    printf("Enter a Number (must be > 0): ");
    scanf("%u", &n);

    while ( i++ < n) {    // the {} are unnecessary, but good programming
      factorial *= i;     //  style
    }

    printf("%u! = %u\n", n, factorial);
    return(0);
}
