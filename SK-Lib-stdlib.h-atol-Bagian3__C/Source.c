#include <stdio.h>      
#include <stdlib.h>     
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	long int li;
	char buffer[256];

	printf("Enter a long number: ");
	
	fgets(buffer, 256, stdin);
	li = atol(buffer);
	
	printf("The value entered is %ld. Its double is %ld.\n", li, li * 2);
	
	_getch();
	return 0;
}