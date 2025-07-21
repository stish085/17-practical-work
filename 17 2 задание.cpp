// 17 2 задание.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
void sw(int a[])
{

  
    int l = 10;
        for (int i = 0; i < 10 / 2; ++i)
        { 
            int* pi = a+i;
            int* pl= a+(10-i-1);
            std::swap(*pi, *pl);
        }

}
int main()
{    
    int a[] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++)
    {
        std::cout <<a[i]<< " ";
    }
    sw(a);
    std::cout << std::endl;
    std::cout << " Sorted array:\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << a[i] << " ";
    }
}

