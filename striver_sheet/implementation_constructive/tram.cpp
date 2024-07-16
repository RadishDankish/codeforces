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

    int max{INT_MIN};

    int pass{};

    for(int i{};i<n;i++)
    {
        pass-=arr[i][0];
        pass+=arr[i][1];

        if(max<pass)
        {
            max=pass;
        }
    } 

    std::cout<<max;
}