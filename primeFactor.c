#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }

    }

    if(n==sum){
        printf("Perfect Factor");
    }
    else if(n>sum){
        printf("Dificient Factor");
    }
    else{
        printf("Abundant Factor");
    }
return 0;
}
