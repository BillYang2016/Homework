#include<stdio.h>

const int maxn=105;

int n,a[maxn][maxn];

void Place(int x,int y,int cnt) {
	if(cnt==n*n+1)return;
	if(x<1)x=n;
	else if(x>n)x=1;
	if(y>n)y=1;
	a[x][y]=cnt;
	if(a[x-1][y+1]||(x==1&&y==n))Place(x+1,y,cnt+1);
	else Place(x-1,y+1,cnt+1);
}

int main() {
	scanf("%d",&n);
	Place(1,n/2+1,1);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++)
			printf("%2d ",a[i][j]);
		putchar('\n');
	}
	return 0;
}