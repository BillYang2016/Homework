#include<stdio.h>
#include<malloc.h>

#define N 4

int **Input();
int **Trans(int** a);
void Output();

int main() {
	int **arr=Input();
	int **p=Trans(arr);
	Output(p);
	printf("倒置后的数组：\n");
	return 0;
}

int **Input() {
	int **a=(int **)malloc(sizeof(int *)*N);
	for(int i=0; i<N; i++) {
		a[i]=(int *)malloc(sizeof(int)*N);
		if(!a[i])return NULL;
		for(int j=0; j<N; j++)scanf("%d",&a[i][j]);
	}
	return a;
}

int **Trans(int** arr) {
	int **arr2=(int **)malloc(sizeof(int *)*N);
	if(!arr2)return NULL;
	for(int i=0; i<N; i++) {
		arr2[i]=(int *)malloc(sizeof(int)*N);
		if(!arr2[i])return NULL;
		for(int j=0; j<N; j++)arr2[i][j]=arr[j][i];
	}
	return arr2;
}

void Output(int** arr) {
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++)printf("%d ",arr[i][j]);
		putchar('\n');
	}
}