#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n-1);

        for(int j{};j<n-1;j++)
        {
            std::cin>>arr[j];
        }

        int sum{};

        int k{};
        while(k<n-1)
        {
            sum+=arr[k];
            k++;
        }

        std::cout<<(-1*sum)<<"\n";


    }
}