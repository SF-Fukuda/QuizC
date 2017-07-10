#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	srand((unsigned)time(NULL));
	int quiz = rand() % 10 + 1;
	int userAns = 0;
	int num1,num2,quizAns;
	int correctAns = 0;
	int incorrectAns = 0;

	printf("足し算クイズ：全%d問\n", quiz);

	for(int nowQuizNum = 1;nowQuizNum <= quiz; nowQuizNum ++){
		srand((unsigned)time(NULL));
		num1 = rand() % 10;
		num2 = rand() % 20;
		quizAns = num1 + num2;

		printf("----------第%d問----------\n", nowQuizNum);
		printf("%d + %d = ",num1,num2);
		scanf("%d",&userAns);

		if(userAns == quizAns){
			printf("正解！\n");
			correctAns ++;
		}else{
			printf("不正解！\n");
			incorrectAns ++;
		}
	}

	printf("全%d問中：正解%d問・不正解%d問\n",quiz,correctAns,incorrectAns);

	return 0;
}