#include <stdio.h>
#include <string.h>

#define MAX 128

int getline(char s[],int lim);


void main(void){
	char s[MAX];
	int hossz,joe,proba=0;

	do {
		joe=1;
		proba++;
		printf("Kerem a pin kodot (%d/3): \n",proba);
		hossz = getline(s,MAX);
		if (strcmp("1234",s) != 0){
			joe=0;
		}

		if (joe == 0){
			printf("Hibas input!!\n");
		}
	} while(joe == 0 && proba < 3);
	if (joe == 1){
		printf("Jo pin kod!\n");
	}
	else {
		printf("Nincs tobb lehetoseg!\n");
	}

	printf("Kilepes");

	getchar();

}

















int getline(char s[],int lim)
{
	int i,c;
	for(i=0; i<lim && (c=getchar())!=EOF && c!='\n'; ++i) s[i]=c;
	s[i]='\0';
	while(c!=EOF && c!='\n') c=getchar();
	return i;
}