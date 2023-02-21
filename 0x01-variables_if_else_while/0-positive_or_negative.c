#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>
/**
 * main-This is a code for if ,else statement to determine negativity or positivity of a number
 * Return:0(Go Coding)
*/
int main(void) 
 {int n; 
srand(time(0)); 
n = rand() - RAND_MAX / 2;
if (n > 0);
printf ("%d n is positive /n"; n++);
else if (n=0);
printf ("%d n is zero /n");
else if (n < 0);
printf ("%d n is negative /n"; n--);
return (0); 
 }
