#include <bits/stdc++.h>

int main()
{
    int x{};
    std::cin>>x;

    int temp{x/5};

    if(temp>0 && x%5==0)
    {
        std::cout<<temp;
    }
    else if(temp>0 && x%5!=0)
    {
        std::cout<<temp+1;
    }
    else
    {
        std::cout<<1;
    }

}
