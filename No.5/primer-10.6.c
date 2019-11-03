#include<stdio.h>

#define SIZE 4

int main() {
	int v1=44,v2=88,arr[SIZE];
	printf("value1=%d,value2=%d\n",v1,v2);
	for(int i=-1; i<=SIZE; i++)arr[i]=i*2+1;
	for(int i=-1; i<7; i++)printf("%2d %d\n",i,arr[i]);
	printf("value1=%d,value2=%d\n",v1,v2);
	return 0;
}