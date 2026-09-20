#include<stdio.h>
int main(){
    float s,hra,da,gs;
    printf("Enter base salary: ");
    scanf("%f",&s);
    int c;
    if (s<=10000) c=1;
    else if (s>10000 && s<=20000) c=2;
    else c=3;
    switch (c){
        case 1: 
            hra=s*0.2;
            da=s*0.8;
            gs=s+hra+da;
            printf("Gross salary:%.2f",gs);
            break;
        case 2: 
            hra=s*0.25;
            da=s*0.9;
            gs=s+hra+da;
            printf("Gross salary:%.2f",gs);
            break;
        case 3: 
            hra=s*0.3;
            da=s*0.95;
            gs=s+hra+da;
            printf("Gross salary:%.2f",gs);
            break;
        default: printf("Invalid input...");
    }
}