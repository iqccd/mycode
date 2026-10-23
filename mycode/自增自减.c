#include <stdio.h>
#include <windows.h> // 新增这一行

int main() {
    // 新增这一行，65001 代表 UTF-8 编码
    SetConsoleOutputCP(65001);

    int count = 0;

    printf("--- 倒计时开始 ---\n");

    for (int i = 5; i > 0; i--) {
        count++;

        if (i % 2 != 0) {
            printf("倒计时: %d, 状态: 奇数，执行特殊任务！(已执行 %d 次)\n", i, count);
        }
        else {
            printf("倒计时: %d, 状态: 偶数，安全。\n", i);
        }
    }

    printf("--- 倒计时结束，总共循环了 %d 次 ---\n", count);
    return 0;
}