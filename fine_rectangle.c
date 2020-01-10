#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long w, long long h) {
	unsigned long long answer = 1;
	int gdc = 0;
	int large_num = 0;
	if(w < h)
		large_num = h;
	else 
		large_num = w; 

	for(int i = 1; i <= large_num; i++){
		if(w%i==0 && h%i==0)
			gdc = i;
	}
	answer = w * h - (w + h - gdc);
	
	return answer;
}
