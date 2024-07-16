#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        int k{};
        int x{};

        std::cin>>n;
        std::cin>>k;
        std::cin>>x;

        if(n%2==0)
        {
            
            if(k<2)
            {   
                std::cout<<"NO\n";
            }
            else if(k>=2)
            {
                if(x!=2)
                {
                    int temp{n/2};
                    std::cout<<"YES\n";
                    std::cout<<temp<<'\n';
                    for(int j{};j<temp;j++)
                    {
                        std::cout<<2<<" ";
                    }
                    std::cout<<std::endl;
                }
                else
                {
                    int temp{n};
                    std::cout<<"YES\n";
                    std::cout<<temp<<'\n';
                    for(int j{};j<temp;j++)
                    {
                        std::cout<<1<<" ";
                    }
                    std::cout<<std::endl;  
                }
            }

        }
        else
        {
            if(k<=2)
            {   
                if(x==1)
                {
                    std::cout<<"NO\n";
                }
                else
                {
                    int temp{n};
                    std::cout<<"YES\n";
                    std::cout<<temp<<"\n";
                    for(int j{};j<temp;j++)
                    {
                        std::cout<<1<<" ";
                    }
                    std::cout<<std::endl;
                }
            }
            else if(k>2)
            {
                if(x!=1)
                {
                    int temp{n};
                    std::cout<<"YES\n";
                    std::cout<<temp<<'\n';
                    for(int j{};j<temp;j++)
                    {
                        std::cout<<1<<" ";
                    }
                    std::cout<<std::endl;  
                }
                else
                { 
                    int temp{(n/2)-1};
                    std::cout<<"YES\n";
                    std::cout<<temp+1<<"\n";
                    for(int j{};j<temp;j++)
                    {
                        std::cout<<2<<" ";
                    }
                    std::cout<<3<<std::endl;

                }
            }            
        }
    }   
}