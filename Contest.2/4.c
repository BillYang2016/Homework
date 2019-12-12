#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Teacher_Table {
	int num,sex,salary; //男0 女1
	char name[20],job[20];
};

struct Teacher_List {
	int num,sex,salary;
	char name[20],job[20];
	struct Teacher_List *next;
};

int N;

struct Teacher_Table *Input();
struct Teacher_List *Build(struct Teacher_Table *a);
void Output(struct Teacher_List *a);

int main() {
	struct Teacher_Table *a=Input();
	struct Teacher_List *first=Build(a);
	Output(first);
	return 0;
}

void Output(struct Teacher_List *a) {
	while(a!=NULL) {
		printf("工号：%d 姓名：%s 性别：%s 职称：%s 工资：%d\n",a->num,a->name,a->sex==0?"男":"女",a->job,a->salary);
		a=a->next;
	}
}

struct Teacher_List *Build(struct Teacher_Table *a) {
	struct Teacher_List *now,*last,*first;
	now=last=first=(struct Teacher_List *)malloc(sizeof(struct Teacher_List));
	for(int i=0; i<N; i++) {
		now->num=a[i].num;
		memcpy(now->name,a[i].name,sizeof(a[i].name));
		memcpy(now->job,a[i].job,sizeof(a[i].job));
		now->sex=a[i].sex;
		now->salary=a[i].salary;
		if(i)last->next=now;
		else first=now;
		last=now;
		now=(struct Teacher_List *)malloc(sizeof(struct Teacher_List));
	}
	return first;
}

struct Teacher_Table *Input() {
	scanf("%d",&N);
	struct Teacher_Table *a=(struct Teacher_Table *)malloc(sizeof(struct Teacher_Table)*N);
	for(int i=0; i<N; i++)scanf("%d %s %d %s %d",&a[i].num,a[i].name,&a[i].sex,a[i].job,&a[i].salary);
	return a;
}