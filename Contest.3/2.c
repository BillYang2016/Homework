#include<stdio.h>
#include<string.h>

#define N 10
#define M 3

struct Student {
	int num,score[3],sum;
	char name[20];
};

void input(struct Student *p);
void sort(struct Student *p);
void output(struct Student *p,int n);
void insert(struct Student *p,int n,struct Student x);

int main() {
	struct Student a[N+M],b[M];
	input(a);
	sort(a);
	puts("\n插入前：");
	output(a,N);
	puts("");
	for(int i=0; i<M; i++) {
		puts("依次输入 学号 姓名 语文、数学、英语成绩");
		scanf("%d %s %d%d%d",&b[i].num,b[i].name,&b[i].score[0],&b[i].score[1],&b[i].score[2]);
		b[i].sum=b[i].score[0]+b[i].score[1]+b[i].score[2];
		insert(a,N+i,b[i]);
	}
	puts("\n插入后；");
	output(a,N+M);
	return 0;
}

void input(struct Student *p) {
	for(int i=0; i<N; i++) {
		puts("依次输入 学号 姓名 语文、数学、英语成绩");
		scanf("%d %s %d%d%d",&p[i].num,p[i].name,&p[i].score[0],&p[i].score[1],&p[i].score[2]);
		p[i].sum=p[i].score[0]+p[i].score[1]+p[i].score[2];
	}
}

// x>y ?
int cmp(struct Student x,struct Student y) {return x.sum>y.sum||(x.sum==y.sum&&x.score[0]>y.score[0])||(x.sum==y.sum&&x.score[0]==y.score[0]&&x.score[1]>y.score[1])||(x.sum==y.sum&&x.score[0]==y.score[0]&&x.score[1]==y.score[1]&&x.score[2]>y.score[2]);}

void sort(struct Student *p) {
	for(int i=0; i<N; i++)
		for(int j=i+1; j<N; j++)
			if(cmp(p[i],p[j])) {
				struct Student tmp=p[i];
				p[i]=p[j];
				p[j]=tmp;
			}
}

void insert(struct Student *p,int n,struct Student x) {
	int pos=0;
	for(int i=0; i<n; i++)if(cmp(p[i],x)) {pos=i;break;}
	struct Student tmp[n];
	memcpy(tmp,p+pos,sizeof(struct Student)*(n-pos));
	memcpy(p+pos+1,tmp,sizeof(struct Student)*(n-pos));
	p[pos]=x;
}

void output(struct Student *p,int n) {
	for(int i=0; i<n; i++)printf("学号：%d 姓名：%s 总成绩：%d 语文：%d 数学：%d 英语：%d\n",p[i].num,p[i].name,p[i].sum,p[i].score[0],p[i].score[1],p[i].score[2]);
}