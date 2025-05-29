#include <iostream>
using namespace std;

class Animals 
{
public:
    virtual void Sound() = 0;
};

class Dog : public Animals 
{
public:
    void Sound() 
    {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

class Cat : public Animals 
{
public:
    void Sound() 
    {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

class Cow : public Animals
{
public:
    void Sound()
    {
        cout << "Cow cries: Moo~ Moo~" << endl;
    }
};
int main() 
{
    Dog d;
    Cat c;
    Cow Co;
    Animals* animals[] = { &d,&c,&Co };

    for (int i = 0; i < 3; i++)
    {
        animals[i]->Sound();
    }

    return 0;
}
