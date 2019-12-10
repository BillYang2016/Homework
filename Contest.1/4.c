#include<stdio.h>

struct Teacher {
	char name[30];
	int number;
};

int Input(struct Teacher *a);

void Sort(int n,struct Teacher *a);

void Find(int n,struct Teacher *a,int x);

int main() {
	struct Teacher a[105];
	int n=Input(a),x;
	Sort(n,a);
	for(int i=1; i<=n; i++)printf("姓名：%s 工号：%d\n",a[i].name,a[i].number);
	scanf("%d",&x);
	Find(n,a,x);
	return 0;
}

int Input(struct Teacher *a) {
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)scanf("%s%d",a[i].name,&a[i].number);
	return n;
}

void Sort(int n,struct Teacher *a) {
	for(int i=1; i<=n; i++) {
		int Min=i;
		for(int j=i+1; j<=n; j++)if(a[j].number<a[Min].number)Min=j;
		struct Teacher tmp=a[i];
		a[i]=a[Min];
		a[Min]=tmp;
	}
}

void Find(int n,struct Teacher *a,int x) {
	int L=1,R=n;
	while(L<=R) {
		int mid=(L+R)/2;
		if(a[mid].number==x) {
			printf("第%d个老师，工号%d，姓名%s\n",mid,a[mid].number,a[mid].name);
			return;
		}
		if(a[mid].number<x)L=mid+1;
		else R=mid-1;
	}
	puts("没有该工号的老师");
}