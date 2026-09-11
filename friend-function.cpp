#include<iostream>
using namespace std;

class Number{
    private:
    int value;
    public:
    Number(int v){
        value = v;
    }
    friend Number add(Number n1,Number n2);
    void display(){
        cout<< "Value :" <<value<<endl;
    }
};

Number add(Number n1,Number n2){
    Number result(n1.value+n2.value);
    return result;
}

int main(){
    Number n1{10};
    Number n2(20);

    Number n3 = add(n1,n2);
    n3.display();
    return 0;
}



/*
feature                                      /  member function       /friend function/
-----------------------------------------    /    -------------     /---------------/
class member?                                /yes                   /no
can acces private data ?                     /yes                   /yes
can acces protected data ?                   /yes                   /yes
fas this pointer?                            /yes                   /no
called using object?                         /usually yes           /no
declared using 'friend'?                     /no                    /yes
can acces private data of mulyiple clases?   /normaly no            /yes if friend of both 
common use                                   /class operations      /operator overloading , cooperation between classes
*/
