#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		printf("盘子 %d 从 %c 移动到 %c\n", n, a, c);
 		return;
	}
	hanoi(n - 1, a, c, b); // 步骤1：把上面 n-1 个从 a 移到 b，借助 c
	printf("盘子 %d 从 %c 移动到 %c\n", n, a, c); // 步骤2：把最底下的 n 从 a 移到 c
	hanoi(n - 1, b, a, c); // 步骤3：把 b 上的 n-1 个移到 c，借助 a
}
int main()
{ 
	hanoi(4, 'A', 'B', 'C'); // 调用函数，移动 3 个盘子从 A 到 C，借助 B
	return 0;
}