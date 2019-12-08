#include<stdio.h>

struct y_m_d {int year,month,day;} date;

int days(struct y_m_d date) {
	int sum=date.day;
	int a[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=1; i<date.month; i++)sum+=a[i];
	if(date.month>2&&((date.year%4==0&&date.year%100!=0)||date.year%400==0))sum++;
	return sum;
}
 
int main() {
	int day_sum;
	printf("请输入年月日（以空格隔开）：");
	scanf("%d%d%d",&date.year,&date.month,&date.day);
	day_sum=days(date);
	printf("%d年%d月%d日是%d年的第%d天\n",date.year,date.month,date.day,date.year,day_sum);
	return 0;
}