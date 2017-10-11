/*
11231094
jof222
Joseph Fuller
*/

#include <stdio.h>

int main()
{
    unsigned i, n;
    unsigned long factorial; // Declare an unsigned long int called factorial 
    factorial = 1;
    i = 0;
	
	printf("q1.c\n");
    printf("Enter a Number (must be > 0): ");
    scanf("%u", &n);

    while ( i++ < n) {    
      factorial *= i;     
    }

    printf("%u! = %lu\n", n, factorial);
    return(0);
}
