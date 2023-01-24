//File: Logika waktu
//Penulis: Salwa Iqlima KVG, email: salwaiqlimakvg@upi.edu
//Deskripsi:
//jumlah kandang untuk hewan ternak

#include <stdio.h>

int main(){
	//B= jumlah bebek perkandanng yang diinginkan
	//Masalahnya: Berapa minimal kandang yang dibutuhkan? 
	
	int jmhBebek= 12, B= 5, ab, z = 1000000;
	
	if (1<= jmhBebek<= z){
		printf ("%d, ", jmhBebek);
	}
	
	if (1<= B <= z){
		printf ("%d \n \n", B);
	}
	
	if (jmhBebek == jmhBebek || B == B){
		ab = jmhBebek/ B;
		printf ("Jumlah kandang yang harus dimiliki paling sedikit adalah %d kandang", ab);
	}
return 0;
}
	
	
	
