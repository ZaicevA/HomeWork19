#include <iostream>

class Animal
{
public:
    Animal() 
    {}
    virtual void Voice()
    {}
};

class Dog : public Animal
{
public:
    Dog()
    {}
    void Voice() override
    {
        std::cout << "Woof" << "\n";
    }
};

class Cat : public Animal
{
public:
    Cat()
    {}
    void Voice() override
    {
        std::cout << "Miau" << "\n";
    }
};

class Goat : public Animal
{
public:
    Goat()
    {}
    void Voice() override
    {
        std::cout << "Beee"<<"\n";
    }
};

int main()
{
    Animal* animals[3] = { new Dog(), new Cat(), new Goat() };
    for (int i = 0; i < 3; i++)
    {
        animals[i]->Voice();
    }
}