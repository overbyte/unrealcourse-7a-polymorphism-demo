#include <iostream>

int GetSize(int Sizing)
{
    return Sizing;
}

int GetSize(std::string Sizing)
{
    return Sizing.length();
}

class Animal
{
    public:
        virtual void MakeNoise()
        {
            std::cout << "LOUD NOISES" << std::endl;
        }
};

class Dog : public Animal
{
    public:
        void MakeNoise() override
        {
            std::cout << "WOOF" << std::endl;
        }
};

class Cat : public Animal
{
    public:
        void MakeNoise() override
        {
            std::cout << "ALL HUMONS MUST DIE" << std::endl;
        }
};


void Stroke(Animal* animal)
{
    animal->MakeNoise();
}

int main()
{
    std::cout << GetSize(5) << std::endl;
    std::cout << GetSize("Hello World") << std::endl;

    Dog dog;
    Cat cat;

    Stroke(&dog);
    Stroke(&cat);

    return 0;
}
