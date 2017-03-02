# 【大一下】计算机网络原理

## 第二章 物理层

> **重要公式**

> 数字信号携带的比特信息量 = 2 ^ (码元个数)

> 数据率 = 码元速率 * 携带的比特信息量

### 2.1 物理层的基本概念

1、 描述

物理层考虑的是怎样才能在连接各种计算机的传输媒体上传输比特流，而非传输媒体。

2、 主要任务

确定与传输媒体的接口有关的一些特性。

  特性如下：

* 机械特性：接线器的形状和尺寸，引脚数目和排列，固定和锁定装置……

* 功能特性：指明某条线上出现的某一电平的**电压表示何种意义**

* 电气特性：指明在接口电缆上的各条线出现的**电压范围**

* 过程特性：指明对于不同功能的各种可能事件的**出现顺序**

3、 物理层的协议常称为物理层**规程**

### 2.2 数据通信的基础知识

1、 数据在计算机中多采用**并行传输**的方式，但在通信线路（传输媒体）的传输方式一般是**串行传输**。

2、数据通信系统的划分（三大部分）

* 源系统（发送端、发送方）：又称**源站**或**信源**
      
      * 源点：产生比特流
    
         例：从PC输入文字
    
      * 发送器：将比特流进行编码（调制）后再在传输系统中进行传输    -->调制器
  
* 传输系统（传输网络）

* 目的系统（接收端、接收方）：又称**目的站**或**信宿**

  * 接收器：接受传输系统传送来的信号，解调后还原成比特流。   -->解调器
  
  * 终点：输出信息
  
 ※现使用的一般是PC内置的**调制解调器**
 
 ※调制：数字信号 --> 模拟信号
 
 ※解调：模拟信号 --> 数字信号
 
 3、 常用术语
 
（1）通信的目的是**传送消息**。

     消息：如图像、文字、视频。
     
（2）数据：运送消息的实体，通产是有意义的符号序列。

     消息体现于数据。
     
（3）**信号**是数据的电气或电磁表现。
 
（4）信号的分类（根据信息中代表消息的参数取值方式不同）
 
* 模拟信号/连续
 
     用户线上传输的就是模拟信号
 
* 数字信号/离散信号
 
     中继线上传输的就是数字信号
     
**（5）码元**：在使用时域的波形表示数字信号时，代表不同离散数值的基本波形。

    a. 一种电平代表一个码元。

    b. 一码元最少可以携带一个比特信息，但在经过特殊技术处理之后（如曼彻斯特/曼彻斯特差分编码），可以携带多个比特信息。

    c. **若有n个码元，则携带2^n比特信息。**

    d. 码元速率：单位为baud
    
       若有若干码元，携带着x比特信息，码元速率为m
       
       则 数据率=x*m bps
       
（6）信道：一般表示向某一方向传送信息的媒体。一条通信电路往往包含一条发送信道和一条接收信道。

（7）信道交互的基本方式：

* 单向通信/单工通信

* 双向交替通信/半双工通信：可以双向通信，但不可同时双向通信

* 双向同时通信/全双工通信：可以双向同时通信

（8）基带信号：来自信源（计算机）的信号。如计算机输出的代表各种图像文件的数据信号。

（9）调制：解决传输**低频分量**或**直流分量**问题的动作。

分类：

* 基带调制（编码）：仅对波形进行变换。数字信号 -> 数字信号

* 带通调制：用载波调制。将基带信号升为高频或将数字信号转换为模拟信号。
