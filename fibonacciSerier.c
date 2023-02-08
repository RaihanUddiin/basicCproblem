#include<stdio.h>
int main(){
    int first=0,second=1,fibo,count=0,i,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(count<=1){
            fibo=count;
        }
        else{
            first=second;
            second=fibo;
            fibo=first+second;
        }
        printf("%d ",fibo);
        count++;
    }

return 0;
}
