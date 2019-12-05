#include<stdio.h>

#define M 12

int main() {
	int days[M] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;
	for(index = 0; index < M; index++)printf("Month %2d has %d days.\n", index + 1,*(days + index));
	return 0;
}
