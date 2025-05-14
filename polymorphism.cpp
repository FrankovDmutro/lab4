#include "polymorphism.h"

void Monkey::setName(string n) {
    name = n;
}

void Monkey::setTail(string t) {
    tail = t;
}

void Monkey::setBananas(int b) {
    bananas = b;
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

void Monkey::say() { 
    cout << "У га га, я мавпа пустун!" << endl;
}

void Monkey::reveal() {
    tell();  
}

void Monkey::tell() {
    cout << "Я Мавпа " << name << ", і у мене " << bananas << " бананів!" << endl;
}

Parapithecidae::Parapithecidae() {
    setName("Parapithecidae ");
    setTail("вимер");
    setBananas(0);
    tell();
}

void Parapithecidae::tell() {
    cout << "Привіт, я " << getName() << ", і у мене " << getBananas() << " бананів, тому що я вимер!" << endl;
}

Macaca::Macaca() {
    setName("macaca");
    setTail("довгий, тонкий");
    setBananas(8);
    //tell();
}

// Macaca::Macaca(int steal) {
//     cout << "Привіт, я із сусідьного класу, поцупив у тебе " << steal << "бананів, та загалом маю " << steal + getBananas() << endl; 
// }

void Macaca::tell() {
    cout << "~Щось схоже на хрипо - сміх, але вам це подобається.." << endl;
}

MacacaFuscata::MacacaFuscata() {
    setName("Мукак");
    tell();
}

void MacacaFuscata::tell() {
    // cout << "Ви щось чуєте?" << endl << "(0, 1):";
    // bool a;
    // cin >> a;
    // if (a) {
    //     setBananas(0);
    //     Macaca temp(getBananas());
    // }
        cout << "Я " << getName() << ", і я з Японії, але я нічого не знаю про Наруто" << endl;
}

void FuscataStrange::setBananas(int b, string reason) {
    Monkey::setBananas(b);  // використовуємо базовий метод
    cout << "Банани оновлено до: " << getBananas() << " (" << reason << ")" << endl;
}

FuscataStrange::FuscataStrange() {
    setName("клон");
    setTail("хвіст з чакри");
    setBananas(0, "початкова ініціалізація");
}

void FuscataStrange::tell() {
    cout << "Хто я такий?" << endl;
}