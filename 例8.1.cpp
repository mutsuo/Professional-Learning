/*
Time:2017-02-28
Task:��������ָ������������ַ�ʽ�������a,b��ֵ
Student:Deng Yang 
*/ 

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

int main(void){
	int * pointer1, * pointer2;
	int a,b;
	
	scanf("%d %d",&a,&b) ;
	
	pointer1=&a;
	pointer2=&b;
	
	printf("a=%d b=%d\n",a,b);
	printf("*pointer1=%d *pointer2=%d\n",* pointer1,* pointer2);
	
	return 0;
	
}
