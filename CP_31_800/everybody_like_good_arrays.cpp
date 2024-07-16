#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::vector<unsigned long long> arr(n);

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }


        int count{};

        int k{};
        while(k<arr.size()-1)
        {
            if((arr[k]%2)==(arr[k+1]%2))
            {

                unsigned long long product{arr[k]*arr[k+1]};
                arr[k]=product;
                arr.erase(arr.begin()+(k+1));

                count++;
            }
            else
            {
                k++;
            }
        }
        
        std::cout<<count<<"\n";
        
    }
}