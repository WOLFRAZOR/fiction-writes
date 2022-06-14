
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int years,days;/*引入年和天数**/
    printf("Please type your age:");
    scanf("%d",&years);/*输入年龄数**/
    days = 365 * years;/*一年有365天（不考虑闰年）**/
    printf("%d %d\n",years,days);
    return 0;
}
