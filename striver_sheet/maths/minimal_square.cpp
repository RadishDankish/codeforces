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

        int min{};
        int max{};

        if(a>b)
        {
            min=b;
            max=a;
        }
        else
        {
            min=a;
            max=b;
        }

        if(2*min>max)
        {
            std::cout<<min*min*4<<"\n";
        }
        else
        {
            std::cout<<max*max<<"\n";
        }

        

    }
}