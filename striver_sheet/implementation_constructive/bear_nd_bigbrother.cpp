#include <bits/stdc++.h>

int main()
{
    int a{};
    int b{};

    std::cin>>a;
    std::cin>>b;

    int count{};

    while(a<=b)
    {
        a*=3;
        b*=2;

        count++;
    }

    std::cout<<count;
}