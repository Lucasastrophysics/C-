#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    int a, b, c, t;
    
    a=10; b=0; c=7;
    if (a>b && a>c) {
        if (c>b)  {
            t=c;
            c=b;
            b=t;
        }
    } else if (c>a && c>b) {
        t=a; a=c; c=t;
        if (c>b) {
            t=c;
            c=b;
            b=t;
        }
    }
    printf("a=%d\tb=%d\tc=%d\n",a,b,c);
    return 0;
}

