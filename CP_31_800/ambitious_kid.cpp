#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> arr(n);

    int temp{};
    for(int i{};i<n;i++)
    {
        std::cin>>temp;
        arr[i]=std::abs(temp);
    }

    int min{INT_MAX};

    for(int i{};i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    std::cout<<min<<"\n";
}