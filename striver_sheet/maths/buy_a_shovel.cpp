#include <bits/stdc++.h>

int main()
{
    int k{};
    int r{};

    std::cin>>k;
    std::cin>>r;

    int i{1};
    while(i<10)
    {
        if((k*i)%10==0)
        {
            std::cout<<i<<"\n";
            break;
        }
        else if((k*i-r)%10==0)
        {
            std::cout<<i<<"\n";
            break;
        }
        i++;
    }

}