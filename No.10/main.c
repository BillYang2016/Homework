#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Swap(int x,int y) {int tmp=x;x=y;y=tmp;}

void Bubble_Sort(int *a,int n) {
	for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++)
			if(a[i]>a[j])Swap(&a[i],&a[j]);
}

void Select_Sort(int *a,int n) {
	for(int i=1; i<=n; i++) {
		int Min=i;
		for(int j=i+1; j<=n; j++)if(a[Min]>a[j])Min=j;
		Swap(&a[i],&a[Min]);
	}
}

int a[10005],b[10005];

void Solve(int n) {	
	for(int i=1; i<=n; i++)a[i]=b[i]=rand()%10000;
	int st=clock();
	Bubble_Sort(a,n);
	int ed=clock();
	Select_Sort(b,n);
	printf("冒泡：%dms 选择：%dms\n",ed-st,clock()-ed);
}

int main() {
	srand(time(NULL));
	puts("n=100：");
	Solve(100);
	puts("n=1000：");
	Solve(1000);
	puts("n=10000：");
	Solve(10000);
	return 0;
}