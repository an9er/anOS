/* realize function print */

#include<stdio.h>

#ifndef TEST_6_C_
#define TEST_6_C_

#define va_list             char *
#define va_start(p, fist)   (p = (va_list)&fist - sizeof(fist))
#define va_arg(p, next)     (*(next*)((p += sizeof(next)) - sizeof(next)))
// #define va_end(p)           ()

#endif // TEST_6_C_

void print(char *fmt, ...)
{
    va_list ap;
    char *p, *sval;
    int ival;
    double dval;

    va_start(ap, fmt);
    for (p = fmt; *p; p++){
        if (*p != '%') {
            putchar(*p);
            continue;
        }
        switch (*++p) {
            case 'd':
                ival = va_arg(ap, int);
                printf("%d\n", ival);
                break;
            default:
                putchar(*p);
                break;

        }
    }

}

void main() {
    int a = 123;
    print("%d%dsss\n", a, 456);
}
