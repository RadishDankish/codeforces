#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        int k{};
        std::cin>>k;

        int x{};
        std::cin>>x;

        

        if(n==k && x!=k)
        {
            std::cout<<"YES\n";
            std::cout<<1<<std::endl;
            std::cout<<k<<std::endl;
        }
        else if(k>=2 && x!=1 && x!=2) 
        {
            std::cout<<"YES\n";
            std::cout<<(n/2)+1<<"\n";
            for(int j{};j<n/2;j++)
            {
                std::cout<<2<<" ";
            }
            std::cout<<1<<"\n";
        }
        else if(k==1 && x!=1)
        {
            
        }

    }
}