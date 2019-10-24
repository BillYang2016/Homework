#include<stdio.h>
#include<math.h>

int main() {
	int x;
	while(true) {
		scanf("%d",&x);
		if(x>=1000||x<=0)puts("请重新输入。");
		else break;
	}
	printf("%d\n",int(sqrt(x)));
	return 0;
}