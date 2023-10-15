﻿# (20180408持续更新)基于QtQuick2.0开发的诸多漂亮的界面例子(作为入门首选)
![数字雨](images/matrix.png)
![驱动精灵主界面](http://qiniu.heilqt.com/qtquickdriver.png)
![迅雷在线皮肤设置](http://qiniu.heilqt.com/qtquickxl.png)
![迅雷本地皮肤设置](http://qiniu.heilqt.com/qtquicklocal.png)
![有赞商城商品UI](http://qiniu.heilqt.com/youzan-new.png)
![360安全卫士](http://qiniu.heilqt.com/360.png)
## 客户端

### 使用QtQuick技术开发酷炫的客户端

* 使用QML开发客户端界面
* 模仿驱动精灵界面(待完善)
* 模仿QQ界面(待开发)
* 模仿迅雷设置皮肤界面(待完善)
* 支持窗口拉伸且可以设置停靠属性
* 新增QML与C++交换的接口
* 新增有赞商城API接口和界面 (需要自己申请有赞api的key等)
* 新增自定义日历选择功能
* 新增打印有赞商城订单功能
* 刷新订单功能
* 新增二维码生成接口(可以参考我的另外的项目[二维码生成器](https://github.com/toby20130333/qtquickqrencode))
* 新增360安全界面模仿
* 集成各个页面
* 加入系统托盘功能
* 新增数字雨效果

## 憧憬

* 实现国内针对QtQuick最新信息的更新和传播
* 扩大QtQuick在移动开发领域的知名度
* 兼容各个主流平台的开发
* 为自身的App打下基石


## 贡献

* [寒山-居士](https://github.com/toby20130333)
* [toby520](http://www.heilqt.com)


## 注意事项

* 该项目Qt5.3-Qt5.7编译通过
* 所有图片资源归360奇虎公司所有,请勿商用
* 目前修改子项目加载方式：pro文件的DEFINES += USE_YOUZAN 你可以改成其他子项目的，具体参考main.cpp代码
* 有任何QtQuick相关的问题可以到[QtQuick论坛](http://www.heilqt.com)进行提问或者加入网站底部的QQ群
* 例子有多个demo，自行切换main.cpp的加载qml的路径
* 例子中涉及到图片资源，请自行提供(涉及到图片版权问题)
* 例子中的qml加载路径是相对路径,为了方便调试，请注意不要使用[影子构建](http://www.cnblogs.com/menlsh/archive/2012/07/30/2615974.html)
