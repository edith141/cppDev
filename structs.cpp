#include <iostream>

template <typename T, typename U>
struct Employee
{
    T id{};
    T age{};
    U wage{};
};

void printEmployee(const Employee<int, double>& e)
{
    // Use member selection opeartor (.) to select member from reference to struct
    std::cout << "Id: " << e.id;
    std::cout << "  Age: " << e.age;
    std::cout << "  Wage: " << e.wage;
    std::cout << std::endl;
}

void updateEmployeeAge(int age, Employee<int, double>& e)
{
    e.age = age;
}

int main()
{
    Employee<int, double> joe{ 1, 34, 65000.0 };

    ++joe.age;
    joe.wage = 68000.0;

    printEmployee(joe);

    updateEmployeeAge(36, joe);
    printEmployee(joe);

    Employee<int, double>* empPtr = &joe;
    empPtr -> age +=1;
    printEmployee(joe);
    std::cout << empPtr->id << std::endl;

    return 0;
}