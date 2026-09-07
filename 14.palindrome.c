#include<stdio.h>
int main(){
    int n;
    printf("Enter 3 digit number: ");
    scanf("%d",&n);
    if (n%10==n/100)
        printf("Palindrome...");
    else printf("Not a palindrome...");
}