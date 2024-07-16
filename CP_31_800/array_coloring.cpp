#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }

        int temp{};

        for(int j{};j<n;j++)
        {
            if(arr[j]%2==0)
            {
                ;
            }
            else
            {
                temp++;
            }
        }

        if(temp==0 ||temp%2==0 )
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }


    }
}