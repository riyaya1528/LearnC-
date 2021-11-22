//hello.cpp
#include <iostream>
#include <string>

using namespace std;

class Neko
{
    private:
        string name;
    public:
        Neko(string s) {
            name = s;
    }
    void naku() {
        cout << "Meow. Im " << name << "!" << endl;
    }
};

int main()
{
    string name;
    int age;

    cout << "Hello. I'm a Computer." << endl;
    cout << "I wanna know you. May I ask your name?  Please type your name. :)" << endl;
    cin >> name;  //名前の確認

    cout << "Hey, " << name << ". Nice to meet you. o/" << endl;
    cout << "And I wanna know your age, too.  Please type your age. :)" << endl;
    cin >> age;  //年齢の確認
    
    cout << "Ok. Are you " << age << " , right?" << endl;
    if(age >= 30)
    {
         cout << "Allright. I see" << endl;
    }else 
    {
        cout << "Wait. You are " << age << " !?" << endl;
        cout << "Wow :o. You are so young. ;)" << endl;
    }
    cout << endl;

    Neko dora("boss");
    dora.naku();
}