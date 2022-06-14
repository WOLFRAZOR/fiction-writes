#include <stdio.h>

int main() {
    float i,j; /*引入变量i,j，即英尺数值、厘米数值**/
    printf("Please type your inch number in here:");
    scanf("%f",&i);/*要求用户从键盘上输入指定函数**/
    j = i * 2.54;/*将输入的英尺数值转换位厘米，1英尺等于2.54厘米**/
    printf("%f\n",j);/*显示厘米数值**/
    return 0;
}
