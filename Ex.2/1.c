#include<stdio.h>

#define N 5

int main() {
	int a[N];
	int sum=0;
	float aver;
	printf("\nInput 5 numbers:");
	for(int i=0; i<5; i++) {
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	aver=(double)sum/N;
	printf("\nThe average score is:%f",aver);
	return 0;
}