//File: Logika waktu
//Penulis: Salwa Iqlima KVG, nim: 2000680, email: salwaiqlimakvg@upi.edu
//Deskripsi:
//Berapa meter jarak rumah Bu Raisa dari pasar

#include <stdio.h>

int main(){
	int waktu, kecepatan, jarak;
	
	printf("Kecepatan (meter/menit)= ");
	scanf("%d", &kecepatan);
	printf("Waktu (menit)= ");
	scanf("%d", &waktu);
	
	jarak= kecepatan*waktu;
	printf("Jadi jarak yang telah ditempuh Bu Raisa adalah %d meter \n", jarak);

return 0;
}
