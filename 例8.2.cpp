/*
Time:2017-02-28
Task:����a��b�������������ȴ��С��˳�����a��b 
Student:Deng Yang 
*/ 
 
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

int main(void){
	int a,b;
	int * pointer_1,* pointer_2;
	
	scanf("%d %d",&a,&b);
	
	if (a<b){
		pointer_1=&b;
		pointer_2=&a;
	}
		else{
			pointer_1=&a;
			pointer_2=&b;
		}
		
	printf("%d %d\n",*pointer_1,*pointer_2);
	
	return 0;
}
