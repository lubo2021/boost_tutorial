#pragma once

class delete_demo
{
public:
    delete_demo() = default;
    ~delete_demo() = default;
    // 显示禁用拷贝构造函数和拷贝赋值函数
    delete_demo(const delete_demo &) = delete;
    delete_demo &operator=(const delete_demo &) = delete;
};