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

        int temp{arr[0]};

        for(int j{1};j<n;j++)
        {
            temp=temp^arr[j];
        }
        
        if(n%2==0 && temp!=0)
        {
            std::cout<<-1<<"\n";
        }
        else
        {
        std::cout<<temp<<"\n";
        }
    }
}