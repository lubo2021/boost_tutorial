#pragma once

// 元函数实际表现为c++中的一个类或者模板类，它的通常形式是：
template <typename arg1, typename arg2> // 元函数参数列表
struct meta_function                    // 元函数名
{
    typedef int type; // 元函数返回元数据
    // using int=type
    static int const value = 4; // 元函数返回的整数
};
