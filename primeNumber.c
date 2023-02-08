#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        printf("This is prime Number ");
    }
    else{
        printf("This is Not Prime Number");
    }
return 0;
}
