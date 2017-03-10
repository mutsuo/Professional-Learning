# 【大一下】Web开发
> **相关链接**

> 雪梨教育 [http://www.edu2act.cn/team/2016-ji-Web-kai-fa-yi-78-ban/home/](http://www.edu2act.cn/team/2016-ji-Web-kai-fa-yi-78-ban/home/)

> 教师的repository [Web1的相关资料](https://github.com/mutsuo/course-web1)

> W3School [http://www.w3school.com.cn/tags/index.asp](http://www.w3school.com.cn/tags/index.asp)

> 雪梨在线课程 [Github 开源之旅视频课程第一季：启程](http://www.edu2act.cn/course/Github-kai-yuan-zhi-lv-shi-pin-ke-cheng-di-yi-ji-q/jsrhazhpzGitBashgj/)

## 目录
* [2017-02-24](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#2017-02-24)

* [2017-02-28](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#2017-02-28)

## 2017-02-24

* [URL统一资源定位符](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#一url-统一资源定位符)
* [网页&网站](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#二网页网站)
* [网络应用程序架构](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#三网络应用程序架构)
  * B/S架构
  * C/S架构
* [Web的发展](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#四web的发展)
* [网址&域名](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#五网址域名)
* [网站结构](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#六网站结构)
* [网站内容](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#七网站内容)



### 一、URL 统一资源定位符

组成部分：协议、服务器地址、资源链接

例：
http:// www.baidu.com     /……

协议   服务器地址（域名）  资源路径

### 二、网页&网站

网页：浏览器中打开的一个页面

网站：一组“地址”相同的网页的集合（同一域名下）

### 三、网络应用程序架构

1、B/S架构（Browser/Server）：不需要安装客户端

优点：

（1）不须安装客户端、直接通过URL访问

（2）跨平台能力强

（3）升级方便，客户端不需要维护

缺点：

（1）不能直接使用客户端硬件资源，用户体验单一

（2）可能出现卡顿

	例:微博

2、C/S架构（Client/Server）：需要安装客户端软件

缺点：

（1）需要安装特定客户端程序

（2）针对不同平台开发不同版本

（3）升级需要重新安装

优点：充分使用客户端硬件资源
	例：QQ

### 四、Web的发展

	web1.0  -->>  Web2.0  -->>  移动互联网  -->>  物联网 -->> ……
       --------      --------       -----------
       信息上网       人上网          随时上网

### 五、网址、域名

教育科研 edu.cn

政府网站 gov.cn

### 六、网站结构

1、主页

2、分支

3、叶子：具体内容

### 七、网站内容

1、首页

2、列表页

3、内容页

#### [︽︽返回顶部︽︽](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#大一下web开发)

## 2017-02-28

* [Git的一些简单的命令](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#一git的一些简单的命令)

* [Git的配置](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#二git的配置)

### 一、Git的一些简单的命令

* cd --> change directory 改变目录

* mkdir --> make directory 创建目录

* pwd --> print working directory 打印当前工作目录

* mv --> move 移动

例：
	
	mv b.txt ../b.txt
	
	将b.txt文件移动到上一级文件中	
	
* mv a.txt c.txt  --> 将a.txt重命名为c.txt

* cp --> copy 复制

例:

	cp a.txt b.txt
	
	复制a.txt文件到b.txt	
		
* rm --> remove 删除

* echo '内容' --> 打印包含‘xx’的内容

例：
	
	echo 'hello' > a.txt
	
	打印‘hello’到a.txt文件中
	
* cat 文件名 --> 打印文件内容

* ls .. --> 查看上级目录

* clear --> 清空屏幕

### 二、Git的配置

命令：
	
	git config --list	-->出现配置信息
	
	git config --global user.name "用户名"	-->设置提交仓库时的用户名信息	
	
	git config --global user.email "邮箱地址"	-->设置提交仓库时的邮箱信息	//建议用注册时填写的邮箱地址

#### [︽︽返回顶部︽︽](https://github.com/mutsuo/Professional-Learning/blob/Web%E5%BC%80%E5%8F%91%EF%BC%88%E4%B8%80%EF%BC%89/README.md#大一下web开发)

## 2017-03-03

### 一、网页浏览的过程

1、通过输入网址指定要访问的网页

2、请求

3、响应：将网页文件传回

4、浏览器解析网页文件

### 二、网页文件

1、浏览器中看到的实际是网页文件

2、组成：文本信息、代码标签

3、如果想让别人看到你的网页，要把网页文件放到特定的web服务器上

4、不是所有电脑都能做web服务器，要安装特定的软件

### 三、HTML语言三要素

HTML（Hyper Text Markup Language）：超文本标记语言

* 词汇（标签）

* 语法（标签的使用规定）

* 语义（浏览器“理解”标签的含义）

例:

	词汇：html
	
	语法：成对出现，可嵌套，分别位于文件的开头和结尾
	
	语义：开始，结束

## 四、标签

1、分类

* 双标签：由开始标签和结束标签组成，要合理嵌套

* 单标签

如</ br></ hr>


Q：为什么既有双标签，又有单标签？

双标签有作用范围，单标签没有作用范围，只有代表的语义

2、属性

（1）HTML标签可以拥有属性，属性提供了标签的更多语义信息

（2）属性标签总是在开始标签中规定

（3）不同标记有不同属性

（4）属性一定用双引号括起来

## 五、标签关系

* 嵌套

* 并列

## 六、HTML的基本骨架

1、

	<!DOCTYPE html>		//-->文档声明标签

	<html>

		<head>
		
			<title></title>
		
		</head>
	
		<body>
	
		</body>

	</html>

2、基本结构的语法语义

* html

3、为了防止乱码，最好在head标签中写上：
	
	<meta charset="UTF-8">

最好在编写代码的全过程中，最好不要更改编码方式

4、换行标签
	
	</ br>
	
	或
	
	<p></p>
	
5、注意事项

（1）扩展名为.html或.htm

（2）文件名中只可由英文字母、下划线组成

（3）不可有特殊符号

（4）要注意关闭标签

## 2017-03-10

https:htmlpreview.github.io/?


## 一、网页元素：文本、图片、超链接和列表

### 1、 列表：排列整齐的元素

（1）有序列表

    <ol>

    	<li></li>


    </ol>

（2）无序列表


①语法

    <ul>

    	<li></li>

    <ul>

②属性：disc、circle、square

### 2、 菜单 --> 超链接

### 3、 网页中插入文本：直接在网页文件中写入文本

（1）段落：网页中显示的一段文字

    <p></p>

（2）水平线

    <hr />

（3）实体：用来替换html内容的预留字符

注意：以英文状态下的分号结尾

（4）页面注释：

    <!--内容-->

快捷键：ctrl+\

