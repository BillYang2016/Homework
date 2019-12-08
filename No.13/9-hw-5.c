#include<stdio.h>
#include<stdlib.h>

struct Student {
	int num;
	char name[20];
	int score[3];
};

void input(struct Student stu[]);
void cal(struct Student stu[]);
void print(struct Student stu[]);

int id[3];
float avg[3];
FILE *in,*out;

int main() {
	struct Student stu[10];
	input(stu);
	cal(stu);
	print(stu);
	return 0;
}

void cal(struct Student stu[]) {
	for(int j=0; j<3; j++) {
		for(int i=0; i<10; i++) {
			avg[j]+=stu[i].score[j];
			if(stu[i].score[j]>stu[id[j]].score[j])id[j]=i;
		}
		avg[j]/=10;
	}
}

void print(struct Student stu[]) {
	out=fopen("output.txt","w");
	for(int j=0; j<3; j++) {
		fprintf(out,"第%d门课平均分%f\n",j,avg[j]);
		fprintf(out,"最高分学生 学号：%d 姓名：%s 课程成绩：%d %d %d 平均分：%f\n",stu[id[j]].num,stu[id[j]].name,stu[id[j]].score[0],stu[id[j]].score[1],stu[id[j]].score[2],((double)stu[id[j]].score[0]+stu[id[j]].score[1]+stu[id[j]].score[2])/3);
	}
}

void input(struct Student stu[]) {
	in=fopen("input.txt","r");
	for(int i=0; i<10; i++) {
		fscanf(in,"%d",&stu[i].num);
		fscanf(in,"%s",stu[i].name);
		for(int j=0;j<3;j++)fscanf(in,"%d",&stu[i].score[j]);
		putchar('\n');
	}
}