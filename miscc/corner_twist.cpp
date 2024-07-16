#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {

        int n{};
        int m{};

        std::cin>>n;
        std::cin>>m;

        int a[n][m]; 
        int b[n][m];

        for(int j{};j<n;j++)
        {
            for(int k{};k<m;k++)
            {
                std::cin>>a[j][k];
            }
        }

        for(int j{};j<n;j++)
        {
            for(int k{};k<m;k++)
            {
                std::cin>>b[j][k];
            }
        }

        
    }

}