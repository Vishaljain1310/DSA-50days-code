//array resize
#include <iostream>

using namespace std;

int main()
{
   int *array1;
   array1=new int[13];
   for(int i=0;i<13;i++){
       array1[i]=i+1;
   }
   int *array2;
   array2=new int[31];
   for(int i=0;i<13;i++){
       array2[i]=array1[i];
   }
   for(int i=13;i<31;i++){
       array2[i]=i+1;
   }
   delete[]array1;
   array1=array2;
   array2=NULL;
   
   for(int i=0;i<31;i++){
      cout<<array1[i]<<"-->";
   }
   cout<<endl;
//      for(int i=0;i<31;i++){
//       cout<<array2[i]<<"-->";
//   }
    return 0;
}