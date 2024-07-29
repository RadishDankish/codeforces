#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        std::string a;
        std::cin>>a;

        int it{};

        int zero{};
        int one{};

        int one_seq{};
        int zero_seq{};

        int temp{};

        int zero_flag{};
        int one_flag{};

        while(it<n)
        {
            while(a[it]=='0' && it<n)
            {
                zero_flag=1;
                temp++;
                it++;
            }

            if(zero_flag==1)
            {
                if(zero_seq<temp)
                {
                    zero_seq=temp;        
                }
                temp=0;
                zero++;
                zero_flag=0;
            }

            while(a[it]=='1' && it<n)
            {
                temp++;
                one_flag=1;
                it++;
            }

            if(one_flag==1)
            {
                if(one_seq<temp)
                {
                    one_seq=temp;
                }
                temp=0;
                one_flag=0;
                one++;
            }
        }       

        if(one==1 && zero==1)
        {
            std::cout<<"NO\n";
        }
        else if(one<=zero)
        {
            if(one_seq>=zero_seq)
            {
                std::cout<<"YES\n";
            }
            else
            {
                std::cout<<"NO\n";
            }
        }
        else
        {
            std::cout<<"YES\n";
        }

    }
}