#include <stdio.h>
int main() {
   	char c[5000];
	int capCount = 0;
	int NlCount = 0;
    int i;
	do{
        i++;
		c[i] = getchar();

        if(0 <= (c[i]-'A') && (c[i]-'A') <= 26){capCount++;}

	}while(c[i]!=EOF);

	printf("Caps: %d",capCount);

   	return 0;
}
