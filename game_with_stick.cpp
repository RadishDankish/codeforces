#include <bits/stdc++.h>

int main()
{   
    int n{};
    std::cin>>n;

    int m{};

    std::cin>>m;

    int low{};

    if(m<n)
    {
        low=m;
    }
    else
    {
        low = n;
    }

    if(low%2==0)
    {
        std::cout<<"Malvika";

    }
    else 
    {
        std::cout<<"Akshat";
    }
}