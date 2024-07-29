#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    int arr[n][2];

    for(int i{};i<n;i++)
    {
        for(int j{};j<2;j++)
        {
            std::cin>>arr[i][j];
        }
    }

    for(int i{};i<n;i++)
    {
        
            if(arr[i][1]<-1)
            {
                std::cout<<"NO\n";
            }
            else
            {
                std::cout<<"YES\n";
            }
        
    }
    
}