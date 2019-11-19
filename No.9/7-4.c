#include<stdio.h>

void Convert(int a[][5]) {
	for(int i=1; i<=3; i++)
		for(int j=i+1; j<=3; j++) {
			int tmp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=tmp;
		}
}

int main() {
	int a[5][5];
	for(int i=1; i<=3; i++)
		for(int j=1; j<=3; j++)scanf("%d",&a[i][j]);
	Convert(a);
	for(int i=1; i<=3; i++) {
		for(int j=1; j<=3; j++)printf("%d ",a[i][j]);
		putchar('\n');
	}
	return 0;
}