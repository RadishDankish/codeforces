#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        unsigned long long n{};
        std::cin>>n;

        if(n%2!=0)
        {
            std::cout<<1<<"\n";
        }
        else
        {
            int x{3};
            while(x<=n)
            {
                if(n%x==0)
                {
                    x++;
                }
                else
                {
                    break;
                }
            }
            
            std::cout<<x-1<<"\n";
            
        
            
        }


    }   
}