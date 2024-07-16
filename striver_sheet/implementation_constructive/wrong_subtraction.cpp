#include <bits/stdc++.h>

int main()
{
    int n{};
    int k{};

    std::cin>>n;
    std::cin>>k;

    for(int i{};i<k;i++)
    {
        if(n%10!=0)
        {
            n-=1;
        }   
        else
        {
            n/=10;
        }
    }

    std::cout<<n;

}