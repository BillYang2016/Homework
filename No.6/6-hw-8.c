#include<stdio.h>

int n,m,a[105][105];

int main() {
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)scanf("%d",&a[i][j]);
	for(int i=1; i<=n; i++) {
		int Max=a[i][1],pos=1,flag=1;
		for(int j=2; j<=m; j++)
			if(a[i][j]>Max) {Max=a[i][j];pos=j;}
		for(int j=1; j<=n; j++)
			if(Max>a[j][pos]) {flag=0;break;}
		if(flag) {printf("%d %d %d\n",Max,i,pos);return 0;}
	}
	puts("Not exist!");
	return 0;
}