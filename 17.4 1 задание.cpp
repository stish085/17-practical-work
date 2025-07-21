// 17.4 1 задание.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void sw(int& a , int & b)
{
    int* aA = &a;
    int* bB = &b;
   std::swap(*aA, *bB);

}
int main()
{
    int a = 10;

    int b = 20;
    std::cout << a << " <-> " << b << std::endl;
    sw(a,b);

    std::cout << a << " <-> " << b;

    return 0;
}

