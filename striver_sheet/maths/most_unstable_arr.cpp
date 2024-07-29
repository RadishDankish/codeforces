#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        unsigned long long n{};
        unsigned long long m{};

        std::cin>>n;
        std::cin>>m;

        unsigned long long no_slots{n/2};
        no_slots--;
        
        if(n==1)
        {
            std::cout<<0<<"\n";
        }
        else if(n==2)
        {
            std::cout<<m<<"\n";
        }
        else
        {

            std::cout<<2*(m-no_slots)+2*(no_slots)<<"\n";
        }
    }
}