#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;
    
    int m{};
    std::cin>>m;

    std::vector<int> arr(n);

    for(int i{};i<n;i++)
    {
        std::cin>>arr[i];
    }

    std::sort(arr.begin(),arr.end(),std::greater<int>());

    int j{n-1};
    int sum{};
    int i{};

    while(i<m && j>=0)
    {
        if(arr[j]<0)
        {
            sum+=(-1*arr[j]);
            i++;
            j--;
        }
        else
        {
            break;
        }
    }

    std::cout<<sum;


}