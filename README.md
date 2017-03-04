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
     
（2）数据：运送消息的实体，通常是有意义的符号序列。

     消息体现于数据。
     
（3）**信号**是数据的电气或电磁表现。
 
（4）信号的分类（根据信息中代表消息的参数取值方式不同）
 
* 模拟信号/连续
 
     用户线上传输的就是模拟信号
 
* 数字信号/离散信号
 
     中继线上传输的就是数字信号
     
**（5）码元**：在使用时域的波形表示数字信号时，代表不同离散数值的基本波形。

    a. 一种电平代表一个码元。

    b. 一码元最少可以携带一个比特信息，但在经过特殊技术处理之后，可以携带多个比特信息。
    
     如曼彻斯特/曼彻斯特差分编码，2个电平（码元）确定一个比特。
    
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

（10）常用的编码方式：

* 不归零制：正电平代表1，负电平代表0.

* 归零制：正脉冲代表1，负脉冲代表0。

* **曼彻斯特编码**：位周期中心的向上跳变代表0，向下跳变代表1。也可反过来定义。

 ※ 优点：能携带时钟信号（每比特都跳转），可表示有无信号（是否跳转）。
 
* **差分曼彻斯特编码**：在每一位的中心处始终都有跳变。位开始边界跳动代表0，没有跳变代表1。

 ※ 受前一状态的影响
 
※ 曼彻斯特编码适用于低速传输，差分曼彻斯特编码使用与高速传输。

原因：曼彻斯特编码电平变化次数多，差分曼彻斯特编码电平变化次数少。

（11）基本的带通调制方法

* 调幅：载波的**振幅*随基带数字信号变化而变化

* 调频：载波的**频率**随基带数字信号变化而变化

* 调相：载波的**初始相位**随基带数字信号变化而变化

（12）限制码元在信道上传输速率的因素

* 信道能够通过的频率范围

**1924奈氏原则**：在任何信道中，码元传输的速率是有上限的，传输超过此上限，就会出现严重的**码间串扰**的问题，使接收端对码元的判决（识别）成为不可能。

码间串扰：接收端受到的信号波形失去了码元之间的界限。

> 理想低通信道的最高码元传输速率 = 2 * W

> ※ W为带宽，单位为HZ
> ※ 式子的单位为Baud，波特

* 信噪比：信号的平均功率和噪声的平均功率之比

> 信噪比 = 10lg(S/N)

> 单位：dB 

> **香农公式**

> 极限传输速率 C = W log(2) (1+S/N)

> 单位：b/s

> ※ 根据已知量和单位判断使用什么公式。
