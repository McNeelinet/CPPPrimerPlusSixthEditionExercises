#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>


std::vector<int> Lotto(int fields, int numbers);

int main()
{
    std::vector<int> winners;

    winners = Lotto(51, 6);
    std::copy(winners.begin(), winners.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}

std::vector<int> Lotto(int fields, int numbers)
{
    std::vector<int> sequence;
    for (int i = 0; i < fields; ++i)
        sequence.push_back(i + 1);

    std::random_device rd;
    std::mt19937_64 g(rd());
    std::shuffle(sequence.begin(), sequence.end(), g);

    return std::vector<int>(sequence.begin(), sequence.begin() + numbers);
}
