#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dif();
int userInput();
int ansCorrect();

int num1,num2,sum,userAns;
int correctAns = 0;
int incorrectAns = 0;

int main(void){

	int choseNum = 0;
	int quizNum = 0;
	int difficulty = 0;
	int difNum = 0;

	printf("----------------------------\n");
	printf("モードを選択してください\n");
	printf("1.足し算　2.引き算　3.掛け算　4.割り算\n");
	printf("=>");
	scanf("%d",&choseNum);

	printf("----------------------------\n");
	printf("問題数を入力してください=>");
	scanf("%d",&quizNum);

	printf("----------------------------\n");
	printf("難易度を選択してください\n");
	printf("1.簡単　2.普通　3.難しい\n");
	printf("=>");
	scanf("%d",&difficulty);

	if(difficulty == 1){
		difNum = 10;	
	}else if(difficulty == 2){
		difNum = 50;
	}else{
		difNum = 500;
	}

	for(int nowQuizNum = 1;nowQuizNum <= quizNum;nowQuizNum++){
		
		dif(difNum);
		printf("------------第%d問-----------\n",nowQuizNum);
		switch(choseNum){
			case 1:
				sum = num1 + num2;
				printf("%d + %d = ",num1,num2);
				userAns = userInput();
				ansCorrect(sum,userAns);
				break;
			case 2:
				sum = num1 - num2;
				printf("%d - %d = ",num1,num2);
				userAns = userInput();
				ansCorrect(sum,userAns);
				break;
			case 3:
				sum = num1 * num2;
				printf("%d * %d = ",num1,num2);
				userAns = userInput();
				ansCorrect(sum,userAns);
				break;
			case 4:
				sum = num1 / num2;
				printf("%d / %d = ",num1,num2);
				userAns = userInput();
				ansCorrect(sum,userAns);
				break;
		}
	}
	printf("----------------------------\n");
	printf("全%d問中　正解%d問・不正解%d問\n",quizNum,correctAns,incorrectAns);

	return 0;
}

int dif(int difN){
	srand((unsigned)time(NULL));
	num1 = rand() % difN;
	num2 = rand() % difN;

	return 0;
}
int userInput(){
	int userA = 0;
	scanf("%d",&userAns);

	return userAns;
}
int ansCorrect(int quizAns,int usrAns){
	if(quizAns == usrAns){
		correctAns ++;
		printf("正解\n");
	}else{
		incorrectAns ++;
		printf("不正解\n");
		printf("正解=> %d\n",quizAns );
	}	
}