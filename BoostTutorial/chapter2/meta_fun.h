#pragma once

template <int arg1, int arg2>
struct meta_fun
{
    static const int value = arg1 + arg2;
};

template <typename T1, typename T2> // 两个形参T1,T2
struct select1st
{
    typedef T1 type; // 返回T1
};

template <typename T1, typename T2>
struct forward : select1st<T2, T1> // 元函数转发，使用struct的默认public继承
{
};