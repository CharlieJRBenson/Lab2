#include <stdio.h>
int main() {
   	char c[5000];
	int spaceCount = 0;
	int NlCount = 0;
    int i;
	do{
        i++;
		c[i] = getchar();

        if(c[i]==' '){spaceCount++;}
        else if (c[i]=='\n'){NlCount++;}

	}while(c[i]!=EOF);

	printf("Spaces: %d, NewLines: %d",spaceCount,NlCount);

   	return 0;
}
