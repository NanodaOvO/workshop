//press F5 to debug调试, press Ctrl+F5 to execute开始执行
#include <stdio.h>
#include <unistd.h>
/*for msvc:#include <windows.h>*/

int main(){
    printf("Hello, World!\n");
    sleep(1);
    /*for msvc:system("pause");【按任意键继续。。。】*/
    return 0;
}