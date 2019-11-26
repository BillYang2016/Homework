#include<stdio.h>

int gcd(int x,int y) {
	if(y==0)return x;
	return gcd(y,x%y);
}

int lcm(int x,int y) {return x*y/gcd(x,y);}

int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d\n",gcd(a,b),lcm(a,b));
	return 0;
}