#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int a{};
        int b{};
        
        std::cin>>a;
        std::cin>>b;

        int temp{a%b};

        if(temp==0)
        {
            std::cout<<0<<"\n";
        }
        else
        {
            std::cout<<b-temp<<"\n";
        }

    }
}