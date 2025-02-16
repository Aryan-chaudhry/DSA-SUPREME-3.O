#include<iostream>
using namespace std;

class Student{
    public:

    // Attributes
    int id;
    int age;
    string name;

    // cunstructor
    // Student(){
    //     cout << this -> name << " default Constructor called!" << endl;
    // }


    // parametrised constructor
    Student(int id, int age, string name){
        this -> id = id;
        this -> age = age;
        this -> name = name;
    }
    // behaviour or methods or function

    void study(){
        cout  << this -> name << " is Studying" << endl;
    }

    void sleep(){
        cout << this -> name << " is Sleeping" << endl;
    }

    void bunk(){
        cout << this -> name << "is at Bunk" << endl;
    }

    // copy constructor
    Student(const Student &srcobj){ // signify A
        cout << "Copy constructor" << endl;
        this -> id = srcobj.id;
        this -> age = srcobj.age;
        this -> name = srcobj.name;
    }

    // destructor

    ~Student(){
        cout << this -> name << " defalut Destructor called!" << endl;
    } 

};

int main(){
    // Student A;

    // A.id = 16750;
    // A.age = 19;
    // A.name = "Aryan";

    // A.study();

    // Student B;

    // B.id = 16751;
    // B.age = 19;
    // B.name = "Ayush";

    // B.study();

    Student A(16750, 19, "Aryan"); // stack memmory


    // Student C = A;
    // or
    Student C(A);
    cout << "Copy constructor " << C.name << endl;
    cout << "Paramertrised constructor " << A.name << endl;


    // dynamic allocation or student pointer  // here destructor not called so delete it your self
    Student *child = new Student(16750, 19, "Aryan"); // heap
    
    cout << child -> name << endl;
    cout << child -> age << endl;
    cout << child -> id << endl;

    delete child;

    return 0;
    
}