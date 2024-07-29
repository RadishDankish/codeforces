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
        int seq{};

        int flag{};

        while(it<n && seq<2)
        {
            while(arr[it]==0 && it<n)
            {
                flag=0;
                it++;
            }       

            while(arr[it]!=0 && it<n)
            {
                flag=1;
                it++;
            }

            if(flag==1)
            {
                seq++;
            }
        }

        if(seq==0)
        {
            std::cout<<0<<"\n";
        }
        else if(seq==1)
        {
            std::cout<<1<<"\n";
        }
        else
        {
            std::cout<<2<<"\n";
        }
    }
}