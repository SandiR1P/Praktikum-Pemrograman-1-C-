#include <stdio.h>

int main() {
	int saldo = 1000000, bulan = 10;
	double bunga = 0.02;
	
	for(int i=1; i <= bulan; i++){
		saldo = saldo + (saldo * bunga);
	}
	
	printf("jumlah uang setelah %d bulan %d adalah \n", bulan, saldo);
	return 0;
}
