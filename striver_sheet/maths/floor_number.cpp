#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {

        double n{};
        std::cin>>n;

        double x{};
        std::cin>>x;

        if(n==1 || n==2)
        {
            std::cout<<1<<"\n";
        }
        else
        {
            std::cout<<ceil((n-2)/x)+1<<"\n";
        }
    }
}