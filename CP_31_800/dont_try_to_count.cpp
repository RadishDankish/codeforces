#include <bits/stdc++.h>



int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        int m{};

        std::cin>>n;
        std::cin>>m;

        std::string x;
        std::cin>>x;

        std::string s;
        std::cin>>s;

        int temp{};
        int flag{};

        while(temp<=6)
        {
            if(x.find(s)!=std::string::npos)
            {
                flag=1;
                break;
            }
            else
            {
                x+=x;
            }
            ++temp;
        }

        if(flag==1)
        {
            std::cout<<temp<<std::endl;
        }
        else
        {
            std::cout<<-1<<std::endl;
        }
        


 


    }
}


