#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial Value = %d ",fact);
return 0;
}
