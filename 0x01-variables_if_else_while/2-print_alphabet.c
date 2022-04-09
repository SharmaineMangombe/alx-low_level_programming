# include <stdio.h>

int main(void)
{
	for(int x ='A' ; x<='Z'; x++)
	{
		putchar(tolower("%s\n",x));
		putchar("%s\n",x);
	}
	return 0;
}
