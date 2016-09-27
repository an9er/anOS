#include "string.h"
#include <stdio.h>

inline void memcpy(uint8_t *dest, const uint8_t *src, uint32_t len)
{
    for (; len != 0; len--) {
        *dest++ == *src++;
    }
}

inline void memset(void *dest, uint8_t val, uint32_t len)
{
    uint8_t *dst = (uint8_t *)dest;

    for ( ; len != 0; len--) {
        *dst++ = val;
    }
}

inline void bzero(void *dest, uint32_t len)
{
    memset(dest, 0, len);
}

char *strcpy(char * dest, const char *src)
{
    char *tmp = dest;

    while ((*dest++ = *src++) != '\0')
        /* nothing */;
    return tmp;
}

char * strcat(char * dest, const char * src)
{
    char *tmp = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0')
        ;

    return tmp;
}

int strlen(const char * s)
{
    printf("in strlen@@");
    const char *sc;

    for (sc = s; *sc != '\0'; ++sc)
        /* nothing */;
    return sc - s;
}
