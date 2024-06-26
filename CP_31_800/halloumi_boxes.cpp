#include <bits/stdc++.h>


int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        int k{};

        std::cin>>n;
        std::cin>>k;

        std::vector<int> arr(n);

        for(int i{};i<n;i++)
        {
            std::cin>>arr[i];
        }

        int flag{};

        for(int i{};i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                flag=1;
                break;


            }
        }

        if(flag==0)
        {
            std::cout<<"YES\n";
        }
        else if(k==1 && n!=1)
        {
            std::cout<<"NO\n";
        }
        else
        {
            std::cout<<"YES\n";
        }
    }
}