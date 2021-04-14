#include<stdio.h>
#include<string.h>
#include "Flames.h"
/**
 * @brief 
 * 
 * @return int 
 */
int main() {
    char a[20] = "akhil", d[20] = "deepthi";
    int b[26], e[26], f[26], i;
    char c[] = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i < 26; i++) {
        b[i] = 0;
        e[i] = 0;
        f[i] = 0;
    }
    /**
     * @brief Construct a new f1 object
     * 
     */
    f1(a, b, c);
    /**
     * @brief Construct a new f1 object
     * 
     */
    f1(d, e, c);
    char cs = f2(f,b,e);
    /**
     * @brief Construct a new switch object
     * 
     */
    switch (cs) {
        case '1':
            printf("friends");
            break;
        case '2':
            printf("love");
            break;
        case '3':
            printf("affectionate");
            break;
        case '4':
            printf("marriage");
            break;
        case '5':
            printf("enemies");
            break;
        case '6':
            printf("siblings");
            break;
    }
    return 0;
}
