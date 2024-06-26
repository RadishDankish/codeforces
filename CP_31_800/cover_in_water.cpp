#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::string str;

        std::cin>>str;

        int j{};
        int count_1{};
        int count_2{};
        int temp{};

        while(j<n)
        {
            if(str[j]=='.')
            {
                temp++;
                if(temp==3)
                {
                    break;
                }
            }
            else
            {
                if(temp==0)
                {
                    ;
                }
                else if(temp==1)
                {
                    count_1++;

                }
                else
                {
                    count_2++;
                }
                temp=0;

            }

            j++;
        }

        if(temp==0)
        {
            ;
        }
        else if(temp==1)
        {
            count_1++;

        }
        else
        {
            count_2++;
        }


        if(temp==3)
        {
            std::cout<<2<<"\n";
        }
        else if(count_2==0)
        {
            std::cout<<count_1<<"\n";
        }
        else 
        {
            std::cout<<count_1+(2*count_2)<<"\n";
        }


    }
}