#include <iostream>
#include <string>

using namespace std;

void introducingYourself(string *name, string *surname);
void introducingYourself(string &name, string &surname);
void sayHello(string *name, string *surname);

int main() {

    string name, surname;

    //Task 1
    introducingYourself(&name, &surname);
    sayHello(&name, &surname);

    //Task 2
    introducingYourself(name, surname);
    sayHello(&name, &surname);

    //Task 3
    introducingYourself(nullptr, &surname);
    sayHello(nullptr, &surname);

    return 0;
}

void sayHello(string *name, string *surname){
    if(name != nullptr){
        cout << "Nice to meet you " << *name << "!" << endl;
    }
    else if(surname != nullptr){
        cout << "Nice to meet you " << *surname << "!" << endl;
    }
    else{
        cout << "It would be nice to know your name :c" << endl;
    }
}

void introducingYourself(string *name, string *surname){
    if(name != nullptr){
        cout << "What's your name?" << endl;
        cin >> *name;
    }
    else{
        cout << "What's your surname?" << endl;
        cin >> *surname;
    }
}

void introducingYourself(string &name, string &surname){
    cout << "What's your name?" << endl;
    cin >> name;
    cout << "What's your surname?" << endl;
    cin >> surname;
}