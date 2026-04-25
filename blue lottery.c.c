#include <stdio.h>

int main() {
    int a,b,c;
    printf(" eneter the value in a:\n");
    scanf("%d",&a); 
    printf(" eneter the value in b:\n");
    scanf("%d",&b);
    printf(" eneter the value in c:\n");
    scanf("%d",&c);
    if(a+b==10||b+c==10||c+a==10)
    {
        printf("10");
    }
    else if(a>10||b>10||c>10)
    {
        printf("3");
    }
    else 
    {
        printf("0");
    }

    return 0;
}