#include<iostream>
using namespace std;
class rectangle{
    int length,width;
    public:
    void set(int l,int w){
        length=l;
        width=w;
    }
    int area(int value){
        return length*width;
    }
};
int main(){
    rectangle r;
    r.set(4,5);
    cout<<r.area();
}