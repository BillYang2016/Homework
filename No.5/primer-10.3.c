#include<stdio.h>

#define SIZE 4

int main() {
	int some_data[SIZE]= {1492,1066};
	printf("%2s%14s\n","i","some_data[i]");
	for(int i=0; i<SIZE; i++)printf("%2d%14d\n",i,some_data[i]);
	return 0;
}