#include"Flames.h"
#include<string.h>

int *f1(char *a, int *b, char *c) {
    int m = strlen(a);
    _strlwr(a);
    for (int i = 0; i < 26; i++)
        for (int j = 0; j < m; j++)
            if (c[i] == a[j])
                ++b[i];
    return b;
}
