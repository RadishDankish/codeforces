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
        
        std::vector<int> b;
        std::vector<int> c;

        for(int j{};j<n;j++)
        {
            if(arr[j]==1)
            {
                b.push_back(arr[j]);
            }
            else
            {
                
            }
        }

    }

}