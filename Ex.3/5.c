#include<stdio.h>
#include<math.h>

int Check(int p) {
	for(int i=2; i<=sqrt(p); i++)if(p%i==0)return 0;
	return 1;
}

int main() {
	int x;
	scanf("%d",&x);
	puts(Check(x)?"YES":"NO");
	return 0;
}