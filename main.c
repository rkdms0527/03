#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, output;
	
	printf("input a : " );
	scanf("%f", &a);
	printf("input b : " );
	scanf("%f", &b);
	
	output = a / b ;
	printf("output : %f\n", output) ;
	

	return 0;
}
