// 17.  3 задание.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
bool substr( char* a,  char* b)
{
    int i = 0;
    int j = 0;
  
    while (*(a+i) != '\0')
    {
        if (*(b + j) != '\0')
        {
            if (*(a + i) == *(b + j))
            {

                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        else
        {   
            return true;
            break;
        }
    }
    if (*(b + j) == '\0') 
    { 
        return true;
    }
    else
    {
        return false;
    }
   
 }
int main()
{   
     char a [] = "Hello world";
     char b []= "wor";
     char c []= "banana";
     std::cout << " 1- true ::: 2-false "<< std::endl;
     std::cout << "  " << std::endl;
     std::cout << substr(a, b) << "| |" << substr(a, c);
     
}

