/*
Time：2017-02-28 
Lesson: 《C语言程序设计》
Task：Print a pyramid;
Student: Deng Yang
*/
 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i,j,n;
	cout<<"请输入要打印金字塔的层数：";
	cin>>n;
	
	for (i=1;i<=n;i++) {
		for(j=1;j<=n-i;j++) cout<<" ";
		for(j=1;j<=i;j++)  cout<<"* ";
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
