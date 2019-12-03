#include<stdio.h>

int main() {
	int a[6],x;
	printf("\nInput 5 numbers:");
	for(int i=1; i<=5; i++)scanf("%d",a+i);
	printf("\nInput x:");
	scanf("%d",&x);
	*a=x;
	int i=5;
	while(x!=*(a+i))i--;
	if(i!=0)printf("%5d's position is: %4d\n",x,i);
	else printf("%5d Not been found!\n",x);
	return 0;
}