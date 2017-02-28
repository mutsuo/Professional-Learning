# 【大一下】C语言程序设计
> **相关链接**

> 雪梨教育 [http://www.edu2act.cn/team/2016-ji-cheng-xu-she-ji-ji-chu-C-yu-yan/home/](http://www.edu2act.cn/team/2016-ji-cheng-xu-she-ji-ji-chu-C-yu-yan/home/)

## 目录
* [2017-02-27](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/README.md#2017-02-27)

* [2017-02-28](https://github.com/mutsuo/Professional-Learning/blob/C%E8%AF%AD%E8%A8%80%E7%A8%8B%E5%BA%8F%E8%AE%BE%E8%AE%A1/README.md#2017-02-28)

## 2017-02-27

1、一个C语言源程序有且只有一个main函数

2、main函数是源程序的入口 

3、源程序无法直接运行

3、单词（变量、常量、字面值等） 是组成源文件的基本单位

4、注释不可以出现在关键字中，编译预处理时，注释会自动变为一个空格 

5、编辑：键入、修改代码；

   编译：将文件转化成二进制文件；
   
   
   链接：目标代码生成器把语法分析后或优化后的中间代码变换成目标代码。-->将文件变成一个".exe"的可执行文件。
   

6、集成开发环境：集成了编辑、编译、链接工具的软件。

## 2017-02-28

1、 stdio.h		-->标准化输入输出头文件，其中包含“printf()”函数

stdlib.h  -->library，其中包含system("pause")、system("cls")、sleep(1000)

注：
system("cls")  //清屏

_sleep(1000)    //暂停一会儿

2、一个程序可以有多个源文件。有几个源文件，编译就生成几个obj文件（文件名同源文件）。将所有obj文件“链接”成一个文件（组合成一个文件），就是exe文件。

3、C语言的编译对象/单位是“源文件”

4、在头文件中，双引号和尖括号的区别

双引号：优先在源文件/项目所在的目录中查找；若找不到，则仍到安装目录下“include”文件夹下查找

尖括号：在安装目录下“include”文件夹下查找

5、继承开发环境中的“源文件”“头文件”是逻辑目录，不是实在目录

6、理论上所有尖括号都可以被双引号代替，但实际上，这么做会**增加编译成本**

7、双引号中可以用转义符号

8、预处理的作用之一：将头文件的内容展开
