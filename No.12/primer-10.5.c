#include<stdio.h>

int main() {
	int days[12]= {31,28,[4]=31,30,31,[1]=29};
	for(int i=0; i<12; i++)printf("%2d %d\n",i+1,days[i]);
	return 0;
}