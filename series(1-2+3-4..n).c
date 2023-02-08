#include<stdio.h>
int main(){
    //1-2+3-4+5...n
    int i,n,oddSum=0,evenSum=0;
    printf("Please Enter Value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            oddSum=oddSum+i;
        }
        else{
            evenSum=evenSum+i;
        }
    }

    printf("Sum of The series %d-%d=%d",evenSum,oddSum,evenSum-oddSum);

}
