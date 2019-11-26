#include<stdio.h>
#include<string.h>

int n=10,a[11];
char Name[11][55];

void Input() {
	for(int i=1; i<=n; i++) {
		gets(Name[i]);
		scanf("%d",&a[i]);
		getchar();
	}
}

void Sort() {
	for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++)
			if(a[i]>a[j]) {
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
				char t[55];
				strcpy(t,Name[i]);
				strcpy(Name[i],Name[j]);
				strcpy(Name[j],t);
			}
	for(int i=1; i<=n; i++)printf("%s %d\n",Name[i],a[i]);
}

void Search(int x) {
	int L=1,R=n;
	while(L<=R) {
		int mid=(L+R)/2;
		if(x<a[mid])R=mid-1;
		else L=mid+1;
	}
	if(x==a[R])printf("%s\n",Name[R]);
	else puts("Not Found.");
}

int main() {
	Input();
	Sort();
	int x;
	scanf("%d",&x);
	Search(x);
	return 0;
}