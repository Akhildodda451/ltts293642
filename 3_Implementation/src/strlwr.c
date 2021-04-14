#include"Flames.h"
#include<ctype.h>
/**
 * @brief 
 * 
 * @param str 
 * @return char* 
 */
char *strlwr(char *str)
{
    unsigned char *p = (unsigned char *)str;
/**
 * @brief Construct a new while object
 * 
 */
    while (*p) {
        *p = tolower((unsigned char)*p);
        p++;
    }

    return str;
}

