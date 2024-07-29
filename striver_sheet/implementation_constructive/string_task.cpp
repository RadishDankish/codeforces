#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    int n{a.length()};

    for(int i{};i<n;i++)
    {
       a[i]= tolower(a[i]);
    }

    int i{};
    while(i<a.size())
    {
        
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u'||a[i]=='y')
        {
            a.erase(i,1);  
        }
        else
        {
            a.insert(i,".");
            i+=2;
        }
    }

    std::cout<<a;
}

