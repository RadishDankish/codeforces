#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        int x{};

        std::cin>>n;
        std::cin>>x;

        std::vector<int> arr(n);

        for(int i{};i<n;i++)
        {
            std::cin>>arr[i];
        }

        int max{arr[0]};

        for(int i{};i<n-1;i++)
        {
            if(arr[i+1]-arr[i]>max)
            {
                max=arr[i+1]-arr[i];
            }
        }

        if(2*(x-arr[n-1])>max)
        {
            std::cout<<2*(x-arr[n-1])<<"\n";
        }
        else
        {
            std::cout<<max<<"\n";
        }
    }
}