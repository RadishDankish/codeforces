#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        int m{};

        std::cin>>n;
        std::cin>>m;

        char arr[n][m];

        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                std::cin>>arr[i][j];
            }
        }

        int sum{};

        for(int i{};i<n-1;i++)
        {
            if(arr[i][m-1]!='D')
            {
                sum++;
            }
        }   

        for(int i{};i<m-1;i++)
        {
            if(arr[n-1][i]!='R')
            {
                sum++;
            }
        }  

        std::cout<<sum<<"\n";           
    }
}