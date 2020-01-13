#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//임의의 정수n을 입력받아 제곱근을 구하고 제곱근이 있다면 n+1의 제곱을 반환, 없으면 -1을 반환

void main(void){
	long long answer = -1;
	long long n;
	scanf("lld", &n);
	printf("n: %lld\n",n);

	for (long long i =1; i <= n; i++)
		if (n / i == i && n % i == 0){
			answer = (i + 1) * (i + 1);
			break;
		}
	printf("%lld", answer);
}
