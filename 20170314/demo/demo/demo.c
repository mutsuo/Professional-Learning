#include <stdio.h>
#include <string.h>
int main() {
	char s[1000];
	while (gets(s) != NULL) { //ѭ������s
		if (0<strlen(s))    //�����ж���������Ƿ�Ϊ��
			printf("%s ��Ϊ��", s);
		else
			printf("%s Ϊ��", s);
	}
	return 0;
}