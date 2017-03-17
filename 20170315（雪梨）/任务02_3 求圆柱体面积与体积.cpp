/*
* 说明：任务02_3 求圆柱体面积与体积
* 姓名：邓旸
* 学号：2016011635 
* 班级：7班 
* 日期：2017/03/15 
*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

#define PI 3.14

int main(void){
	float r,h,
		  v,s;
	
	printf("圆柱体底圆半径为：");
	scanf("%f",&r);
	printf("圆柱体高度为：");
	scanf("%f",&h);
	
	v=PI*r*r*h;
	s=2*PI*r*r+2*PI*r*h;
	
	printf("圆柱体表面积为：%.2f\n",s);
	printf("圆柱体体积为：%.2f\n",v);
	
	//system("pause");
	return 0;
}
