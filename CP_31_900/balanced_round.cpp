#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        long long n{};
        long long k{};

        std::cin>>n;
        std::cin>>k;

        std::vector<long long> arr(n);

        long long i{};

        while(i<n)
        {
            std::cin>>arr[i];
            i++;
        }

        std::sort(arr.begin(),arr.end());

        long long count{};
        long long max_count{};

        i=0;
        while(i<n-1 && n!=1)
        {
            long long temp{arr[i+1]-arr[i]};

            if(temp<=k)
            {
                count++;
            }
            else
            {
                if(max_count<count)
                {
                    max_count=count;
                }

                count=0;
            }
            i++;
        }

        if(max_count<count)
        {
            max_count=count;
        }
        
        if(n==1)
        {
            std::cout<<0<<"\n";
        }
        else
        {
            std::cout<<n-max_count-1<<"\n";
        }
    }
}