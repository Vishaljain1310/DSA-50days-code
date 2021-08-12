#include<iostream>
using namespace std;

int perfect(int num){
    int sum=0;
    for (int i=1; i < num; i++)
    {
         
            if (num % i == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout << "\n" << num <<" is a perfect number.";
    else
        cout << "\n" << num <<" is not a perfect number.";
}
int main ()
{  
    int n;
    cout << "Enter the number to be checked : ";
    cin >> n;
    cout<<perfect(n);
    
    return 0;
}
