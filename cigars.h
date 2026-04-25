#include <stdio.h>
int main() {
    int cigars;
    printf("Enter the number of cigars:\n");
    scanf("%d", &cigars);

    int weekend;
    printf("Enter 1 for weekend and 0 for weekdays:\n");
    scanf("%d", &weekend);

    if (weekend == 1) {
        if (cigars >= 40) {
            printf("true");
        } else {
            printf("false");
        }
    } else {
        if (cigars >= 40 && cigars <= 60) {
            printf("true");
        } else {
            printf("false");
        }
    }

    return 0;
}