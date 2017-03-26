#include<stdio.h>

int main()
{
    const int k=7;
    int *const q=&k;
    printf("%d", *q);
    return 0;
}