#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        if(n%3 == 0)
        {
            std::cout<<"Second\n";
        }
        else if(n%3==1 || n%3==2)
        {
            std::cout<<"First\n";
        }

        
    }
}