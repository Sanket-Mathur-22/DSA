#include<iostream>
using namespace std;
int main()
{
   int i, j, count, temp, number[25];
   cout<<"Enter number of elemnts"<<endl;
  cin>>count;
   cout<<"enter elements"<<endl;
   for(i=0;i<count;i++)
   cin>>number[i];
   for(i=1;i<count;i++)
   {     temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0))
	{
         number[j+1]=number[j];
         j=j-1;
         }
      number[j+1]=temp;
   }
   cout<<"Sorted elements: "<<endl;
   for(i=0;i<count;i++)
      cout<<number[i]<<" ";
   return 0;
}