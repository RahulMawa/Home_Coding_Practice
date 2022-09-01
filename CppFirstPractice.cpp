#include <iostream>

using namespace std;

void sayHello(){
    cout << "Hello" << endl;
}

class Book{
    public: 
        string title;
        string author;
        int pages;
};

int main(){

    int age;

    //Output statement
    string author = " by: Rahul Mawa";
    cout << "Hello World" << author << endl;
    cout << author.length() << endl;

    //Input statement
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "You are " << age << " years old!" << endl;

    //Arrays
    char numArray[10];
    cout << "What is your first name letter" << endl;
    cin >> numArray[0];
    cout << numArray[0] << endl;

    //Functions Code
    sayHello();

    //If Else statement
    bool IsMale = true;

    if(IsMale == true){
        cout << "HE/HIM" << endl;
    }
    else{
        cout << "----------" << endl;
    }

    //Switch Case
    int dayNum;
    string dayName;

    switch(dayNum){
        case 0: 
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2: 
            dayName = "Tuesday";
            break;
    }

    //While Loop
    int index = 1;
    while(index <= 5){
        cout << index << endl;
        index++;
    }

    //Classes
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 600;
    
    return 0;
}
