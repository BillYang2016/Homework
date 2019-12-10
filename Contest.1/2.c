#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void Get_Prime(int n);
int Check(int x);

int *a,m=0;

int main() {
	FILE *in=fopen("input.txt","r"),*out=fopen("output.txt","w");
	int n;
	fscanf(in,"%d",&n);
	Get_Prime(n);
	for(int i=1; i<=m; i++)fprintf(out,"%d ",a[i]);
	return 0;
}

int Check(int x) {
	for(int i=2; i<=sqrt(x); i++)if(x%i==0)return 0;
	return 1;
}

void Get_Prime(int n) {
	a=(int*)malloc(n*sizeof(int));
	for(int i=1; i<=n; i++)if(Check(i))a[++m]=i;
}