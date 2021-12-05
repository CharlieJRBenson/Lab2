#include <stdio.h>

int main(){
    int i,j;
    int nums[10];
    int highest = 0;
    for(i=0;i < 10 ;i++){
        scanf("%d", &nums[i]);      
        if(nums[i]>highest){highest = nums[i];}
    }     

    //rows
    for(i=highest; i>0; i--){
        //columns
        char column[10];
        for(j=0; j<10; i++){
            if(nums[j]>= highest){
                column[j] = '*';
            }
            else{column[j] = ' ';}
        }
               
        printf("%s\n",column);
        highest--;
    }
    return 0;
}
