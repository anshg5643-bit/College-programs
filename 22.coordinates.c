#include<stdio.h>
int main(){
    int x,y;
    printf("Enter X coordinate: ");
    scanf("%d",&x);
    printf("Enter Y coordinate: ");
    scanf("%d",&y);
    if (x>0 && y>0) printf("First quadrant...");
    else if (x<0 && y>0) printf("Second quadrant...");
    else if (x<0 && y<0) printf("Third quadrant...");
    else if (x>0 && y<0) printf("Fourth quadrant...");
    else printf("On Axis...");
}