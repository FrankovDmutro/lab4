#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monkey { 
    string name;
    string tail;
    int bananas;
    public: 
        void setName(string n);
        void setTail(string t);
        void setBananas(int b);

        string getName();
        string getTail();
        int getBananas();
    
        void makeSound();

        void reveal();

        void eatBanana();
        void eatBanana(int count);

    protected:
        virtual void tell();
};

class Parapithecidae : public Monkey
{
    public:
        Parapithecidae();
    protected:
        void tell();

};

class Macaca : public Monkey 
{
    public: 
        Macaca();
        // Macaca(int steal);
    protected:
        void tell() override;
};

class MacacaFuscata : public Macaca 
{
    public: 
        MacacaFuscata();
    protected:
        void tell() override;
};

class FuscataStrange : public MacacaFuscata
{
    string reason;
    public:
        void setReason(string reason);
        string getReason();
        FuscataStrange();
    protected:
    void tell() override;
};