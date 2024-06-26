#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    int m{};
    std::cin>>m;

    int count{};
    int i{1};
    while(i<=n)
    {
        if(i%m==0)
        {
            count++;
            n++;
        }
        else
        {
            count++;
        }
        i++;
    }

    std::cout<<count;
}