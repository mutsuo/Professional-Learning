#include <stdio.h>
#include <string.h>
int main() {
	char s[1000];
	while (gets(s) != NULL) { //循环读入s
		if (0<strlen(s))    //根据判断输出输入是否为空
			printf("%s 不为空", s);
		else
			printf("%s 为空", s);
	}
	return 0;
}