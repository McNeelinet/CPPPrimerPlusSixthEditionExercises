#include <iostream>


struct CandyBar
{
    char name[20];
    double weight;
    int calories;
};

int main()
{
    CandyBar* pack = new CandyBar[3];

    pack[0] = { .name = "Twix",
        .weight = 2.8,
        .calories = 400
    };
    pack[1] = { .name = "Mocha Munch",
        .weight = 2.3,
        .calories = 350
    };
    pack[2] = { .name = "Alyonka",
        .weight = 4.8,
        .calories = 800
    };

    std::cout << "First.\n";
    std::cout << "Name: " << pack[0].name << "\n"
              << "Weight: " << pack[0].weight << "\n"
              << "Calories: " << pack[0].calories << "\n";

    std::cout << "\n";

    std::cout << "Second.\n";
    std::cout << "Name: " << pack[1].name << "\n"
              << "Weight: " << pack[1].weight << "\n"
              << "Calories: " << pack[1].calories << "\n";

    std::cout << "\n";

    std::cout << "Third.\n";
    std::cout << "Name: " << pack[2].name << "\n"
              << "Weight: " << pack[2].weight << "\n"
              << "Calories: " << pack[2].calories << "\n";

    delete[] pack;
    return 0;
}
