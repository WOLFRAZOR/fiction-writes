#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 0;/*引入变量“打印次数”**/
    for (i = 0; i<3; i++) {
        printf("For he's a jolly good fellow!\n");
    }/*输入打印的内容，设置循环次数。i=0为初始化的数值，i<3为输出不超过3次，i++是最大上限次数**/
    printf("Which nobody can deny!\n");
    return 0;
}
