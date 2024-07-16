#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        unsigned long long x{};
        unsigned long long y{};
        unsigned long long n{};

        std::cin>>x;
        std::cin>>y;
        std::cin>>n;

        unsigned long long max_mul{n/x};
        unsigned long long modu{n%x};

        if(modu==y)
        {
            std::cout<<n<<"\n";
        }
        else if(modu<y)
        {
            std::cout<<x*(max_mul-1)+y<<"\n";
        }
        else
        {
            std::cout<<x*(max_mul)+y<<"\n";
        }
    }
}