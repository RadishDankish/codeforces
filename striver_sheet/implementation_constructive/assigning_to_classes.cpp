#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(2*n);

        for(int i{};i<2*n;i++)
        {
            std::cin>>arr[i];
        }

        std::sort(arr.begin(),arr.end());

        std::cout<<abs(arr[n]-arr[n-1])<<"\n";
    }

}