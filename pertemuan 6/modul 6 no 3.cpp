#include <stdio.h>

main() {
	int n = 1;
	for(int i=0; i<=10; i++) {
	
		printf("%5i", n);
		n = n * 2;
	}
	return 0;
}
