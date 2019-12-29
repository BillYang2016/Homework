#include<stdio.h>

#define N 10

int main() {
	int array[N][N];
	array[0][0]=1;
	array[1][0]=array[1][1]=1;
	for(int i=2; i<N; i++) {
		array[i][0] = array[i][i] = 1;
		for(int j=1; j<i; j++)array[i][j]=array[i-1][j-1]+array[i-1][j];
	}
	for(int i=0; i<N; i++) {
		for(int j=0; j<=i; j++)printf("%4d", array[i][j]);
		printf("\n");
	}
	return 0;
}