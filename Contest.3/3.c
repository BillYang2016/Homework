#include<stdio.h>

#define M 5
#define N 9

void LoadMatrix(int arrry0[][N],FILE *in);
void TransMatrix(int arr0[][N],int arr1[][M]);
void MatrixMutiply(int array0[][N],int array1[][M],int array2[][M]);
void OutputMatrix(int array0[][N],int array1[][M],int array2[][M],FILE *out);

int main() {
	FILE *in=fopen("input.txt","r"),*out=fopen("output.txt","w");
	int arr0[M][N],arr1[N][M],arr2[M][M];
	LoadMatrix(arr0,in);
	TransMatrix(arr0,arr1);
	MatrixMutiply(arr0,arr1,arr2);
	OutputMatrix(arr0,arr1,arr2,out);
	fclose(in);
	fclose(out);
	return 0;
}

void LoadMatrix(int array0[][N],FILE *in) {
	for(int i=0; i<M; i++)
		for(int j=0; j<N; j++)fscanf(in,"%d",&array0[i][j]);
}

void TransMatrix(int arr0[][N],int arr1[][M]) {
	for(int i=0; i<M; i++)
		for(int j=0; j<N; j++)arr1[j][i]=arr0[i][j];
}

void MatrixMutiply(int array0[][N],int array1[][M],int array2[][M]) {
	for(int i=0; i<M; i++)
		for(int j=0; j<M; j++) {
			array2[i][j]=0;
			for(int k=0; k<N; k++)array2[i][j]+=array0[i][k]*array1[k][j];
		}
}

void OutputMatrix(int array0[][N],int array1[][M],int array2[][M],FILE *out) {
	fprintf(out,"原矩阵：\n");
	for(int i=0; i<M; i++) {
		for(int j=0; j<N; j++)fprintf(out,"%7d ",array0[i][j]);
		fprintf(out,"\n");
	}
	fprintf(out,"转置矩阵：\n");
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++)fprintf(out,"%7d ",array1[i][j]);
		fprintf(out,"\n");
	}
	fprintf(out, "相乘得到的矩阵：\n");
	for(int i=0; i<M; i++) {
		for(int j=0; j<M; j++)fprintf(out,"%7d ",array2[i][j]);
		fprintf(out,"\n");
	}
}