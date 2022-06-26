//sort, reverse and search operation in array

#include<iostream>
using namespace std;
int main ()
{
   int myarray[5] ;
   cout<<"\nInput list is \n";
   for(int i=0;i<5;i++)
   {
      cin>>myarray[i];
   }
  
   //show elements in array
   
   cout<<endl<<endl;
   for(int i=0;i<5;i++)
   {
      cout<<myarray[i]<<"   ";
   }
   
   int op ;
   cout<<endl<<endl<<"1.For sorting"<<endl;
   cout<<"2.For searching in array"<<endl;
   cout<<"3. For reversing the array"<<endl;
   
   cout<<"Select your option : ";
   cin>>op;
   
   switch (op) {
   	case 1:
   		for(int k=1; k<5; k++)
   {
      int temp = myarray[k];
      int j= k-1;
      while(j>=0 && temp <= myarray[j])
      {
         myarray[j+1] = myarray[j];
         j = j-1;
      }
   myarray[j+1] = temp;
   }
cout<<"\nSorted list is \n";
for(int i=0;i<5;i++)
   {
   cout <<myarray[i]<<"\t";
   }
  
   break;
   
   case 2 :
   	int key;
   
   cout<<endl<<"Enter the numbe to find in aray : ";
   cin>>key;
   
   for(int i=0;i<5;i++)
   {
   if(myarray[i] == key) {
   	cout<<endl<<"The numbe is at this location : " << i<<endl;
   	break;
   }
   }
   
   case 3 :
   	int s = 0;
   int e = 4;
   while(s<e)
   {
   swap(myarray[s],myarray[e]);
   s++;
   e--;
   } 

   cout<<endl<<"After reversing"<<endl;
   for(int i=0;i<5;i++)
   {
      cout<<myarray[i]<<"   ";
   }
   }
  
  
}
