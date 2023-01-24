//File: ASCII
//Penulis: Salwa Iqlima KVG, Nim: 2000680, email: salwaiqlimakvg@upi.edu
//Deskripsi: 
//menjumlahkan kode ascii dari karakter '1' dan karakter '2'

#include <stdio.h>
	
int main (){
	char a= '2';
	printf("kode ASCII dari karakter '2'= %d\n", a);
	
	char b= 'w';
	printf("kode ASCII dari karakter 'w'= %d\n", b); 
	
	char c= 'z';
	printf("kode ASCII dari karakter 'z'= %d\n", c); 

	char d= '3';
	printf("kode ASCII dari karakter '3'= %d\n", d); 
	
	char e= 'X';
	printf("kode ASCII dari karakter 'X'= %d\n", e); 

	int f= ((a*b)+(c+d)/e);
	printf ("Hasil dari (('2'*'w')+('z'+'3')/'X')= %d\n", f);
	printf("\n");
	
	
	printf("TERIMA KASIH");

	return 0;
}
