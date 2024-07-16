#include <bits/stdc++.h>

int main()
{
    unsigned long t{};
    std::cin>>t;

    while(t--)
    {
        unsigned long n{};
        unsigned long m{};

        std::cin>>n;
        std::cin>>m;

        std::cout<<(n*m+1)/2<<"\n";
    }
}