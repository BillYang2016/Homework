#include<stdio.h>
#include<math.h>

int Check(int x) {
	for(int i=2; i<=sqrt(x); i++)if(x%i==0)return 0;
	return 1;
}

int main() {
	int x;
	scanf("%d",&x);
	puts(Check(x)?"Yes":"No");
	return 0;
}