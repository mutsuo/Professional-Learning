/*
Time：2017-03-07 
Lesson: 《C语言程序设计》
Task：编写程序，从键盘输入一个n，计算并计算1+2+...+n的值 
Student: Deng Yang
*/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

int main(void){
	int n,i,
		sum=0;
	
	printf("Please input n:");
	scanf("%d",&n);
	
	//方法一：纯模拟
	for(i=1;i<=n;i++) sum+=i;
	printf("1+2+...+n=%d\n",sum);
	
	//方法二：数学方法
	
	sum=(1+n)*n/2;
	printf("1+2+...+n=%d\n",sum);
	
	system("pause");
	return 0;
}
