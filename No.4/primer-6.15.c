#include<stdio.h>

int main() {
	const int secret=13;
	int enter;
	do {
		puts("To enter the triskaidekaphobia therapy club,");
		printf("please enter the secret code number:");
		scanf("%d",&enter);
	} while(enter!=secret);
	puts("Congratulations! You are cured!\n");
	return 0;
}