//Penulis: Salwa Iqlima KVG, nim= 2000680 email: salwaiqlimakvg@upi.edu
//Deskripsi:
//jika siswa mendapat ranking 1 dan naik kelas, maka mendapat hadiah
#include <stdio.h>
#include <string.h>

int main(){
	int status;
	int ranking;
	char X [10];
	
	printf("Keterangan status: \n");
	printf("Naik Kelas (nilai = 1) \n");
	printf("tinggal Kelas (nilai = 0) \n\n");
	
	printf ("Apa status mu? : "); scanf("%d", &status);
	printf ("Ranking berapa? : "); scanf("%d", &ranking);
	
	if (status== 1 && ranking== 1) strcpy (X,"Dapat Hadiah");
	
	else strcpy (X, "Semangat!");
	
	printf("\n %s", X);
	
	return 0;
}
