//file: suhu
//Penulis: Salwa Iqlima KVG, Nim: 2000680, email: salwaiqlimakvg@upi.edu
//deskripsi:
//konversi dari derajat celsius ke derajat reamur

#include <stdio.h>

int main (){
	float celsius, reamur;
	
	printf("Konversi dari derajat celsius ke derajat reamur \n");
	printf("derajat celsius: ", &celsius); scanf("%f", &celsius);
		
	reamur = (4*celsius)/5;
	printf("Hasil konversi dari derajat celsius ke derajat reamur = %.2f\n", reamur);
	printf("\n");
	printf("Terima Kasih");
	
	return 0;
}
