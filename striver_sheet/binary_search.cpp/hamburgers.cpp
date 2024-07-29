#include <bits/stdc++.h>

void find_price(long long &r,long long &total,long long &price)
{
    int mid{};

    if(total==r)
    {
        return;
    }
    else if(total<r)
    {
        total+=price;

    }
}

int main()
{
    std::string a;
    std::cin>>a;

    long long nb{};
    long long ns{};
    long long nc{};

    std::cin>>nb;
    std::cin>>ns;
    std::cin>>nc;

    long long pb{};
    long long ps{};
    long long pc{};

    std::cin>>pb;
    std::cin>>ps;
    std::cin>>pc;

    long long r{};
    std::cin>>r;

    long long count_burger{};
    long long total_price{};

    std::vector<long long> recipe(3);

    for(auto i=0;i<a.size();i++)
    {
        if(a[i]=='B')
        {
            recipe[0]++;
        }
        else if(a[i]=='S')
        {
            recipe[1]++;
        }
        else
        {
            recipe[2]++;
        }
    }

    long long price{recipe[0]*pb+recipe[1]*ps+recipe[2]*pc};

    count_burger=std::min({nb/recipe[0],ns/recipe[1],nc/recipe[2]});

    nb-=count_burger*recipe[0];
    ns-=count_burger*recipe[1];
    nc-=count_burger*recipe[2];
    
    if(nb%recipe[0]!=0)
    {
    r-=(pb*(recipe[0]-nb%recipe[0]));
    }
    if(ns%recipe[1]!=0)
    {
    r-=(ps*(recipe[1]-ns%recipe[1]));
    }

    if(nc%recipe[2]!=0)
    {
    r-=(pc*(recipe[2]-nc%recipe[2]));
    }
 
    count_burger++;
    std::cout<<"HELLO";

    if(r<0)
    {
        std::cout<<count_burger-1;
    }
    else if(r<price)
    {      
        std::cout<<count_burger;
    }
    else
    {
        while(total_price<=r)
        {
            if(total_price==r)
            {
                break;
            }
            else if(total_price<r)
            {
                total_price=(total_price+r)/2;
            }
        }
        count_burger+=total_price/price;
        std::cout<<count_burger;
    }

}