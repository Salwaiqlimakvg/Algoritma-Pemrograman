//File: luas trapesium
//Penulis: Salwa Iqlima KVG, nim: 2000680, email: salwaiqlimakvg@upi.edu
//deskripsi:
//Menghitung luas trapesium 

#include <stdio.h>

int main (){
	float a, b, t, L_trapesium;
	int c;
	
	//value
	printf("Menghitung luas trapesium \n");
	printf("Masukkan sisi_atas = ", &a); scanf("%f", &a);
	printf("Masukkan sisi_alas = ", &b); scanf("%f", &b);
	printf("Masukkan tinggi = ", &t); scanf("%f", &t);
	
	L_trapesium = ((a+b)/2)*t;
	printf("Hasil dari luas trapesium = %.2f cm2\n", L_trapesium);
	printf("\n");
	
	c= L_trapesium;
	printf("konversi dari tipe data float menjadi int= %d", c);
	printf ("\n");
	
	printf ("\n"); 
	printf("Terima Kasih");
	
	return 0;
	
}
