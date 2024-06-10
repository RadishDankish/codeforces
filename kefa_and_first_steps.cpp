#include <bits/stdc++.h>

int main()
{
    int n{};
    std::cin>>n;

    std::vector<int> v(n);

    for(int i{};i<n;i++)
    {
        std::cin>>v[i];
    }

    int i{};
    int j{1};

    int max_length{1};
    int temp{1};

    while(i<n-1 && j<n)
    {
        if(v[j]<v[i])
        {
            if(temp<max_length)
            {
                temp=max_length;
                max_length=1;
                i++;
                j++;
            }
            else
            {
                max_length=1;
                i++;
                j++;
            }
        }
        else
        {
            i++;
            j++;
            max_length+=1;
        }

    }

    if(temp<max_length)
    {
        temp=max_length;
    }

    std::cout<<temp;



}