#include <stdlib.h>

#include <time.h>

/* more headers goes there 
 *
 * betty style doc for function main goes there 
 */

int main(void)

{

		int n;

		srand(time(0));

		n = rand() - RAND_MAX / 2;

		if(n>5)
		{
			printf("Last digit of %d is 6 and is greater than 5\n",n);
		}else if(n==0){
			printf("Last digit of %d is 0 and is 0\n",n);
		}else{
			printf("Last digit of %d is -7 and is less than 6 and not 0\n",n);
		}
		return (0);
}
