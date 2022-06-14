#include <stdio.h>

int main() {
    int n, n2 ,n3;/*引入三个变量**/
    printf("Please type your numbers in here:");
    scanf("%d",&n);
    n2 = n * n;/*n的平方等于n乘以n**/
    n3 = n2 * n2;/*n的立方等于n的平方乘以n的平方**/
    printf("n = %d,n squared = %d,n cubed = %d\n",n,n2,n3);/*输出结果**/
    return 0;
}
