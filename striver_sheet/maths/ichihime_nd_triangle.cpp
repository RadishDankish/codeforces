#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        unsigned long long a{};
        unsigned long long b{};
        unsigned long long c{};
        unsigned long long d{};

        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
        std::cin>>d;

        std::cout<<b<<" "<<c<<" ";

        if(b==c || b+c<=d)
        {
            std::cout<<c<<"\n";
        }
        else
        {
            std::cout<<d<<"\n";
        }
    }
}