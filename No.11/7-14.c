#include<stdio.h>

int n=10,m=5;

double a[11][6],stu_avg[11],cls_avg[6];

void Stu_Avg() {
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++)stu_avg[i]+=a[i][j];
		stu_avg[i]/=m;
	}
}

void Cls_Avg() {
	for(int j=1; j<=m; j++) {
		for(int i=1; i<=n; i++)cls_avg[j]+=a[i][j];
		cls_avg[j]/=n;
	}
}

double Max=0;
int posx,posy;

void Max_Scr() {
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)if(a[i][j]>Max) {Max=a[i][j];posx=i;posy=j;}
}

double sigma;

void S_Var() {
	double L=0,R=0;
	for(int i=1; i<=n; i++)L+=stu_avg[i]*stu_avg[i],R+=stu_avg[i];
	sigma=L/n-(R/n)*(R/n);
}

int main() {
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)scanf("%lf",&a[i][j]);
	Stu_Avg();
	puts("学生平均分：");
	for(int i=1; i<=n; i++)printf("%lf ",stu_avg[i]);
	putchar('\n');
	Cls_Avg();
	puts("课程平均分：");
	for(int i=1; i<=m; i++)printf("%lf ",cls_avg[i]);
	putchar('\n');
	Max_Scr();
	puts("最高分 对应学生 课程：");
	printf("%lf %d %d\n",Max,posx,posy);
	S_Var();
	printf("方差：%lf\n",sigma);
	return 0;
}