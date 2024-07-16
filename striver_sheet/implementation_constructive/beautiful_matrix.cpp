#include <bits/stdc++.h>

int main()
{
    int arr[5][5];

    for(int i{};i<5;i++)
    {
        for(int j{};j<5;j++)
        {
            std::cin>>arr[i][j];
        }
    }

    int a{};
    int b{};

    for(int i{};i<5;i++)
    {
        for(int j{};j<5;j++)
        {
            if(arr[i][j]==1)
            {
                a=i;
                b=j;
            }
        }
    }

    std::cout<<abs(2-a)+abs(2-b);


}