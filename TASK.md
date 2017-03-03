# 课后练习

## 作业要求

* 每次提交的作业均是将代码作为**文本格式**进行提交，可以选择提交页面的“插入程序代码”进行提交。

* 代码中要添加文件头注释，头注释部分包括，**说明、姓名、学号、班级、日期**等，例如：

/*

    *说明：说明是第几次第几个作业，或直接说明作业任务名称
 
    *姓名：张三，输入自己的姓名
 
    *学号：学号，可以只输入学号的后三位
 
    * 班级：1班，输入自己所在班级
 
    * 日期：2017/03/02，日期为编写代码的日期
 
*/

* 每次作业均包含多个任务，务必将每一个任务都进行提交。

* 代码要有规范，要有良好的注释，整齐的缩进，适当的空行，恰当的空格。

## 目录

* 2017-03-03

	- [任务01_1 向C语言问好](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/TASK.md#任务01_1-向c语言问好)
	
	- [代码1](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/TASK.md#代码)
	
	- [任务01_2 法老的金字塔](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/TASK.md#任务01_2-法老的金字塔)
	
	- [代码2](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/TASK.md#代码-1)
	
	- [任务01_3 两棵松树](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/TASK.md#任务01_3-两棵松树)
	
	-[代码3](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/TASK.md#代码-2)
	
	
## 任务01_1 向C语言问好

认真阅读下面要求，完成本次任务代码的编写。

**任务：向C语言问好**

**问题描述：**

    编写程序，在屏幕上打印 "Nice to meet you, C! I am Zhangfei."，将"Zhangfei"换成自己的名字。

**程序输入：**

    无。

**程序输出：**

    输出带有自己姓名的向C语言问好语句。

**输入示例：**

    无。

**输出示例：**

    Nice to meet you, C! I am Guanyu.

### 代码

    #include<iostream> 
    #include<stdio.h>
    #include<stdlib.h>

    int main(void){
	
	    printf("Nice to meet you, C! I am Deng Yang.\n");
	
	    //system("pause");
	
	    return 0;
    }

## 任务01_2 法老的金字塔

认真阅读下面要求，完成本次任务代码的编写。


**任务：法老的金字塔**

**问题描述：**

  编写程序，在屏幕上输出金字塔图案。

**程序输入：**

  无。

**程序输出：**

  字符组成的金字塔图案。

**输入示例：**

  无。

**输出示例：**

   *

  * * *

 * * * * *

* * * * * * *

### 代码

    #include<iostream>
    #include<stdlib.h>
    #include<stdio.h>

    int main(void){
        printf("   *\n");
        printf("  ***\n");
        printf(" *****\n");
        printf("*******\n");

        //system("pause");

        return 0;
    }
    
【延伸思考】输出n层金字塔

    #include<iostream>
    #include<stdio.h>
    #include<stdlib.h>

    int main(void){
        int i,j,n;
        printf("请输入要打印金字塔的层数：");
        scanf("%d",&n);

        for (i=1;i<=n;i++) {
            for(j=1;j<=n-i;j++) printf(" ");
            for(j=1;j<=i;j++)  printf("* ");
            printf("\n") ;
        }

        //system("pause");
        return 0;
    }

## 任务01_3 两棵松树

认真阅读下面要求，完成本次任务代码的编写。


**任务：两棵松树**

**问题描述：**

  编程在屏幕上打印两棵松树图案。

**程序输入：**

  无。

**程序输出：**

  字符组成的两颗松树图案。

**输入示例：**

  无。

**输出示例：**

![alt](http://7xjtx2.com1.z0.glb.clouddn.com/media/kindeditor/upload2017/0303/qv2qVMdAeqXUfp87GpKzhj.png)

### 代码

    #include<iostream> 
    #include<stdlib.h>
    #include<stdio.h>

    int main(void) {
        printf("  *      *\n");
        printf(" ***    ***\n");
        printf("*****  *****\n");
        printf(" | |    | |\n");

        //system("pause") ;
        return 0;
    }
