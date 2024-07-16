#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        int temp{n};
        int digits{};

        while(temp>0)
        {
            digits++;
            temp/=10;
        }

        for(int j{};j<digits;j++)
        {
            if((digits-j-1)%2==0 && digits-j-1!=0)
            {
                temp=pow(10,digits-j-1)+1;
            }
            else
            {
                temp=pow(10,digits-j-1);
            }
            std::cout<<n-(n%temp)<<" ";

        }
    }
}