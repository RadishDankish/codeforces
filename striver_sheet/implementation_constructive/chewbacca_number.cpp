#include <bits/stdc++.h>

int main()
{
    std::string x;
    std::cin>>x;

    for(int i{};i<x.size();i++)
    {
        if(int(x[i])-'0'>4)
        {
            if(i==0 && int(x[i])-'0'!=9)
            {
                x[i] = (9-(int(x[i])-'0'))+'0';
            }
            else if(i!=0)
            {
                x[i] = (9-(int(x[i])-'0'))+'0';
            }
        }
    }

    std::cout<<x;
}