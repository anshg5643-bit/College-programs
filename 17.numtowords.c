#include <stdio.h>
#include <math.h>
int main(){
    int n,rev=0,rem=0,v;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n==0) {
    printf("Zero"); 
    return 0;
    }
    while (n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    while(rev!=0){
        v=rev%10;
        switch(v){
            case 0: printf("Zero ");  break;
            case 1: printf("One ");   break;
            case 2: printf("Two ");   break;
            case 3: printf("Three "); break;
            case 4: printf("Four ");  break;
            case 5: printf("Five ");  break;
            case 6: printf("Six ");   break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine ");  break;
        }
        rev/=10;
    }
}