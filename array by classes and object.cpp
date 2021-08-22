//array resize
#include <iostream>

using namespace std;
class Array{
    private:
    int *array1;
    int size;
    int filled;
    public:
    Array(){
        size=13;
        array1=new int[size];
        for(int i=0;i<5;i++){
            array1[i]=i+1;
        }
        filled=5;
    }
    Array(int size){
        this->size=size;
        array1=new int[size];
        filled=0;
    }
    void printelement(){
        for(int i=0;i<filled;i++){
            cout<<array1[i]<<"-->";
        }
        cout<<endl;
    }
    
};

int main()
{
   Array *array2;
   array2=new Array();
   array2->printelement();
    return 0;
}