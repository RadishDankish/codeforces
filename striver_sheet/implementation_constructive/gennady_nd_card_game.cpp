#include <bits/stdc++.h>

int main()
{
    std::string a;
    std::cin>>a;

    std::vector<std::string> arr(5);

    for(int i{};i<5;i++)
    {
        std::cin>>arr[i];
    }

    int flag{};

    for(int i{};i<5;i++)
    {
        if(arr[i][0]==a[0] || arr[i][1]==a[1])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
}