#电子乐器

##小目标 :joy:
---
- 完成电子乐器演奏功能的实现

---
**实现的功能** ☺️
- 声音产生与调节：通过内置的电子元件和音频处理技术，能够产生多种声音，以满足不同音乐演奏需求。

- 外观设计与便携性：采用类似半岛铁盒的小巧外观设计，便于携带和存放，同时在外观上注重美观与个性化。

- 可以通过软件提前将歌曲录入并进行播放。
---
**技术方案** 🐤
1.硬件部分

  - 单片机：选用一款性能稳定且资源丰富的单片机作为核心控制单元，例如 STM32 系列单片机 。它负责整个电子乐器的逻辑控制，接收用户的操作指令，如音色选择、节奏调节、录音控制等。

  - LM386 音频功率放大器：采用 LM386 集成音频功率放大器对单片机输出的音频信号进行放大处理。LM386 具有功耗低、电压增益可调节、外接元件少等优点，非常适合用于本项目。它将单片机输出的微弱音频信号进行放大，使其具备足够的功率来驱动扬声器发声，从而提高音质和音量。
  
  - 扬声器：选用合适功率和尺寸的扬声器，用于将经过 LM386 放大后的音频信号转换为声音。扬声器的选择需考虑音质、音量以及与整体设计的适配性，确保能够清晰、准确地还原各种乐器音色。

  - 其他硬件模块：还包括按键模块，用于用户输入各种操作指令；显示模块，如 OLED 显示屏，用于显示当前的乐器设置、演奏状态等信息；电源模块，为整个系统提供稳定的电源供应。

2.软件部分

  - 软件逻辑：主要基于 C 语言进行编程实现。通过编写程序，使单片机能够按照预定的逻辑运行。

  - 初始化程序：对单片机的各个端口、定时器、中断等进行初始化配置，为后续的功能实现做好准备。
  
  - 音频信号生成算法：根据不同的乐器音色需求，利用数字信号处理算法在单片机内生成相应的音频信号数据。
  
  - 播放音乐程序：实现播放功能时，将音频信号数据存储在特定的存储区域，通过按键实现播放。
---
**需要用到哪些知识** :+1:
- [电容感应原理](https://www.bilibili.com/video/BV1JT411W7yK/?spm_id_from=333.337.search-card.all.click&vd_source=66d46cac70b159a46fcaf83b186b2c78)

- [无源蜂鸣器发出不同音调](https://blog.csdn.net/Coin_Collecter/article/details/134907957?sharetype=blog&shareId=134907957&sharerefer=APP&sharesource=2401_87972226&sharefrom=link)

- ![不同音调所对应的不同频率](https://github.com/user-attachments/assets/0d435d3e-dcca-4e48-a0b1-13bdeb7f830f)

- 考虑到无源蜂鸣器音质太差，我们改用了单片机-->LM386-->扬声器来实现方式，软件逻辑并不改变
---
**进度安排** :clipboard:

|时间节点|任务|负责人|
|:-------:|:---------------------------------------------------:|:-----:|
|1.6~1.10|进行对设计方案的思考，大体确定小目标|全体成员|
|1.10~1.12|进行对无源蜂鸣器，触控板软件学习|软件成员|
|1.10~1.15|进行系统板，触控板，降压模块，驱动板等学习并进行设计绘制|硬件成员|
|1.16~1.20|完成打板，材料购买，并进行焊接|全体成员|
|1.21~1.25|完成对初版本的组装与调试|软件成员|
|1.25~2.16|对电子琴进行优化|全体成员|

