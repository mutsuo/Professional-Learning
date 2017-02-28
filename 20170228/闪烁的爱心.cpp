/*
Time£∫2017-02-28 
Lesson: °∂C”Ô—‘≥Ã–Ú…Ëº∆°∑
Task£∫Print heart mark and twinkle three times
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
	printf("  °Ó°Ó °Ó°Ó  °Ó°Ó °Ó°Ó\n °Ô°Ô      °Ô       °Ô°Ô\n°Ó°Ó   This is a     °Ó°Ó\n °Ô°Ô  heart mark   °Ô°Ô\n  °Ó°Ó             °Ó°Ó\n   °Ô°Ô         °Ô°Ô\n     °Ó°Ó     °Ó°Ó\n       °Ô°Ô  °Ô°Ô\n          °Ó°Ó\n");
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
