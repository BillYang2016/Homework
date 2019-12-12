#include<stdio.h>
#include<stdlib.h>

#define N 5

struct Student {
	int num,score[3],sum;
	char name[20];
};

void Getsum(struct Student *a);
struct Student *Input();
void Sort(struct Student *a);
void Output(struct Student *a);

int main() {
	struct Student *a=Input();
	Getsum(a);
	Sort(a);
	Output(a);
	return 0;
}

void Output(struct Student *a) {
	FILE *out=fopen("output.txt","w");
	for(int i=0; i<N; i++)fprintf(out,"学号：%d 姓名：%s 总分：%d\n",a[i].num,a[i].name,a[i].sum);
}

void Getsum(struct Student *a) {
	for(int i=0; i<N; i++)a[i].sum=a[i].score[0]+a[i].score[1]+a[i].score[2];
}

void Sort(struct Student *a) {
	for(int i=0; i<N; i++)
		for(int j=i+1; j<N; j++)
			if(a[i].sum<a[j].sum||(a[i].sum==a[j].sum&&a[i].score[0]<a[j].score[0])||(a[i].sum==a[j].sum&&a[i].score[0]==a[j].score[0]&&a[i].score[1]<a[j].score[1])||(a[i].sum==a[j].sum&&a[i].score[0]==a[j].score[0]&&a[i].score[1]==a[j].score[1]&&a[i].score[2]<a[j].score[2])) {
				struct Student tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
}

struct Student *Input() {
	FILE *in=fopen("input.txt","r");
	struct Student *a=(struct Student *)malloc(sizeof(struct Student)*N);
	for(int i=0; i<N; i++)fscanf(in,"%d %s %d%d%d",&a[i].num,a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]);
	return a;
}