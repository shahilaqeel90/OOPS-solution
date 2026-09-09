#include <iostream>
#include <cstdarg>
using namespace std;
// void display(int a=10,int b=20){
//     cout<<"a ="<<a<<" b ="<<b<<endl;
// }
// int main(){
//     display();
//     display(5);
//     display(5,15);
//     return 0;
// }
//va_list stores then list of variable arguments
//va_start() intialize the argument list
//va_arg()retrive the next argument
//va_end() clens up the argument list

//function to calculate sum 
int sum(int count, ...){
    va_list args;
    va_start(args,count);
    int total=0;
    for(int i=0;i<count;i++){
        total +=va_arg(args,int);

    }
    va_end(args);
    return total;
}
int main(){
    cout<<"sum="<<sum(3,4,5,6)<<endl;
    cout<<"sum="<<sum(5,5,6,3,4,8)<<endl;
}


