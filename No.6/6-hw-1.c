#include<stdio.h>

const int maxn=105;

int vst[maxn],Prime[maxn],cnt=0; //prime

void Prime_Sieve(int n) {
	for(int i=2; i<=n; i++) {
		if(!vst[i])Prime[++cnt]=i;
		for(int j=1; j<=cnt&&i*Prime[j]<=n; j++) {
			vst[i*Prime[j]]=1;
			if(i%Prime[j]==0)break;
		}
	}
}

int main() {
	Prime_Sieve(100);
	for(int i=1; i<=cnt; i++)printf("%d ",Prime[i]);
	putchar('\n');
	return 0;
}