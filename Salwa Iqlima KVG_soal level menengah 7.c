//file: suhu
//Penulis: Salwa Iqlima KVG, Nim: 2000680, email: salwaiqlimakvg@upi.edu
//deskripsi:
//konversi dari derajat celsius ke derajat fahrenheit
	
#include <stdio.h>

int main (){
	float celsius, fahrenheit;
	
	printf("Konversi dari derajat celsius ke derajat fahrenheit \n");
	printf("derajat celsius: ", &celsius); scanf("%f", &celsius);
		
	fahrenheit = (celsius*9/5)+32;
	printf("Hasil konversi dari derajat celsius ke derajat fahrenheit = %.2f\n", fahrenheit);
	printf("\n");
	printf("Terima Kasih");
	
	return 0;
}
