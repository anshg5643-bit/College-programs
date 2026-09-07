#include<stdio.h>
int main(){
    printf("-------Welcome To Calculator-------\n");
    float x,y;
    int c;
    printf("Enter 1st number: ");
    scanf("%f",&x);
    printf("Enter 2nd number: ");
    scanf("%f",&y);
    printf("----Operations----\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice: ");
    scanf("%d",&c);
    switch(c){
        case 1:
        printf("Sum : %f",x+y);
        break;
        case 2:
        printf("Sub : %f",x-y);
        break;
        case 3:
        printf("Mul : %f",x*y);
        break;
        case 4:
        if (y!=0){
           printf("Div : %f",x/y);
        }
        else {
            printf("Division by zero is not possible...");
        }
        break;
        default:
        printf("Invalid choice....");
    }
}