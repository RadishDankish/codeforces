#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    while(t--)
    {
        int n{};
        std::cin>>n;

        std::string s;
        std::cin>>s;

            int max1{};
            int max2{};
            

            int count{};
            int count2{};

            for(int i{};i<n;i++)
            {
                if(s[i]=='<')
                {
                    count2=0;
                    count++;
                }
                else
                { 
                    count2++;
                    count=0;
                }

                if(count>max1)
                {
                    max1=count;
                }
                
                if(count2>max2)
                {
                    max2=count2;
                }
            }


            if(max2>max1)
            {
            std::cout<<max2+1<<"\n";
            }
            else
            {
                std::cout<<max1+1<<"\n";
            }
        



    }
}