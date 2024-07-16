#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    int flag{};

    int j{};
    while(j<n)
    {
        if(arr[j]==1)
        {
            flag=1;
            break;
        }
        j++;
    }

    if(flag==1)
    {
        std::cout<<"HARD";
    }
    else
    {
        std::cout<<"EASY";
    }
}