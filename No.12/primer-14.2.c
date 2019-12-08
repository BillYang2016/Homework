#include<stdio.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
	char title[MAXTITL],author[MAXAUTL];
	float value;
};

int main() {
	struct book library[MAXBKS];
	int count=0;
	puts("Please enter the book title.");
	puts("Press [enter] at the start of a line to stop.");
	while(count<MAXBKS&&gets(library[count].title)!=NULL&&library[count].title[0]!='\0') {
		puts("Now enter the author.");
		gets(library[count].author);
		puts("Now enter the value.");
		scanf("%f",&library[count++].value);
		while(getchar()!='\n')continue;
		if(count<MAXBKS)printf("Enter the next title.\n");
	}
	if(count>0) {
		puts("Here is the list of your books: \n");
		for(int i=0; i<count; i++)printf("%s by %s: $%.2f\n",library[i].title,library[i].author,library[i].value);
	} else puts("No books?Too bad.");
	return 0;
}