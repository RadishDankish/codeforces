#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::string a;
        std::cin>>a;

        int x{};
        int y{n-1};

        while(x<y)
        {
            if(a[x]!=a[y])
            {
                x++;
                y--;
            }
            else
            {
                break;
            }
        }

        std::cout<<n-(2*x)<<"\n";
    }
}