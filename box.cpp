#include<iostream>
using namespace std;

#define MAX 5

class Book{
    public:
        string arr[MAX];
        Book(){
            top = -1;
        }

        void push(string book){
            if (top >= MAX - 1){
                cout << "Book box is full" << endl;
            }
            else{
                top += 1;
                arr[top] = book;
                cout << "Book Addeded: " << book << endl;
            }
            cout << endl;
        }

        string pop(){
            if (top < 0){
                cout << "Box is empty." << endl;
                return "";
            }
            else{
                string book = arr[top--];
                return book;
            }
        }

        void display(){
            cout << "[ ";
            for (int i = top; i >= 0; i--){
                cout << arr[i] << " ";
            }
            cout << "]";
            cout << endl;
        }

    private:
        int top;
};

int main(){

    int a = 0;
    Book b;

    while (a != 4){
        cout << "1: Insert a book in the box." << endl;
        cout << "2: Delete a book from the box." << endl;
        cout << "3: Display book box." << endl;
        cout << "4: Exit." << endl;

        cout << "Enter your choice: " ;
        cin >> a;

        if (a == 1){
            string name;
            cout << "Enter Book Name: ";
            cin >> name;
            b.push(name);
        }
        else if(a == 2){
            string removedBook = b.pop();
            if(!removedBook.empty()){
                cout << "Removed book: " << removedBook << endl;
            }
            cout << endl;
        }
        else if(a == 3){
            b.display();
            cout << endl;
        }
        else{
            return 0;
        }
    }

cout << endl;
return 0;
}