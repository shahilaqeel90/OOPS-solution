#include<iostream>
using namespace std;
class rectangle{
    int length, width;
    public:
    void set(int l,int w);
    int area();
};
void rectangle::set(int l,int w){
    length=l;width=w;

}
int rectangle::area(){
    return length*width;
}
