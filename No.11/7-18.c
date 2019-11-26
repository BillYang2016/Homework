#include<stdio.h>

int data[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};

int Check_Leap(int x) {return (x%4==0&&x%100)||x%400==0;}

int main() {
	int y,m,d,sum=0;
	scanf("%d%d%d",&y,&m,&d);
	if(Check_Leap(y))data[2]++;
	for(int i=1; i<m; i++)sum+=data[i];
	printf("%d\n",sum+d);
	return 0;
}