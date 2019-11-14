#include<stdio.h>

#define N 15

int main() {
	int a[N],number,loca=0,top=0,bott=N-1,min;
	printf("Input 15 numbers(a[i]>a[i-1])\n");
    scanf("%d", &a[0]);
	int i=1;
	while(i<N) {
		scanf("%d",&a[i]);
		if(a[i]>=a[i-1])i++;
		else {
			printf("Repeat input number a[i] ");
			printf("must >= %d\n",a[i-1]);
		}
	}
	printf("Input the finded number:");
	scanf("%d",&number);
	if((number<a[0])||(number>a[N-1]))loca=-1;
	while((loca==0)&&(top<=bott)) {
		min=(top+bott)/2;
		if(number==a[min]) {
			loca=min;
			printf("The serial number is  %d.\n",loca+1);
		} else if(number<a[min])bott=min-1;
		else top=min+1;
	}
	if(loca==0||loca==-1)printf("%d isn't in table\n",number);
	return 0;
}