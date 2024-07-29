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
        
        std::sort(arr.begin(),arr.end());

        int it{};
        int temp{};
        
        if(arr[0]==arr[n-1])
        {
            std::cout<<-1<<"\n";
            temp=n+1;
        }
        else
        {
            while(arr[it]==arr[0])
            {
                it++;
            }
            std::cout<<it<<" "<<n-it<<"\n";
            
        }

        
        if(temp<n)
        {
            while(temp<it)
            {
                std::cout<<arr[temp]<<" ";
                temp++;
            }

            std::cout<<std::endl;

            while(temp<n)
            {
                std::cout<<arr[temp]<<" ";
                temp++;
            }

            std::cout<<std::endl;
        }
      
        

    }

}