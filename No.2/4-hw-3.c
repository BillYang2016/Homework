#include<stdio.h>

int main() {
	int a=3,b=4,c=5,x,y;
	printf("%d %d %d %d %d\n",((a+b)>c)&&(b==c),(a||(b+c)&&(b-c)),(!(a>b)&&((!c)||1)),(!(x=a)&&(y=b)&&0),(!(a+b)+c-1)&&(b+c/2));
	return 0;
}