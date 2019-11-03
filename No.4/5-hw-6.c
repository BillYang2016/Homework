#include<stdio.h>

typedef long long LL;

int main() {
	LL a=1,sum=0;
	for(int i=1; i<=20; i++) {
		a*=i;
		sum+=a;
	}
	printf("%lld\n",sum);
	return 0;
}