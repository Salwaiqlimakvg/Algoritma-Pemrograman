//File:operator matematika
//Penulis: Salwa Iqlima KVG, Nim:2000680, Email: salwaiqlimakvg@upi.edu
//Penjelasan program:
//Mengoperasikan beberapa operator matematika dengan nilai yang diinput manual (tipe data float)

#include <stdio.h>
int main(){
	float a, b, c, d, e, f, g;
	printf("Input nilai: \n"); 
	printf("Nilai a: "); scanf("%f", &a);
	printf("Nilai b: "); scanf("%f", &b);
	printf("Nilai c: "); scanf("%f", &c);

	d= a+b;
	printf("nilai d=%f\n", d);
	e= b-c;
	printf("nilai e=%f\n", e);
	f= c*e;
	printf("nilai f=%f\n", f);
	g=f/e;
	printf("nilai g=%f\n", g);
 	return 0;
}
