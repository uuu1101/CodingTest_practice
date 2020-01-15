#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// // skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
	int answer = 0;
	int cnt = 0;
	bool check  = true;

	for(int i = 0; i < skill_trees_len; i++){
		cnt = 0;
		check = true;
		for(int j = 0; skill_trees[i][j]!= 0; j++){
			for(int k = 0; skill[k]!=0; k++)
				if(skill[k] == skill_trees[i][j]){
					if(k == cnt)
						cnt++;
					else{
						check=false;
						break;
					}
				}
			if (check == false)
				break;
		}
		if(check == true)
			answer++;
	}

	return answer;
}
