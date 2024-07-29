#include <bits/stdc++.h>

// test case -> 7 5 6 8 9 7 ans is 4 so min and max wont work

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        int ans{};

        for(int i{};i<n;i++)
        {
            std::cin>>arr[i];
        }

        ans = std::max(ans,arr[n-1]-arr[0]);
        
        for(int i{1};i<n;i++)
        {
            ans=std::max(ans,arr[i]-arr[0]);
        }

        for(int i{};i<n-1;i++)
        {
            ans=std::max(ans,arr[n-1]-arr[i]);
        }
        
        for(int i{};i<n;i++)
        {
            ans=std::max(ans,arr[(n+i-1)%n]-arr[i]);
        }

        std::cout<<ans<<"\n";
    }
}