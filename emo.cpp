#include <iostream>
#include <string>
using namespace std;
class demo{
    public:
    void show(){
        cout<<"show the value"<<endl;

    }
    void show(int a){
        cout<<"show the value"<<endl;

    }
    void show(int a,int b){
        cout<<"show the value"<<" "<<a+b<<endl;
    }
    
    
    };
    inline int area (int a ,int b){
        int area=a*b;
        return area;
    }
    int add(int a,int b){
        return a+b;
    }
    int main(){
        int a,b,c;
        cin>>a>>b;
        c=add(a,b);
        cout<<c<<endl;
        demo obj;
        obj.show();
        obj.show(5);
        obj.show(5,5);
        cout<<"area"<<" "<<area(5,6);

    }
