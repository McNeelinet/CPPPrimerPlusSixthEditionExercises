#include <iostream>


const int inchPerFoot = 12;
const float inchPerMetre = 0.0254;
const float kiloPerPound = 2.2;

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int heightFeetPart;
    cout << "Enter your height in full feet: ";
    cin >> heightFeetPart;

    int heightInchesPart;
    cout << "Enter the remaining part of your height in inches: ";
    cin >> heightInchesPart;

    int weightPounds;
    cout << "Enter your weight in pounds: ";
    cin >> weightPounds;

    float heightInches = heightFeetPart * inchPerFoot + heightInchesPart;
    float heightMeters = heightInches * inchPerMetre;
    float weightKilos = weightPounds / kiloPerPound;
    cout << "Your BMI is " << weightKilos / (heightMeters * heightMeters)
         << "." << endl;

    return 0;
}
