/*
Time��2017-02-28 
Lesson: ��C���Գ�����ơ�
Task��Print heart mark and twinkle three times
Student: Deng Yang
*/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

void print();
void twinkle();

int main(void){
	twinkle();
	system("pause");
	return 0;
}

void print(){
	printf("  ��� ���  ��� ���\n ���      ��       ���\n���   This is a     ���\n ���  heart mark   ���\n  ���             ���\n   ���         ���\n     ���     ���\n       ���  ���\n          ���\n");
}

void twinkle(){
	int i;
	for (i=1;i<=3;i++) {
		system("cls");
		_sleep(500);
		print();
		_sleep(500);
	}
}
