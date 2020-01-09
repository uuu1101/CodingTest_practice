#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

long long main(int a, int b){
	printf("몇부터 몇까지 수의 합을 구하시겠습니까? : ");
	scanf_s("%d %d", &a, &b);

	long long answer = 0;
	if (a > b)
		for (b = b; b <= a; b++)
			answer += b;
	else if (a <b)
		for (a = a; a <= a; a++)
			answer += a;
	else
		answer = a;

	printf("\n%d부터 %d까지 합은 %d 입니다.", a, b, answer);
	return answer;
}
