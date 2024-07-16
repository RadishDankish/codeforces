#include <bits/stdc++.h>

int main()
{
    int k{};
    int n{};
    int w{};

    std::cin>>k;
    std::cin>>n;
    std::cin>>w;

    int sum{};
    int it{};
    while(it<w)
    {
        sum+=k*(it+1);
        it++;
    }

    if(sum-n<0)
    {
        std::cout<<0;
    }
    else
    {

        std::cout<<sum-n;
    }

}