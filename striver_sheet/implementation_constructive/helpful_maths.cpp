#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    int one{};
    int two{};
    int three{};

    std::string temp = "";

    for(int i{};i<a.size();i+=2)
    {
        if(a[i]-'0'==1)
        {
            one++;
        }
        else if(a[i]-'0'==2)
        {
            two++;
        }
        else
        {
            three++;
        }
    }

    while(one>0)
    {
        temp+="1+";
        one--;
    }
    while(two>0)
    {
        temp+="2+";
        two--;
    }
    while(three>0)
    {
        temp+="3+";
        three--;
    }

    temp.pop_back();

    std::cout<<temp;
}