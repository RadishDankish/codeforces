#include <bits/stdc++.h>


int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int x{};
        int k{};

        std::cin>>x;
        std::cin>>k;

        if(x%k==0)
        {
            std::cout<<2<<std::endl;
            std::cout<<x-1<<" "<<1<<"\n";
        }
        else
        {
            std::cout<<1<<"\n";
            std::cout<<x<<"\n";
        }


    }
}