#include <iostream>


struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void printBox(box someBox);
void fillBoxVolume(box* someBox);

int main()
{
    box someBox = {.maker = "Awesome boxes", .height = 20, .width = 30, .length = 40};
    fillBoxVolume(&someBox);
    printBox(someBox);

    return 0;
}

void printBox(box someBox)
{
    using namespace std;

    cout << "Box maker: " << someBox.maker << endl;
    cout << "Height: " << someBox.height << endl;
    cout << "Width: " << someBox.width << endl;
    cout << "Length: " << someBox.length << endl;
    cout << "Volume: " << someBox.volume << endl;
}

void fillBoxVolume(box* someBox)
{
    double volume = someBox->height * someBox->width * someBox->length;

    someBox->volume = volume;
}
