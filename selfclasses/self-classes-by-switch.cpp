#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {

    node* first = nullptr;
    node* second = nullptr;
    node* third = nullptr;

    int choice;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Create Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                first = new node(10);
                second = new node(20);
                third = new node(30);

                first->next = second;
                second->next = third;

                cout << "Linked List Created Successfully\n";
                break;

            case 2:
                if(first == nullptr) {
                    cout << "Linked List is empty\n";
                }
                else {
                    node* temp = first;

                    while(temp != nullptr) {
                        cout << temp->data << " ";
                        temp = temp->next;
                    }
                    cout << endl;
                }
                break;

            case 3:
                cout << "Program Ended\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while(choice != 3);

    delete first;
    delete second;
    delete third;

    return 0;
}