#include <stdio.h>

int main(int argc, const char * argv[]) {
    double foot,inch;
    printf("Please type your foot in here:");
    scanf("%lf %lf",&foot,&inch);
    printf("身高是%f米。\n",(foot + inch / 12) * 0.3048);
    return 0;
}
