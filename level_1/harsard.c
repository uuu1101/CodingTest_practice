#include<stdio.h>

bool main(void){
	int num = 0;
	int num2 = 0;
	int x = 1;
	int sum = 0;
	bool answer = true;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);
	num2 = num;

	while(num > x){
		x *= 10;
		num_len++;
	}
	for(int i= 0; i < num_len; i++){
		sum += num % 10;
		num /= 10;
	}
	printf("입력한 숫자는 %d \n", num2);
	printf("각 자리수의 합은 %d \n", sum);
	printf("입력한 숫자는 %d 자리입니다.\n", num_len);

	if(num2 % sum == 0)
		answer = true;
	else
		answer = false;

	if(answer = true)
		printf("%d는 하샤드 수 입니다.",num2);
	else
		printf("%d는 하샤드 수가 아닙니다.", num2);
	
	return answer;
}

