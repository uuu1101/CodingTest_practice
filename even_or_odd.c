#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main(void){
	int num = 0;
	char* answer = (char*)malloc(sizeof (char));
	printf("Enter the number you want to know if it is 'Even' or 'Odd'")
	scanf("%d", &num);

	if(num%2 == 0)
		answer = "Even";
	else if(num == 0)
		answer = "Even";
	else
		answer = "Odd";

	printf("%s", answer);
}
