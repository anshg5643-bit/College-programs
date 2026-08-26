#include <stdio.h>

// 7. Factorial

int main(){
    int n;
    printf("Enter number for factorial : ");
    scanf("%d",&n);
    for (int i=n-1;i>0;i--){
        n*=i;
    }
    printf("%d",n);
}