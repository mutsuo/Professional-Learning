# 【大一下】计算机网络原理

## 第二章 物理层

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

* 源系统（发送端、发送方）

  * 源点：产生比特流
    
    例：从PC输入文字
    
  * 发送器：将比特流进行编码（调制）后再在传输系统中进行传输    -->调制器
  
* 传输系统（传输网络）

* 目的系统（接收端、接收方）

  * 接收器：接受传输系统传送来的信号，解调后还原成比特流。   -->解调器
  
  * 终点：输出信息
  
 现使用的一般是PC内置的**调制解调器**
