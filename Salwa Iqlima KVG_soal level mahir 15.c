//File: Waktu penyelesaian pekerjaan
//Penulis: Salwa Iqlima KVG, email: salwaiqlimakvg@upi.edu
//Deskripsi:
//Suatu pekerjaan bisa diselesaikan oleh 8 pekerja dalam waktu 20 hari. Jika diasumsikan kecepatan pekerja sama,
//maka 5 orang pekerja dapat menyelesaikan pekerjaan tersebut dalam waktu?

#include <stdio.h>

int main(){
	int pekerja_lama, pekerja_baru, waktu, pertama, x;
	
	printf("Jumlah pekerja lama (orang)= ");
	scanf("%d", &pekerja_lama);
	printf("Jumlah pekerja baru (orang)= ");
	scanf("%d", &pekerja_baru);
	printf("Waktu yang dibutuhkan (hari)= ");
	scanf("%d", &waktu);
	
	pertama= pekerja_lama*waktu;
	x= pertama/pekerja_baru;  
	printf("Jadi pekerja baru tersebut bisa menyelesaikan pekerjaannya dalam waktu %d hari \n", x);

return 0;
}
