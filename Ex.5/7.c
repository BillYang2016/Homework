#include<stdio.h>

void bubble_sort(float *p,int n) {
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(p[i]>p[j]) {
				int tmp=p[i];
				p[i]=p[j];
				p[j]=tmp;
			}
}

int main() {
	int n;
	float a[105];
	scanf("%d",&n);
	for(int i=0; i<n; i++)scanf("%f",&a[i]);
	bubble_sort(a,n);
	for(int i=0; i<n; i++)printf("%f ",a[i]);
	putchar('\n');
	return 0;
}