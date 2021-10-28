/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
bool nearestcap(pair<int ,int> p1, pair<int, int> p2){
   int d1=(p1.first*p1.first)+(p1.second*p1.second);
   int d2=(p2.first*p2.first)+(p2.second*p2.second);
    return d1<d2;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int ,int>>vec;
  int x,y;
  for(int i=0;i<n;i++){
      cin>>x>>y;
      vec.push_back(make_pair(x,y));
  }
  sort(vec.begin(),vec.end(),nearestcap);
  for(auto cap:vec){
      cout<<"("<<cap.first<<","<<cap.second<<")"<<endl;
  }

    return 0;
}
