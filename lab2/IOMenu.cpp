#include <iostream>

double GetElementConsoleDouble()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        double value;
        std::cin >> value;

        // Проверка на предыдущее извлечение
        if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
        {
            std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
            std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n'); // удаляем лишние значения

            return value;
        }
    }
}


int GetElementConsoleInt()
{
    while (true) // цикл продолжается до тех пор, пока пользователь не введет корректное значение
    {
        int value;
        std::cin >> value;

        // Проверка на предыдущее извлечение
        if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
        {
            std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
            std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
            std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            std::cin.ignore(32767, '\n'); // удаляем лишние значения

            return value;
        }
    }
}