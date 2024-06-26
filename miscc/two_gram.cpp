#include <bits/stdc++.h>

int main()
{

    int len{};
    std::cin>>len;

    std::cin.ignore();

    std::string a;
    std::getline(std::cin,a);
    

    std::map<std::string,int> mp;

    for(int i{};i<len-1;i++)
    {
        std::string temp{};

        temp = a.substr(i,2);

        mp[temp]+=1;

    }

    int max{};
    std::string output;

    for(auto it = mp.begin();it!=mp.end();it++)
    {
        
        if(max<it->second)
        {
            max=it->second;
            output=it->first;
        }

    }

    std::cout<<output;

}