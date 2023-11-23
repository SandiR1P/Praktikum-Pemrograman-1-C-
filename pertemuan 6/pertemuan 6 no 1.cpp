#include <stdio.h>

main() {
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	printf("Bilangan\n");
	
	for(int i = 0; i<10; i++)
		printf("%4i", arr[i]);
	printf("\n");
	
	return 0;
}
