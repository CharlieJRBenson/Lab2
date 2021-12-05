#include <stdio.h>

int main(){
    char input[20];
    int i, length;
    int notPal = 0;

    scanf("%s", &input);

    length = sizeof(input)/sizeof(input[0]);

    for(i=0;i < length ;i++){
        if(input[i] != input[(length-1)-i]){
            notPal = 1;
            break;
        }
    }

    if (notPal) {
        printf("%s is not a palindrome", input);
    }
    else {
        printf("%s is a palindrome", input);
    }
    return 0;
}
