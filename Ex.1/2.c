#include<stdio.h>

int main() {
	int x;
	scanf("%d",&x);
	if(x%4!=0)puts("No");
	else if(x%100==0&&x%400!=0)puts("No");
	else puts("Yes");
	return 0;
}