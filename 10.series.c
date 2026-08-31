#include<stdio.h>
int main(){
    float sum=0;
    for (int i=1;i<=20;i++){
        sum+=1.0/i;
    }
    printf("sum : %f",sum);
}