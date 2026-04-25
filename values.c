#include <stdio.h>

int main() {  
int a,b,c;
printf("enter the value in a: \n");
scanf("%d",&a);
printf("enter the value in b: \n");
scanf("%d",&b);
printf("enter the value in c: \n");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("largest is %d \n",a);
if (b>c)
{
printf("middle is %d \n",b);
printf("smallest is %d \n",c);
}
else
{
printf("middle is %d \n",c);
printf("smallest is %d \n",b);
}
}
else if(b>a&&b>c)
{
printf("largest: %d \n",b);
if(a>c)
{
printf("middle is %d \n",a);
printf("smallest is %d \n",c);
}
else
{
printf("middle is %d \n",c);
printf("smallest is %d \n",a);
}
}
else if(c>a&&c>b)
{
printf("largest: %d \n",c);
if(a>b)
{
printf("middle: %d \n",a);
printf("smallest: %d \n",b);
}
else{
printf("middle: %d \n",b);
printf("smallest: %d \n",a);
}
}
}