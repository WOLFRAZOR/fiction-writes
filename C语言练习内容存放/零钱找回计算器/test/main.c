#include <stdio.h>

int main() {
    float price,change = 0;/*引入价格、找零两个变量，并重置该变量计数器（初始化变量）**/
    printf("请输入商品价格（元）:");
    scanf("%f",&price);/*让用户输入商品价格**/
    change = 1000 - price;/*计算找回数值 **/
    printf("找回%f元。\n",change);/*显示找回数值**/
    return 0;
}
