#include <bits/stdc++.h>

int main()
{
    int n{};
    int m{};

    std::cin>>n;
    std::cin>>m;

    char arr[n][m];
    int flag{};

    for(int i{};i<n;i++)
    {
        for(int j{};j<m;j++)
        {
            if(i%2==0)
            {
                arr[i][j]='#';
            }
            else if(i%2!=0 && (j==m-1 || j==0))
            {
                if(j==m-1 && (flag==0 || flag!=i))
                {
                    arr[i][j]='#';
                    flag=1;
                    
                }
                else if(j==0 && flag==1)
                {
                    arr[i][j]='#';
                    flag=i;

                }
                else
                {
                    arr[i][j]='.';

                }
            }
            else
            {
                arr[i][j]='.';
            }
        }
    }

    for(int i{};i<n;i++)
    {
        for(int j{};j<m;j++)
        {
            std::cout<<arr[i][j];
        }
        std::cout<<std::endl;
    }
}