﻿// GithubDEMO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    // 首先你得安装Github扩展，在最上边菜单栏的扩展里边，装了就好
    // 然后VS右下角有个添加到 “源代码管理”
    // 发布到github
    // 一般，正常情况下，发布就行了，是会直接上传代码到github的，但是可能是因为被墙或者乱七八糟的原因，推送代码到github的时候会出错，提示超时
    // 但就很佛系，网页打开github的话是不会有问题的，只有推送提示超时
    // 到现在都还没有推送成功大概就是推不成了，先打开github看看
    // 不好意思打脸了，他推送成功了
    // 再把修改后的文件（就是上边这么多废话）推送的到github看看
    // 先点更改，就是这个小铅笔，写了备注之后“全部提交”就行
    // 然后推送到github，就是那个向上的箭头
    // 果然出错了，超时，简单，开vpn
    // 用这个，any vpn，我已经试过水了，其他的都不能用，一次只能连两分钟，但是可以到时间点一下，就会重置了
    // 成功推送
    // 距离上次推送又修改了文件，那就再推一次
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
