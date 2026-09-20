#include<stdio.h>
int main(){
    float value;
    printf("Enter value: ");
    scanf("%f",&value);
    value/=1000.0;
    printf("Value(in kb): %.2f",value);
}