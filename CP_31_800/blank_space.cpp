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

        int max{INT_MIN};

        int k{};
        int temp{};

        while(k<n)
        {

            if(arr[k]==0)
            {
                temp++;
            }
            else
            {
                if(temp>max)
                {
                    max=temp;
                }
                temp=0;
            }
            k++;
        }

        if(temp>max)
        {
            max=temp;
        }

        std::cout<<max<<"\n";

    }
}