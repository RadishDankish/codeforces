#include <bits/stdc++.h>

int main()
{
    long long t{};
    std::cin>>t;

    for(long long i{};i<t;i++)
    {
        long long n{};
        long long k{};
        long long x{};

        std::cin>>n;
        std::cin>>k;
        std::cin>>x;

        long long min_sum{(k*(k+1))/2};
        long long max_sum{((n*(n+1))/2)-(((n-k)*(n-k+1))/2)};

        if(min_sum>x || max_sum<x)
        {
            std::cout<<"NO\n";
        }
        else if(min_sum<=x && max_sum>=x)
        {
            std::cout<<"YES\n";
        } 




    }
}