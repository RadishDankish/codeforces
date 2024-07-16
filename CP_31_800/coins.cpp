#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        long long n{};
        long long k{};

        std::cin>>n;
        std::cin>>k;

        if(n%2==0)
        {
            std::cout<<"YES\n";
        }
        else
        {
            if(k%2==0)
            {
                std::cout<<"NO\n";
            }
            else
            {
                if((n-k)%2==0)
                {
                    std::cout<<"YES\n";
                }
                else
                {
                    std::cout<<"NO\n";
                }
            }
        }
    }
}