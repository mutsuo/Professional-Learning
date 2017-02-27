/* 
MEMO:
1、一个C语言源程序有且只有一个main函数
2、main函数是源程序的入口 
3、源程序无法直接运行
3、单词（变量、常量、字面值等） 是组成源文件的基本单位
4、注释不可以出现在关键字中，编译预处理时，注释会自动变为一个空格 
5、编辑：键入、修改代码 ；
   编译：将文件转化成二进制文件 
   链接：目标代码生成器把语法分析后或优化后的中间代码变换成目标代码。-->将文件变成一个".exe"的可执行文件 
6、集成开发环境：集成了编辑、编译、链接工具的软件 
*/ 

#include<iostream> 
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(void){
	printf("Hello world!\n");
	
	system("pause");
	return 0;
}
