#include <iostream>
#include <string>
#include "dog_status.h"

using namespace std;

/*void greet()
{
    cout << "hello!" << endl;
}

int sum(int x, int y)
{
    return (x + y);
}

int min(int x, int y)
{
    return (x - y);
}

void totall(int (*a)(int, int), int(*b)(int, int) )
{
    cout << "pule : " << a(3, 5) << " " << "minus : " << b(5, 3) << endl;
}

class Great 
{
   public:
    void operator()()
    {
        cout << "Ola !" << endl;
    }
    void operator()(const char* str)
    {
        cout << str << endl;
    }
};

void func(Great& great)
{
    great();
}

int main()
{
    void (*fptr)() = greet;
    fptr();

    //totall(sum, min);

    Great great;
    great();
    great("OLA Julia");

    func(great);

    return 0;
}*/

/* 람다 표현식

int main()
{
    int num1 = 3, num2 = 5;

    auto calc = [num1, &num2](int addVal)
    {
        num1 += addVal;
        num2 += num1 + addVal;
    };

    calc(5);
    cout << num2 << endl;

    return 0;
}
*/

int main() {
    Animal* list[10];
    int animal_num = 0;

    for (;;) {
        cout << "1. 동물 추가하기" << endl;
        cout << "2. 놀기 " << endl;
        cout << "3. 상태 보기 " << endl;

        int input;
        cin >> input;

        switch (input) 
        {
            int play_with;
        case 1:
            list[animal_num] = new Animal;
            create_animal(list[animal_num]);

            animal_num++;
            break;
        case 2:
            std::cout << "누구랑 놀게? : ";
            std::cin >> play_with;

            if (play_with < animal_num) play(list[play_with]);

            break;

        case 3:
            std::cout << "누구껄 보게? : ";
            std::cin >> play_with;
            if (play_with < animal_num) show_stat(list[play_with]);
            break;
        }

        for (int i = 0; i != animal_num; i++) {
            one_day_pass(list[i]);
        }
    }
    for (int i = 0; i != animal_num; i++) {
        delete list[i];
    }
}

