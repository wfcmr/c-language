#include <stdio.h>
int main(){
    int a = 0;
    char b[20] = {'\0'};
    
    printf("请输入姓名：");
    scanf("%s",b);
    printf("请输入年龄：");
    scanf("%d", &a);
    printf("你好，%s,今年%d岁\n", b, a);

    return 0;
}