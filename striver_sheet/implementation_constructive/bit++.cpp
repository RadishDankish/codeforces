#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    int x{};

    for(int i{};i<n;i++)
    {
        std::string a;
        std::cin>>a;

        if(a[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    std::cout<<x;
}