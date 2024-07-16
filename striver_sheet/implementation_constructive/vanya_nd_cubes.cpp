#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    int count{};

    int i{1};
    while(count<n)
    {
        count+=((i*(i+1))/2);
        i++;
    }

    if(n==1)
    {
        std::cout<<1;
    }
    else if(count==n)
    {
        std::cout<<i-1;
    }
    else
    {
        std::cout<<i-2;
    }

}