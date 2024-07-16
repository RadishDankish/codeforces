#include <bits/stdc++.h>

int main()
{
    long long n;
    std::cin>>n;

    int count{};

    while(n>0)
    {
        if(n%10 == 4 || n%10==7)
        {
            count++;
            n/=10;
        }
        else
        {
            n/=10;
        }
    }

    if(count == 4 || count == 7)
    {
        std::cout<<"YES\n";
    }
    else
    {
        std::cout<<"NO\n";
    }

    
}