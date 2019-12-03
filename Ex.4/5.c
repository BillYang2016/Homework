#include<stdio.h>

int main() {
	float avg();
	static int score[5]= {60,70,80,90,80};
	float aver;
	printf("\nScores:");
	for(int i=0; i<5; i++)printf("%d ",*(score+i));
	aver=avg(score);
	printf("\nAverage score: %6.2f",aver);
	return 0;
}

float avg(int *array) {
	float aver,sum=0;
	for(int i=0; i<5; i++)sum+=*(array+i);
	aver=sum/5;
	return aver;
}