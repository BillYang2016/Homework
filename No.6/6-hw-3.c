#include<stdio.h>

int a[5][5];

int main() {
	for(int i=1; i<=3; i++)
		for(int j=1; j<=3; j++)
			scanf("%d",&a[i][j]);
	int ans=0;
	for(int i=1; i<=3; i++)ans+=a[i][i];
	printf("%d\n",ans);
	return 0;
}