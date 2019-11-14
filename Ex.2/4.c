#include<stdio.h>

int main() {
	int a[3][3],sum=0;
	printf("\nPlease input data: \n");
	for(int i=0; i<3; i++)scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	for(int i=0; i<3; i++)printf("\n%d %d %d ",a[i][0],a[i][1],a[i][2]);
	for(int i=0; i<3; i++)sum=sum+a[i][i];
	printf("\nThe data is :%d",sum);
	return 0;
}