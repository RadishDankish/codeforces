#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{};
        std::cin>>n;

        std::vector<int> arr(n);

        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }

        int num1{arr[0]};
        int num2{-1};

        int k{};

        while(k<n)
        {
            if(arr[k]!=num1)
            {
                num2=arr[k];
                break;
            }
            k++;
        }

        int flag{};

        for(int j{};j<n;j++)
        {
            if(arr[j]!=num1 && arr[j]!=num2)
            {
                flag=1;
                std::cout<<"NO\n";
                break;
            }
        }



        if(flag==0 && num2!=-1)
        {

            int count_num1{};
            int count_num2{};
            int k{};
            while(k<n)
            {
                if(arr[k]==num1)
                {
                    count_num1++;
                }
                else
                {
                    count_num2++;
                }
                k++;
            }
        

            if(n%2==0)
            {
                if(count_num1==count_num2)
                {
                    std::cout<<"YES\n";
                }
                else
                {
                    std::cout<<"NO\n";
                }
            }
            else
            {
                if(count_num1-count_num2==1 || count_num2-count_num1==1)
                {
                    std::cout<<"YES\n";
                }
                else
                {
                    std::cout<<"NO\n";
                }
            }
        }
        else if(num2==-1)
        {
            std::cout<<"YES\n";
        }
    }
}