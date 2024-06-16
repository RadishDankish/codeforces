#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;


    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    for(int j{};j<n;j++)
    {
        int no{arr[j]};

        int rem{no%2020};

        int sub{no-rem};

        int m{sub/2020};

        if(m>=rem)
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }
    }
}