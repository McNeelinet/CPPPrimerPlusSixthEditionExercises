#include <iostream>


struct CandyBar
{
    char name[20];
    float weight;
    int calories;
};

int main()
{
    CandyBar snack = { "Mocha Munch", 2.3, 350 };

    std::cout << "Name: " << snack.name << std::endl;
    std::cout << "Weight: " << snack.weight << std::endl;
    std::cout << "Calories: " << snack.calories << std::endl;

    return 0;
}
