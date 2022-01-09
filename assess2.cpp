#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    signed int num[4]={-1,2,1,-4};
    signed int target=1,i,j,k,sum;

    for(i=0;i<4;i++)
    { 
        for(j=0;j<4;j++)
        {    
            if(i!=j){
                for(k=0;i<4;k++)
                {
                   if(i!=j&&j!=k&&k!=i){

                        sum=num[i]+num[j]+num[k];
                        if(sum==(target)||(target-1)||(target+1))
                        {
                            cout<<"Numbers which give the sum, closest to target are:";
                            cout<<num[i]<<","<<num[j]<<","<<num[k]<<endl;
                            exit(1);
                        }
                        }
                }
            }
        }
    }

    return 0;
}