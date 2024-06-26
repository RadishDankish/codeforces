#include <bits/stdc++.h>


void check(std::string &a,std::string &b,int &temp)
{

    int p{};
    int q{};

    while(p<a.size() && q<b.size())
    {        
        if(a[p]==b[q])
        {
            p++;
            q++;
        }
        else
        {
            p++;
        }
    }

    if(q==b.size())
    {
        return;
    }
    else
    {
        a+=a;
        temp++;
        check(a,b,temp);
    }
    
}


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

        check(x,s,temp);

        std::cout<<temp<<"\n";
 


    }
}