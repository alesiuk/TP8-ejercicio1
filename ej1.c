#include <stdio.h>

int main()
{
    char a='h';
    void *p;
    p = &a;
    printf("a: %c\n", (*(char*)p));
    return 0;
}
