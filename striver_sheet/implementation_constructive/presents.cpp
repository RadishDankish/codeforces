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

    std::vector<int> arr_p(n);

    int it{};
    while(it<n)
    {
        arr_p[arr[it]-1]=it+1;
        it++;
    }

    for(int i{};i<n;i++)
    {
        std::cout<<arr_p[i]<<" ";
    }

}