#pragma once

class demo_delegating
{
public:
    demo_delegating() : demo_delegating(0, 0) {} // 缺省构造函数委托双参数构造函数

    demo_delegating(int a) : demo_delegating(a, 0) {} // 单参数构造函数委托双参数构造函数

    demo_delegating(int a, int b) // 双参数构造函数被其他构造函数调用
    {
        x = a;
        y = b;
    }

public:
    int x, y;
};