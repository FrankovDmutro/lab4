#include "polymorphism.h"

void Monkey::setName(string n) {
    name = n;
}

void Monkey::setTail(string t) {
    tail = t;
}

void Monkey::setBananas(int b) {
    bananas += b;
}

string Monkey::getName() {
    return name;
}

string Monkey::getTail() {
    return tail;
}

int Monkey::getBananas() {
    return bananas;
}

void Monkey::makeSound() { 
    cout << "У га га, я шаблон який буде відгукатися всюди!" << endl;
}

void Monkey::reveal() {
    tell();  //віртуальний виклик через невіртуальний метод» 
             //або як кажуть: «динамічна диспетчеризація через virtual-функцію»
}

void Monkey::eatBanana() {
    setBananas(-1);
    cout << "Було з'їджено 1 банан!" << endl;
}

void Monkey::eatBanana(int count) {
    setBananas(-count);
    cout << "Було з'їджено " << count <<  " бананів!" << endl;
}

void Monkey::tell() {
    cout << "Я Мавпа " << name << ", і у мене " << bananas << " бананів!" << endl;
}

Parapithecidae::Parapithecidae() {
    setName("Parapithecidae ");
    setTail("вимер");
    setBananas(0);
}

void Parapithecidae::tell() {
    cout << "Привіт, я " << getName() << ", і у мене " << getBananas() << " бананів, тому що я вимер!" << endl;
}

Macaca::Macaca() {
    setName("macaca");
    setTail("довгий, тонкий");
    setBananas(8);
}

void Macaca::tell() {
    cout << "~Щось схоже на хрипо - сміх, але вам це подобається.." << endl;
}

MacacaFuscata::MacacaFuscata() {
    setName("Мукак");
}

void MacacaFuscata::tell() {
        cout << "Я " << getName() << ", і я з Японії, але я нічого не знаю про Наруто" << endl;
}

void FuscataStrange::setReason(string reason) {
    this->reason = reason;
}

string FuscataStrange::getReason() {
    return reason;
}

FuscataStrange::FuscataStrange() {
    setBananas(999);
    setName("клон");
    setTail("хвіст з чакри");
    setReason("бо маю купа чакри");
}

void FuscataStrange::tell() {
    cout << "Датебайо! Я " << getName() << ", маю " << getTail() << ". Влаштував собі банановий рай клонувавши " << getBananas() << " бананів, " << getReason() << "!" << endl;
}