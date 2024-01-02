#pragma once

void check(int &)
{
    std::cout << "lvalue" << std::endl;
}
void check(int &&)
{
    std::cout << "rvalue" << std::endl;
}
template <typename T>
void print(T &&v)
{
    check(std::forward<T>(v));
}