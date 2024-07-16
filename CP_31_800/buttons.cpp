#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int a{};
        int b{};
        int c{};

        std::cin>>a;
        std::cin>>b;
        std::cin>>c;

        if(c%2==0)
        {
            if(a<=b)
            {
                std::cout<<"Second\n";
            }
            else if(a>b)
            {
                std::cout<<"First\n";
            }

        }
        else
        {
            if(a>=b)
            {
                std::cout<<"First\n";
            }
            else
            {
                std::cout<<"Second\n";
            }
        }
    }

}