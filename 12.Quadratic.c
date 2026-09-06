#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,r1,r2;
    printf("Enter values of a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a==0) {
        printf("Not a Quadratic Equation....");
    }
    else {
    d=b*b-4*a*c;
    if (d>0){
        r1=(-b+pow(d,0.5))/(2*a);
        r2=(-b-pow(d,0.5))/(2*a);
        printf("Root 1:%.2f\nRoot 2:%.2f",r1,r2);
    }
    else if (d==0){
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("Root 1:%.2f\nRoot 2:%.2f",r1,r2);
    }
    else printf("No real roots");
    }
    int roll;
    char name[50];
    printf("\nNAME : ");
    scanf(" %[^\n]",name);
    printf("Roll No. : ");
    scanf("%d",&roll);
    return 0;
}