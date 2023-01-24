//File: kode ascii
//Penulis: Salwa Iqlima KVG, nim: 2000680, email: salwaiqlimakvg@upi.edu
//Penjelasan:
//menjumlahkan kode ascii dari karakter '1' dan karakter '2'
//konversi dari mill ke kilometer

#include <stdio.h>

//deklarasi konstanta
#define SATU_MILL 1.609;

int main (){
	float mill, konversi, kilometer;
	
	printf("Konversi dari mill ke kilometer \n");
	printf("Berapa mill: ", &mill); scanf("%f", &mill);
		
	konversi= mill*SATU_MILL;
	printf("Hasil konversi dari mill yang diinginkan ke kilometer = %.2f\n", konversi);
	printf("----------------------------------------------------\n");
	
	printf("Konversi dari kilometer ke mill \n");
	printf("Berapa kilometer: ", &kilometer); scanf("%f", &kilometer);
	
	konversi= kilometer/SATU_MILL;
	printf("Hasil konversi dari kilometer yang diinginkan ke mill= %.2f\n", konversi);
	printf("\n");
	
	
	return 0;
}
