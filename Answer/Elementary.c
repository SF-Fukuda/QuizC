#include <stdio.h>

int main(void){

	int quizNumber = 1;
	int num1[3] = {23,48,73};
	int num2[3] = {30,59,76};
	int userAns = 0;
	int quizAns = 0;
	int correctAns = 0;
	int incorrectAns = 0;
	printf("----------クイズ計3問----------\n");

	for(int i = 0;i < 3;i ++){
		printf("第%d問\n",quizNumber);
		printf("%d + %d = ",num1[i],num2[i]);
		quizAns = num1[i] + num2[i];
		scanf("%d",&userAns);
		if(userAns == quizAns){
			printf("正解！\n");
			correctAns ++;
		}else{
			printf("残念！\n");
			incorrectAns ++;
		}
		quizNumber ++;
	}

	printf("%d問中%d問正解・不正解：%d問\n",quizNumber - 1,correctAns,incorrectAns);

	return 0;
}