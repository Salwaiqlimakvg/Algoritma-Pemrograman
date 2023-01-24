//file: lingkaran
//Penulis: Salwa Iqlima KVG, nim: 2000680, email: salwaiqlimakvg@upi.edu
//deskripsi:
//Menghitung luas lingkaran

#include <stdio.h>

int main (){
	const float phi= 3.14;
	float r, L;
	
	//value
	printf("Menghitung luas lingkaran \n");
	printf("Masukkan jari-jari lingkaran = ", &r); scanf("%f", &r);
		
	L = phi*r*r;
	printf("Hasil dari luas lingkaran = %.2f cm\n", L);
	printf("\n");
	printf("Terima Kasih");
	
	return 0;
}
