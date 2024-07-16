#include <bits/stdc++.h>

int main()
{
    long n{};
    std::cin>>n;


    std::vector<long long> arr(n);

    for(long i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    long max_seq{};

    long temp{};

    long k{};
    while(k<n-1)
    {
        if(arr[k]>=arr[k+1])
        {
            
            if(temp>max_seq)
            {
                max_seq=temp;
            }
            temp=0;
        }
        else
        {
            temp++;
        }
        k++;
    }

    if(temp>max_seq)
    {
        max_seq=temp;
    }

    std::cout<<max_seq+1;
}