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

        int one{};
        int two{};

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
            if(arr[j]==1)
            {
                one++;
            }
            else
            {
                two++;
            }
        }

        if(two==0)
        {
            std::cout<<1<<"\n";
        }
        else if(two%2!=0)
        {
            std::cout<<-1<<"\n";
        }
        else
        {
            int temp{};
            two/=2;

            int k{};

            while(temp<two)
            {
                if(arr[k]==2)
                {
                    temp++;
                }
                k++;
            }

            std::cout<<k<<"\n";


        }

    }
}