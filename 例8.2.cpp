/*
Time:2017-02-28
Task:输入a和b两个整数，按先大后小的顺序输出a和b 
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
