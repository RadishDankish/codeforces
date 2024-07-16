#include <bits/stdc++.h>

int main()
{
    int x1{};
    int x2{};
    int x3{};

    std::cin>>x1;
    std::cin>>x2;
    std::cin>>x3;

    int avg{abs(x1-x2)+abs(x1-x3)+abs(x2-x3)};

    std::cout<<avg/2;
}