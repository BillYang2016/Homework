#include<stdio.h>

int main() {
	int no_data[4];
	printf("%2s%14s\n","i","no_data[i]  ");
	for(int i=0; i<4; i++)printf("%2d%14d\n",i,no_data[i]);
	return 0;
}