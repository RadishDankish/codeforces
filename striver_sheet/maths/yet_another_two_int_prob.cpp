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

        int sub{abs(b-a)};

        int temp{sub/10};

        if(sub%10==0)
        {
            std::cout<<temp<<"\n";
        }
        else
        {
            std::cout<<temp+1<<"\n";
        }       
    }
}