//File:operator matematika
//Penulis: Salwa Iqlima KVG, Nim: 2000680, Email: salwaiqlimakvg@upi.edu
//Penjelasan program:
//Mengoperasikan beberapa operator matematika dengan nilai yang diinput manual

#include <stdio.h>
int main(){
	int a, b, c, d, e, f, g;
	printf("Input nilai: \n"); 
	printf("Nilai a: "); scanf("%d", &a);
	printf("Nilai b: "); scanf("%d", &b);
	printf("Nilai c: "); scanf("%d", &c);

	d= a+b;
	printf("nilai d=%d\n", d);
	e= b-c;
	printf("nilai e=%d\n", e);
	f= c*e;
	printf("nilai f=%d\n", f);
	g=f/e;
	printf("nilai g=%d\n", g);

	return 0;
}
