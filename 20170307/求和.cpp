/*
Time��2017-03-07 
Lesson: ��C���Գ�����ơ�
Task����д���򣬴Ӽ�������һ��n�����㲢����1+2+...+n��ֵ 
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
	
	//����һ����ģ��
	for(i=1;i<=n;i++) sum+=i;
	printf("1+2+...+n=%d\n",sum);
	
	//����������ѧ����
	
	sum=(1+n)*n/2;
	printf("1+2+...+n=%d\n",sum);
	
	system("pause");
	return 0;
}
