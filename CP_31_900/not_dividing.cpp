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

        int it{};

        while(it<n-1)
        {
            if(arr[it]==1)
            {
                arr[it]++;
            }
            it++;
        }

        it = 0;
        while(it<n-1)
        {
            
            if(arr[it+1]%arr[it]==0)
            {
                arr[it+1]++;
            }
            it++;
            
        }

        for(int i{};i<n;i++)
        {
            std::cout<<arr[i]<<" ";
        }

        std::cout<<"\n";


    }

}