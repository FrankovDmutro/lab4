#include "polymorphism.h"
#include <iostream>

using namespace std;

void showMenu() {
    cout << "==============================" << endl;
    cout << "    🌴 Monkey Class Tree 🌴   " << endl;
    cout << "==============================" << endl;
    cout << "1. 🐒 Monkey" << endl;
    cout << "2. 🧬 Parapithecidae" << endl;
    cout << "3. 🐵 Macaca" << endl;
    cout << "4. 🐒 Macaca Fuscata" << endl;
    cout << "5. 🌈 Fuscata Strange" << endl;
    cout << "0. 🚪 Вихід" << endl;
    cout << "------------------------------" << endl;
    cout << "Виберіть клас для створення: ";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;
        cout << endl;

        Monkey* monkey = nullptr;

        switch (choice) {
            case 1:
                monkey = new Monkey();
                monkey->setName("Проста мавпа");
                monkey->setTail("звичайний");
                monkey->setBananas(3);
                break;
            case 2:
                monkey = new Parapithecidae();
                break;
            case 3:
                monkey = new Macaca();
                break;
            case 4:
                monkey = new MacacaFuscata();
                break;
            case 5:
                monkey = new FuscataStrange();
                break;
            case 0:
                cout << "👋 До зустрічі, мавпенятко!" << endl;
                break;
            default:
                cout << "❌ Невірний вибір, спробуй ще раз!" << endl;
                break;
        }

        if (monkey) {
            monkey->say();       // публічний метод
            monkey->reveal();      // зроби tell() public або через обгортку
            delete monkey;
            cout << endl;
        }

    } while (choice != 0);

    return 0;
}
