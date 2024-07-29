#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        unsigned long long n{};
        std::cin>>n;

        if(n==1 || n==2)
        {
            std::cout<<0<<"\n";
        }
        else
        {
            if(n%2==0)
            {
                std::cout<<(n/2)-1<<"\n";
            }
            else
            {
                std::cout<<n/2<<"\n";
            }
        }
        
    }
}