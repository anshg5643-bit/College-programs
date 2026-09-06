#include<stdio.h>
int main(){
    int d,m,y;
    printf("Enter date in format(dd/mm/yyyy) : ");
    scanf ("%d%d%d",&d,&m,&y);
    if (y%400==0){
        printf("Leap Year...");
    }
    else if (y%4==0 && y%100!=0){
        printf("Leap Year....");
    }
    else printf("Not a leap year");
}