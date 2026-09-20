#include<stdio.h>
void star(){
        int i,j,n;
        printf("Enter number of rows: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
void number(){
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=i-1;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
    }
}
int main(){ 
    int n;
    printf("--------------------------------\n ");
    printf("         PATTERN MAKER          \n");
    printf("--------------------------------\n ");
    printf("\n1.Star Pattern\n");
    printf("2.Number Pattern\n");
    printf("Enter pattern number: ");
    scanf("%d",&n);
    switch(n){
        case 1: star(); break;
        case 2: number(); break;
        default: printf("Invalid input");
    }
}