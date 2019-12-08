#include<stdio.h>
#include<malloc.h>

#define ROW 3
#define CLO 3

int **fzz(int a[][CLO]);

int main() {
	int arr[ROW][CLO]={{1,2,3},{4,5,6},{7,8,9}},**p=fzz(arr);
	printf("原数组：\n");
	for(int i=0;i<ROW;i++,printf("\n"))
		for(int j=0;j<CLO;j++)printf("%d ",arr[i][j]);
	printf("倒置后的数组：\n");
	for(int i=0;i<CLO;i++,printf("\n"))
		for(int j=0;j<ROW;j++)printf("%d ",p[i][j]);
	return 0;
}

int **fzz(int arr[][CLO]) {
	int **arr2=(int **)malloc(sizeof(int *)*CLO);
	if(!arr2)return NULL;
	for(int i=0;i<CLO;i++) {
		arr2[i]=(int *)malloc(sizeof(int)*ROW);
		if(!arr2[i])return NULL;
		for(int j=0;j<ROW;j++)arr2[i][j]=arr[j][i];
	}
	return arr2;
}