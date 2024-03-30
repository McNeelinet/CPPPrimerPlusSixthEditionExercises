#include <iostream>


struct Pizza
{
    char pizzaMaker[20];
    double diameter;
    double weight;
};

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    Pizza* myPizza = new Pizza;

    cout << "Enter diameter: ";
    cin >> myPizza->diameter;
    cin.get();

    cout << "Enter pizza maker: ";
    cin.getline(myPizza->pizzaMaker, 20);

    cout << "Enter weight: ";
    cin >> myPizza->weight;

    cout << endl;

    cout << "Pizza Info." << endl;
    cout << "Pizza maker: "
         << myPizza->pizzaMaker << endl;
    cout << "Diameter: "
         << myPizza->diameter << endl;
    cout << "Weight: "
         << myPizza->weight << endl;

    return 0;
}
