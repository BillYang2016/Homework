#include<stdio.h>

void select_sort(float *p,int n) {
	for(int i=0; i<n; i++) {
		int Min=i;
		for(int j=i+1; j<n; j++)if(p[j]<p[Min])Min=j;
		int tmp=p[i];
		p[i]=p[Min];
		p[Min]=tmp;
	}
}

int main() {
	int n;
	float a[105];
	scanf("%d",&n);
	for(int i=0; i<n; i++)scanf("%f",&a[i]);
	select_sort(a,n);
	for(int i=0; i<n; i++)printf("%f ",a[i]);
	putchar('\n');
	return 0;
}