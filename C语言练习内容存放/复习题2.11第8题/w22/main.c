#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    a = 5;
    b = 2;/*这一行执行完成后，a=5，b=2**/
    b = a;/*这一行执行完成后，a=5，b=5（原因：因为b已被a赋值5）**/
    a = b;/*这一行执行完成后，结果同上（原因：因为b赋a的值为5，保持不变）**/
    printf("%d %d\n",b,a);
    return 0;
}
