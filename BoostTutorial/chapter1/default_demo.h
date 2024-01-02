#pragma once

class default_demo
{
public:
    // 显示指定构造函数和析构函数使用编译器的缺省实现
    default_demo() = default;
    ~default_demo() = default;
    // 使用default声明缺省构造函数后并不影响其他构造函数的重载和实现
    default_demo(int x)
    {
    }
    // 显示指定拷贝构造和拷贝赋值函数使用编译器的缺省实现
    default_demo(const default_demo &) = default;
    default_demo &operator=(const default_demo &) = default;

    // 显式指定转移构造和转移赋值函数使用编译器的缺省实现
    default_demo(default_demo &&) = default;
    default_demo &operator=(default_demo &&) = default;
};
