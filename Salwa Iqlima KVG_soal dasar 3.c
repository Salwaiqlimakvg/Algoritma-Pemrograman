//File: kode ascii
//Penulis: Salwa Iqlima KVG, nim: 2000680, email: salwaiqlimakvg@upi.edu
//Penjelasan:
//menjumlahkan kode ascii dari karakter '1' dan karakter '2'
	
#include <stdio.h>

int main (){
	char a= '1';
	printf("kode ASCII dari karakter '1'= %d", a);
	printf ("\n");
	
	char b= '2';
	printf("kode ASCII dari karakter '2'= %d", b); 
	printf("\n");
	printf("\n");
	
	int c= a+b;
	printf ("Hasil penjumlahan kode ASCII dari char '1' dan char '2'= %d\n", c);
	printf("\n");
	
	char d= c;
	printf ("Jika dikembalikan ke dalam bentuk char maka menjadi: %c \n", d);
	printf("\n");
	
	printf("TERIMA KASIH");
	return 0; 
}
