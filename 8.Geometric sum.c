#include <stdio.h>
int a,r,sum=0,t;
printf("Enter first term: ");
scanf("%d",&a);
printf("Enter common ratio: ");
scanf("%d",&r);
printf("Enter number of terms: ");
scanf("%d",&t);
for (int i=0;i<t;i++){
    sum+=a;
    a*=r;
}
printf("Sum of %d terms of gp: %d",t,sum);