#include <stdio.h>

int main()
{
	int a = 21;
	int b = 10;
	//int c;

#if 0
	if( a == b )
	{
		printf("Line 1 - a is equal to b\n" );
	}
	else
	{
		printf("Line 1 - a is not equal to b\n" );
	}

	if ( a < b )
	{
		printf("Line 2 - a is less than b\n" );
	}
	else
	{
		printf("Line 2 - a is not less than b\n" );
	}

	if ( a > b )
	{
		printf("Line 3 - a is greater than b\n" );
	}
	else
	{
		printf("Line 3 - a is not greater than b\n" );
	}
#endif

	if(a == b) {
		printf("Line 1 - a is equal to b\n" );
	} else if (a < b) {
		printf("Line 2 - a is less than b\n" );
	} else if (a > b) {
		printf("Line 3 - a is greater than b\n" );
	}

	return 0;
}
