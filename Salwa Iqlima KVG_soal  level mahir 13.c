//File: Logika penjualan
//Penulis: Salwa Iqlima KVG, email: salwaiqlimakvg@upi.edu
//Deskripsi:
//Menghitung laba/ keuntungan dalam penjualan

#include <stdio.h>

int main(){
	float pembelian, penjualan, untung;
	float persentase_keuntungan; 
	
	printf("Harga beli (Rp)= ");
	scanf("%f", &pembelian);
	printf("Harga jual (Rp)= ");
	scanf("%f", &penjualan);
	
	untung= penjualan-pembelian;
	printf("Untung yang didapat: %.2f\n", untung);
	
	persentase_keuntungan= ((untung/pembelian)*100/100);
	printf("Persen laba = %.2f \n", persentase_keuntungan);
return 0;
}
