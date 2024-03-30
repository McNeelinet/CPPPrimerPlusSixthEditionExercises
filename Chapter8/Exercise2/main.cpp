#include <iostream>
#include <cstring>


struct CandyBar
{
    char brand[41];  // Лучше использовать std::string, но так сказано в задании
    double weight;
    int calories;
};

void setCandyBar(CandyBar& candy, const char* brand="Millennium Munch", double weight=2.85, int calories=350);
void showCandyBar(const CandyBar& candy);

int main()
{
    using namespace std;

    CandyBar bar1, bar2;

    setCandyBar(bar1, "Milky Way", 0.54, 159);
    setCandyBar(bar2);

    showCandyBar(bar1);
    cout << endl;
    showCandyBar(bar2);

    return 0;
}

void setCandyBar(CandyBar& candy, const char* brand, double weight, int calories)
{
    std::strncpy(candy.brand, brand, 40);
    candy.brand[40] = '\0';
    candy.weight = weight;
    candy.calories = calories;
}

void showCandyBar(const CandyBar& candy)
{
    using namespace std;

    cout << "Brand: " << candy.brand << endl;
    cout << "Weight: " << candy.weight << endl;
    cout << "Calories: " << candy.calories << endl;
}
