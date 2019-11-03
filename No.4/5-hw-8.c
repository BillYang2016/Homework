#include<stdio.h>

int main() {
	for(int i=100; i<=999; i++) {
		int f=i%10,s=i/10%10,t=i/100;
		if(f*f*f+s*s*s+t*t*t==i)printf("%d\n",i);
	}
	return 0;
}