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

        int first{};
        int second{};
        int min{INT_MAX};
        int it{};
        int temp{};

        while(it<n-1)
        {
            int sub = arr[it+1]-arr[it];
            if(sub<0)
            {
                temp=-1;
                break;
            }
            else
            {
                if(min>sub)
                {
                    min=sub;
                    first=it;
                    second=it+1;
                }
            }
            it++;
        }

        if(temp==-1)
        {
            temp=0;
        }
        else
        {
            temp = ((arr[first]+arr[second])/2)-arr[first]+1;
        }
        


        std::cout<<temp<<'\n';
    }
}