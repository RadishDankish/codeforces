#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        int p{};

        std::cin>>n;
        std::cin>>p;

        std::vector<int> arr(n);

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }

        int j{};
        int flag{};
        
        while(j<n)
        {
            if(arr[j]==p)
            {
                flag=1;
                break;
            }
            j++;
        }

        if(flag==1)
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }

        






    }
}