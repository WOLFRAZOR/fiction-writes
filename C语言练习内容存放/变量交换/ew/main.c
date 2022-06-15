#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a = 5;
    int b = 10;
    int t;
    t = a;
    a = b;
    b = t;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
