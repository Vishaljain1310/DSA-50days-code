/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1;
    vector<int>vec2{1,2,3,4,5};
    vector<int>vec3(10,-1);
    
    cout<<vec1.size()<<endl;
    cout<<vec2.size()<<endl;
    cout<<vec3.size()<<endl;
    cout<<endl;
    for(int i=0;i<vec3.size();i++){
        cout<<vec3[i]<<" ";
    }
    cout<<endl;
    vector<int>vec4(vec3.begin(),vec3.end());
    for(int i=0;i<vec4.size();i++){
        cout<<vec4[i]<<" ";
    }
    cout<<endl;
    for(auto ele:vec3){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(auto j=vec3.begin();j!=vec3.end();j++){
        cout<<(*j)<<" ";
    }
    cout<<endl<<endl;
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    vec.push_back(1);
    
    vec.pop_back();
    vec.pop_back();
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.max_size()<<endl;
    
    vector<int>vec5;
    vec5.push_back(1);
    vec5.push_back(2);
    vec5.push_back(3);
    vec5.push_back(4);
    vec5.push_back(5);
    vec5.push_back(6);
    for(auto dig:vec5){
        cout<<dig<<" ";
    }
    cout<<endl;
    vec5.erase(vec5.begin()+1,vec5.begin()+2+2);
    for(auto dig:vec5){
        cout<<dig<<" ";
    }
    cout<<endl;
    vec5.insert(vec5.begin()+2,3);
    for(auto dig:vec5){
        cout<<dig<<" ";
    }
    cout<<endl;
    cout<<vec5.size()<<endl;
    cout<<vec5.capacity()<<endl;
    
    
    

    return 0;
}
