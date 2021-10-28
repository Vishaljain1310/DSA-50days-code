#include<iostream>

using namespace std;

void convert(int n,char val [9])
{
	if(n>0)
	{
	char temp[9];
		
	for(int i=1;i<n;i++)
	{
	temp[i-1]=val[i];
			
	}
	cout<<val[0]-'0';
		
	convert(n-1,temp);
		
	}
}

int main()
{
  int num;

   cout<<"enter lenght of string";
   cin>>num;

   char input[num];
   cout<<"enter the string";
	
   for(int i=0;i<num;i++ )
{
cin>>input[i];
}
    
convert(num,input);
	
}
