/*
Time:2017-02-28
Task:定义两个指针变量，用两种方式输出变量a,b的值
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
