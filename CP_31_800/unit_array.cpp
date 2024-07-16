#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        int pos{};
        int neg{};
        std::vector<int> arr(n);

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];

            if(arr[j]>0)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }

        int temp{};
        if(pos>=neg)
        {
            if(neg%2==0)
            {
                temp=0;
            }
            else
            {
                temp=1;
            }
        }
        else 
        {
            while(pos<neg)
            {
                pos++;
                neg--;
                temp++;
            }
            if(neg%2==0)
            {
                ;
            }
            else
            {
                temp++;
            }
        }

        std::cout<<temp<<"\n";



    }
}