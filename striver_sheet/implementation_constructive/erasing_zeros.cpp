#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        std::string a;
        std::cin>>a;

        if(a=="0" || a=="1")
        {
            std::cout<<0<<"\n";
        }
        else
        {
            int it{};

            int total{};

            while(a[it]!='1')
            {
                it++;
            }

            int count_zero{};
            int jt{it+1};

            while(jt<a.size())
            {   
                while(a[jt]!='1' && jt<a.size())
                {
                    count_zero++;
                    jt++;
                }

                if(jt==a.size() && a[jt-1]=='0')
                {
                    break;
                }
                else
                {
                    total+=count_zero;
                    count_zero=0;
                    jt++;
                }
            }

            std::cout<<total<<"\n";
        }
    }
}