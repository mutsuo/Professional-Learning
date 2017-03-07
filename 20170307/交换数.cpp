/*
Time：2017-03-07 
Lesson: 《C语言程序设计》
Task：编写程序，从键盘上输入两个数，并输出两个数的和 
Student: Deng Yang
*/

#include<iostream> 
#include<stdlib.h>
#include<stdio.h>

int main(void){
	
	int a,b;
	
	printf("请输入两个数a,b,并用空格隔开:");
	scanf("%d %d",&a,&b);
	
	printf("a+b=%d\n",a+b);
	
	system("pause");
	return 0;
}

/*
printf函数的一般格式
	printf(格式控制,输出列表)
scanf函数的一般格式
	sacnf(格式控制,地址列表) 
*/ 
