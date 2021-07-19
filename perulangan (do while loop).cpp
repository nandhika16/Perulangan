#include <stdio.h>
//menampilkan angka 1-10 menggunakan Do-While
int main() {
	
	int nilai;
	printf("Masukkan nilai : ");scanf("%i",&nilai);
	int i=0;
	do{
		printf("%i\n",i);
		i++;
	}while(i<nilai);
	return 0;
}

