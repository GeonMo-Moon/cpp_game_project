#include <iostream>
#include <string>
#include "boss_stats.h"

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
struct boss_healthy insert_boss[end_boss];
// select_char select_char;

int main()
{
    insert_boss[fisrt_boss] = { 500, 300, 250, 130 };
    insert_boss[second_boss] = { 800, 500, 250, 490 };

    //cout << select_char.skill.a << endl;

    int arr_size;
    std::cout << "array size : ";
    std::cin >> arr_size;
    int* list = new int[arr_size];
    for (int i = 0; i < arr_size; i++) {
        std::cin >> list[i];
    }
    for (int i = 0; i < arr_size; i++) {
        std::cout << i << "th element of list : " << list[i] << std::endl;
    }
    delete[] list;


    return 0;
}