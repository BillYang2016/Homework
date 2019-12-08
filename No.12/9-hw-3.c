#include<stdio.h>

struct Student {
	int num;
	char name[20];
	int score[3];
};

void input(struct Student stu[]);
void print(struct Student stu[]);

int main() {
	struct Student stu[10];
	input(stu);
	print(stu);
	return 0;
}

void print(struct Student stu[]) {
	for(int i=0;i<10;i++) {
		printf("%5d%10s\t",stu[i].num,stu[i].name);
		for(int j=0;j<3;j++)printf("%d\t",stu[i].score[j]);
		putchar('\n');
	}
}
 
void input(struct Student stu[]) {
	for(int i=0;i<10;i++) {
		printf("NO.");
		scanf("%d",&stu[i].num);
		printf("name:");
		scanf("%s",stu[i].name);	
		for(int j=0;j<3;j++) {
			printf("stu[%d].score[%d]:",i,j);
			scanf("%d",&stu[i].score[j]);
		}
		putchar('\n');
	}
}