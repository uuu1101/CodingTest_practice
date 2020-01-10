#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

char solution(int n) {
	
	char* answer = (char*)malloc(sizeof(char) * (n * 3) + 1);

	for(int i = 0; i < n; i++){
		if(i % 2 == 0)
			strcpy(answer + (i * 2), "수");
		else
			strcpy(answer + (i * 2), "박");

		printf("%s",answer);
	}

	return answer;
}

void main(void)
{
	int n;
	scanf_s("%d", &n);
	printf("%s", solution(n));

}
