#include<iostream>
using namespace std;
                                /*BestAlgorithmToFindMaxMinInAccordanceToTimeComplexity*/
int main()
{
int a[100],i,n,min,max;
cout<<"Enter size of array :\t";
cin>>n;
                                /* #####AcceptArray##### */
    for(i = 1 ;i<=n;i++)
    {
    cin>>a[i];
    }
   
                                /* #####StraightMaxMinLogic##### */
     min=max=a[1];
    for(i=2;i<=n;i++)
    {
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }   
 
    cout<<"MIN :\t"<<min;
    cout<<"\nMAX :\t"<<max;
}

