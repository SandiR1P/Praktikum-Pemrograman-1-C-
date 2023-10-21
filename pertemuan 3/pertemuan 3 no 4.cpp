#include <stdio.h>
//#include <math.h>

int main() {
    int bilangan;
    
    printf("Masukkan angka: ");
    scanf("%d", &bilangan);

    if(bilangan % 2 == 0){
    	printf("%d bilangan bulat \n", bilangan);
    } else {
    	printf("%d bilangan ganjil \n", bilangan);
    }

    return 0;
}
