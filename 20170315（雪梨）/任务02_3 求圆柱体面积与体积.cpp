/*
* ˵��������02_3 ��Բ������������
* �������˕D
* ѧ�ţ�2016011635 
* �༶��7�� 
* ���ڣ�2017/03/15 
*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#define PI 3.14

int main(void){
	float r,h,
		  v,s;
	
	printf("Բ�����Բ�뾶Ϊ��");
	scanf("%f",&r);
	printf("Բ����߶�Ϊ��");
	scanf("%f",&h);
	
	v=PI*r*r*h;
	s=2*PI*r*r+2*PI*r*h;
	
	printf("Բ��������Ϊ��%.2f\n",s);
	printf("Բ�������Ϊ��%.2f\n",v);
	
	//system("pause");
	return 0;
}
