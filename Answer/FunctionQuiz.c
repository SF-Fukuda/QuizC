#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int opening();
int probrem();
int userinput();
int correctness();

int correctAns = 0;
int incorrectAns = 0;


int main(void){
	
	int quizNum = 0;
	quizNum = opening();

	for(int nowQuizNum = 1;nowQuizNum <= quizNum; nowQuizNum ++){
		
		int quizA = probrem(nowQuizNum);
		int userI = userinput();
		correctness(quizA,userI);
		
	}

	printf("全%d問中：正解%d問・不正解%d問\n",quizNum,correctAns,incorrectAns);

	return 0;
}
int opening(void){
	srand((unsigned)time(NULL));
	int quiz = rand() % 10 + 1;
	printf("足し算クイズ：全%d問\n", quiz);

	return quiz;
}

int probrem(int nowQNum){

	int userAns = 0;
	int num1,num2,quizAns;

	srand((unsigned)time(NULL));
	num1 = rand() % 10;
	num2 = rand() % 20;
	quizAns = num1 + num2;

	printf("----------第%d問----------\n", nowQNum);
	printf("%d + %d = ",num1,num2);

	return quizAns;
}
int userinput(void){
	int userAns = 0;
	scanf("%d", &userAns);

	return userAns;
}
int correctness(int ua,int qa){
	if(ua == qa){
			printf("正解！\n");
			correctAns ++;
		}else{
			printf("不正解！\n");
			incorrectAns ++;
		}

	return 0;	
}