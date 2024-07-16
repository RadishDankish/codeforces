#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    
    while(t--)
    {
        long long n{};
        long long a{};
        long long b{};   
        long long c{};

        std::cin>>a;
        std::cin>>b;
        std::cin>>c;
        std::cin>>n;



        if(c>=a && c>=b)
        {
            
            n=(n-(c-b));
            n=(n-(c-a));
            if(n<0)
            {
                std::cout<<"NO\n";
            }
            else if(n%3!=0)
            {
                std::cout<<"NO\n";
            }
            else
            {
                std::cout<<"YES\n";
            }
            
            
        }
        else if(a>=c && a>=b)
        {

            n=(n-(a-b));
            n=(n-(a-c));
            if(n<0)
            {
                std::cout<<"NO\n";
            }
            else if(n%3!=0)
            {
                std::cout<<"NO\n";
            }
            else
            {
                std::cout<<"YES\n";
            }
            
        }
        else
        {
            n=(n-(b-a));
            n=(n-(b-c));
            if(n<0)
            {
                std::cout<<"NO\n";
            }
            else if(n%3!=0)
            {
                std::cout<<"NO\n";
            }
            else
            {
                std::cout<<"YES\n";
            }
        }

        
        


    }
}