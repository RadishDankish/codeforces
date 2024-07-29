#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        int temp{n/2};

        int residual{(temp-1)};

        if((2*temp+residual)%2==0)
        {
            std::cout<<"NO\n";
        }
        else
        {
            std::cout<<"YES\n";
            
            for(int i{1};i<=n/2;i++)
            {
                std::cout<<i*2<<" ";
            }
            
            for(int i{1};i<n/2;i++)
            {
                std::cout<<i*2-1<<" ";
            }

            std::cout<<n+residual;
            std::cout<<std::endl;
        }
    }
}