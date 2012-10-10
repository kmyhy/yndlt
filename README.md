A common static library framework for YunnanDLT project
=============================================================

Features
--------
* NSURL+Parameters 

这是一个NSURL类别，它对NSURL进行了有效扩展，允许你快速检索URL字符串中的Query参数。它包括两个成员方法:

<code>-(NSDictionary *)parameters;
    -(NSString*)getParameterByName:(NSString*)parameterName;<code>

* 登录日志dltlog 
dltlog类是一个用于向服务器提交登录日志和注销日志的辅助类。它使用默认的初始化方法。

* CheckVersionURL类和VersionInfo类 

对于采用URL Scheme方式集成的子系统，可以使用CheckVersionURL类来检测服务器上发布的新版本。