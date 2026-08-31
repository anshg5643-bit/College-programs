#include<stdio.h>
int main(){
    int m;
    printf("Enter marks: ");
    scanf("%d",&m);
    if (m>80 && m<100) printf("Grade A");
    else if (m>60 && m<80) printf("Grade B");
    else if (m>40 && m<60) printf("Grade C");
    else printf("Fail...");
}