#include <bits/stdc++.h>

int main()
{
    int t{};
    std::cin>>t;

    for(int i{};i<t;i++)
    {
        int n{10};

        std::vector<std::string> arr(10);
        for(int j{};j<n;j++)
        {
            std::cin>>arr[j];
        }

        int points{};
        int iter{};
        int iter2{};

        while(iter<n)
        {
            while(iter2<n)
            {
                if(arr[iter][iter2]=='X')
                {

                    if(iter==0 || iter==9)
                    {
                        points+=1;
                    }
                    else if((iter>0 && iter<9) && (iter2==0 || iter2 ==9))
                    {
                        points+=1;
                    }
                    else if((iter==1 || iter==8) && (iter2>0 && iter2<9))
                    {
                        points+=2;
                    }
                    else if((iter>1 && iter<8) && (iter2==1 || iter2==8))
                    {
                        points+=2;
                    }
                    else if((iter==2 || iter==7) && (iter2>1 && iter2<8))
                    {
                        points+=3;
                    }
                    else if((iter>2 && iter<7) && (iter2==2 || iter2==7))
                    {
                        points+=3;
                    }
                    else if((iter==3 || iter==6) && (iter2>2 && iter2<7))
                    {
                        points+=4;
                    }
                    else if((iter>3 && iter<6) && (iter2==3 || iter2==6))
                    {
                        points+=4;
                    }
                    else if((iter==4 || iter==5) && (iter2>3 && iter2<6))
                    {
                        points+=5;
                    }
                    else if((iter>4 && iter<5) && (iter2==4 || iter2==5))
                    {
                        points+=5;
                    }

                }
                iter2++;
            }
            iter2=0;
            iter++;
        }

        std::cout<<points<<"\n";
    }
}