/*
Time��2017-02-28 
Lesson: ��C���Գ�����ơ�
Task��Print "Hello World!" and twinkle n times
Student: Deng Yang
*/

#include<iostream> 
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(void){
	int n,i;
	
	printf("������Ҫ��˸�ı�����") ;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++) {
		system("cls");
		_sleep(500);
		printf("Hello World!\n");
		_sleep(500);

	}
	
	return 0;
}
