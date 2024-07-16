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

        int sum{};

        int even{};
        int odd{};

        int k{};
        while(k<n)
        {
            if(arr[k]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }

            sum+=arr[k];
            k++;
        }

        if(sum%2!=0)
        {
            std::cout<<"YES\n";
        }
        else
        {
            if(odd==0)
            {
                std::cout<<"NO\n";
            }
            else if(even == 0 && n%2==0)
            {
                std::cout<<"NO\n";
            }
            else
            {
                std::cout<<"YES\n";
            }
        }
    }
}