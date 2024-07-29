#include <bits/stdc++.h>

int main()
{
    long long n{};
    long long m{};
    long long k{};

    std::cin>>n;
    std::cin>>m;
    std::cin>>k;

    std::vector<long long> arr(n);

    for(long long i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    long long max1{-1};
    long long max2{-1};

    long long flag{};

    for(long long i{};i<n;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
            max1=arr[i];
            flag=i;
            
        }

        if(max2<arr[i] && max2<=max1 && flag!=i)
        {
            max2=arr[i];
        }
    }
    
    long long happiness{};

    long long temp{m%(k+1)};
    long long temp2{m/(k+1)};

    happiness=temp2*max1*k+temp2*max2+temp*max1;
    
    std::cout<<happiness;
}