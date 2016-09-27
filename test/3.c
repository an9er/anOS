#ifndef INCLUDE_STRING_H_
#define INCLUDE_STRING_H_
typedef unsigned int   uint32_t;
typedef          int   int32_t;
typedef unsigned short uint16_t;
typedef          short int16_t;
typedef unsigned char  uint8_t;
typedef          char  int8_t;

void mmemcpy(uint8_t *dest, const uint8_t *src, uint32_t len);

void mmemset(void *dest, uint8_t val, uint32_t len);

void mbzero(void *dest, uint32_t len);

int strcmp(const char *str1, const char *str2);

char *strcpy(char *dest, const char *src);

char *strcat(char *dest, const char *src);

int mstrlen(const char *src);

#endif // INCLUDE_STRING_H_

#include <stdio.h>

inline void mmemcpy(uint8_t *dest, const uint8_t *src, uint32_t len)
{
    for (; len != 0; len--) {
        *dest++ == *src++;
    }
}

inline void mmemset(void *dest, uint8_t val, uint32_t len)
{
    uint8_t *dst = (uint8_t *)dest;

    for ( ; len != 0; len--) {
        *dst++ = val;
    }
}

inline void mbzero(void *dest, uint32_t len)
{
    mmemset(dest, 0, len);
}

char *strcpy(char * dest, const char *src)
{
    char *tmp = dest;

    while ((*dest++ = *src++) != '\0')
        /* nothing */;
    return tmp;
}

char * mstrcat(char * dest, const char * src)
{
    printf("in strcat@@");
    char *tmp = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0')
        ;

    return tmp;
}

int mstrlen(const char * s)
{
    printf("in strlen@@");
    const char *sc;

    for (sc = s; *sc != '\0'; ++sc)
        /* nothing */;
    return sc - s;
}

int main()
{
    char *a = "this is a";
    char *b = " and this is b";
    printf("lena:%d\n", mstrlen(a));
    printf("new string:%s\n", mstrcat(a, b));
}
