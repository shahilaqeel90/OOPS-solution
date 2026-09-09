#include<iostream>
using namespace std;
class employe{
     private:
    int salary;
    public:
     int id;
     string name;
      string position ;
      string department;
    public:
    void input(){
        cout<<"enter the employ name"<<endl;
        cin>>name;
        cin.ignore();
   
        cout<<"enter the id of employe"<<endl;
        cin>>id;
        
   
        cout<<"enter the position of employe"<<endl;
        cin>>position;
    
        cout<<"enter the department of employe"<<endl;
        cin>>department;
}
void display() {
        cout << "\n--- employe Record ---" << endl;
        cout << "name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "position : " << position << endl;
        cout << " department: " << department << endl;
    }
    
};
int main(){
    employe E;
    E.input();
    E.display();
    return 0;

}