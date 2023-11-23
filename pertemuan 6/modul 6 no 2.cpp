#include <stdio.h>

main() {
	int n = 100;
	for(int i = 0; i<=9; i++) {
	
		printf("%4i", n);
		n= n - 5;
	}
	return 0;
}
