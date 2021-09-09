> writer: VenusHui
> 
> time: 2021.09.08
> 
> last edit: 2021.09.08
>
> Reference: 《计算机组成原理》

# 计算机组成原理

## 第一章 计算机系统概述

### 计算机系统 = 硬件 + 软件。
    软硬件的分界已经不明显

### 计算机系统的硬件组成
    主机系统 + I/O系统
    (CPU + 存储器) + (I/O设备)
    ((控制器 + 运算器) + 存储器) + (输入设备 + 输出设备)
- 冯·诺依曼结构
  - 存储程序原理：在计算机解题之前，要事先编制好程序，并与所需要的数据一起预先存入主存当中。

- 哈佛结构（现代常用）
  - 将程序与数据存储在两个不同的存储空间中，具有数据段和代码段两个通道。
  - 优势：在进行数据交互时，通常指进行数据段交互而代码段不变，提高数据交互效率。

- 运算部件
  - 组成：运算器 + 通用寄存器组(GPR)。运算器即算术逻辑单元(ALU)。

- 内存
  - 存储器 = 内存 + 外存。内存通常利用半导体技术实现，外存通常利用磁记录实现，如磁盘。
  - 内存：一个由大量存储空间构成的能按地址访问的一维线性空间。以字节编址或以字编址，字长与机器有关。

- 控制器
  - 指令寄存器：存放当前正在进行的指令
  - 程序计数器：存放当前正在进行的指令地址
  - 指令译码器：对指令进行译码，形成相应的控制信号
  - 时钟脉冲：
  - 时序信号发生器：
  - 微操作控制部件：微操作指硬件电路中不可再细分的简单操作

### 计算机的软件系统

### 计算机的性能指标
- 基本性能指标
  - 主频：
    - 时钟产生固定频率的时钟脉冲，这个时钟的频率即为主频。通常用一秒钟发出的电子脉冲数来表示。
    - 结构差距很大的机器之间通常不比较主频。
  - 运算速度：通常以每秒执行多少条指令或完成多少次浮点运算表示。
  - 基本字长：
    - 参与运算的数据字的二进制位数，决定了运算精度。
    - 决定了寄存器、ALU、数据总线等的位数，直接影响硬件的造价。
  - 主存容量
  - 主存存取周期：对主存连续访问两次所允许的最小时间间隔。

## 第二章 数制与编码

## 第六章 计算机执行程序的过程