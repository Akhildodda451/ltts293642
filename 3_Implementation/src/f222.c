#include "Flames.h"
/**
 * @brief 
 * 
 * @param f 
 * @param b 
 * @param e 
 * @return char 
 */
char f2(int *f, int *b, int *e) {
    int i;
    for (i = 0; i < 26; i++) {
        f[i] = b[i] - e[i];
    }
    for ( i = 0; i < 26; i++) {
        if (f[i] < 0) {
            f[i] = -f[i];
        }
    }
    int sum = 0;
    for (i = 0; i < 26; i++) {
        sum = sum + f[i];
    }
    char x[] = "123456", t;
    int ind = 6, k = 0, temp = 0, j = 1;
    for (k = 0; k < 5; k++) {
        if (sum < ind) {
            temp = sum + j - 1;
        } else if (sum > ind) {
            temp = (sum + j - 1) % ind;
        }
        if (temp > ind) {
            temp = temp % ind;
        }
        if (temp == ind || temp == 0) {
            j = 1;
            ind--;
            continue;
        } else {
            for (i = temp; i < ind; i++) {
                t = x[i];
                x[i - 1] = x[i];
                x[i] = t;
            }
            j = temp;
            ind--;
        }
    }
    /**
     * @brief return x[0]
     * 
     */
    return x[0];
}
