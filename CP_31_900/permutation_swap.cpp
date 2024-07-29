#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        for(int i{};i<n;i++)
        {
            std::cin>>arr[i];
        }


        int min{INT_MAX};
        int it{};

        while(it<n)
        {
            int temp{abs(arr[it]-it-1)};
            arr[it]=temp;
            it++;
        }

        int flag{};
        int p{1};
        while(p<=n)
        {
            for(int i{};i<n;i++)
            {
                if(arr[i]%p!=0)
                {
                    flag=1;
                    break;
                }
            }

            if(flag!=1)
            {
                p++;
            }
            else
            {
                break;
            }
        }

        std::cout<<p-1<<"\n";

    }
}