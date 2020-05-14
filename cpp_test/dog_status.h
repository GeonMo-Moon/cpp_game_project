#pragma once

using namespace std;



typedef struct Animal {
    char name[30];  // 이름
    int age;        // 나이

    int health;  // 체력
    int food;    // 배부른 정도
    int clean;   // 깨끗한 정도
} Animal;

void create_animal(Animal* animal) {
    std::cout << "동물의 이름? ";
    std::cin >> animal->name;

    std::cout << "동물의 나이? ";
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
    // 하루가 지나면
    animal->health -= 10;
    animal->food -= 30;
    animal->clean -= 20;
}
void show_stat(Animal* animal) {
    std::cout << animal->name << "의 상태" << std::endl;
    std::cout << "체력    : " << animal->health << std::endl;
    std::cout << "배부름 : " << animal->food << std::endl;
    std::cout << "청결    : " << animal->clean << std::endl;
}

