#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char input_char, output_char;
	
	printf("input a char : " );
	scanf("%c", &input_char);
	
	output_char = input_char +1 ;
	printf("the next char of %c (%i) is %c (%i)\n", input_char, input_char, output_char, output_char);
	

	return 0;
}
