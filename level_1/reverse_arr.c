#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){
	long long n = 0;
	int* answer = (int*)malloc(sizeof(int)*11);
	
	scanf("%d", &n);

	for(int i = 0; i < 11; i++){
		answer = n % 10;
		n /= 10;
		printf("%d", answer);
	}
	return answer;

}
