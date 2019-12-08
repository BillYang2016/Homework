#include<stdio.h>

int main() {
	void change(int *p);
	int a[5][5];
	int *p;
	printf("input matrix:\n");
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	p=&a[0][0];
	change(p);
	printf("new matrix:\n");
	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++)printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}

void change(int *p) {
	int temp;
	int *pmax;
	int *pmin;
	pmax=p;
	pmin=p;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++) {
			if(*pmax<*(p+5*i+j))pmax=p+5*i+j;
			if(*pmin>*(p+5*i+j))pmin=p+5*i+j;
		}
	temp=*(p+12);
	*(p+12)=*pmax;
	*pmax=temp;
	temp=*p;
	*p=*pmin;
	*pmin=temp;
	pmin=p+1;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if(((p+5*i+j)!=p)&&(*pmin>*(p+5*i+j)))pmin=p+5*i+j;
	temp=*pmin;
	*pmin=*(p+4);
	*(p+4)=temp;
	pmin=p+1;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if(((p+5*i+j)!=(p+4))&&((p+5*i+j)!=p)&&(*pmin>*(p+5*i+j)))pmin=p+5*i+j;
	temp=*pmin;
	*pmin=*(p+20);
	*(p+20)=temp;
	pmin=p+1;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if(((p+5*i+j)!=p)&&(p+5*i+j)!=(p+4)&&(p+5*i+j)!=(p+20)&&(*pmin>*(p+5*i+j)))pmin=p+5*i+j;
	temp=*pmin;
	*pmin=*(p+24);
	*(p+24)=temp;
}