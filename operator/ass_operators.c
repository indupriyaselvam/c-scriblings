#include <stdio.h>
main() {
	int big, a = 10, b=12, c=8;
	/* (condition) ? (true statement) : (false statement) */
	big = a > b ? ((a > c) ? a : c) : ((b > c) ? b : c) ;


	if (a > b) {
		if (a > c) {
			big = a;
		} else {
			big = c;
		}
	} else {
		if (b > c) {
			big = b;
		} else {
			big = c;
		}
	}

    printf("big is %d\n", big);
	return 0;
}
