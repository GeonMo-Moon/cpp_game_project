#pragma once

using namespace std;



typedef struct Animal {
    char name[30];  // �̸�
    int age;        // ����

    int health;  // ü��
    int food;    // ��θ� ����
    int clean;   // ������ ����
} Animal;

void create_animal(Animal* animal) {
    std::cout << "������ �̸�? ";
    std::cin >> animal->name;

    std::cout << "������ ����? ";
    std::cin >> animal->age;

    animal->health = 100;
    animal->food = 100;
    animal->clean = 100;
}

void play(Animal* animal) {
    animal->health += 10;
    animal->food -= 20;
    animal->clean -= 30;
}
void one_day_pass(Animal* animal) {
    // �Ϸ簡 ������
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}
void show_stat(Animal* animal) {
    std::cout << animal->name << "�� ����" << std::endl;
    std::cout << "ü��    : " << animal->health << std::endl;
    std::cout << "��θ� : " << animal->food << std::endl;
    std::cout << "û��    : " << animal->clean << std::endl;
}

