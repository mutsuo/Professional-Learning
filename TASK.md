# 课后练习

## 目录

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
