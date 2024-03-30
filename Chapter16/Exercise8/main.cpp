#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>


int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    std::string temp;

    cout << "Matt, enter your friends or <stop>:" << endl;
    std::vector<std::string> matt_list;
    while (std::getline(cin, temp) && temp != "stop")
        matt_list.push_back(temp);
    std::sort(matt_list.begin(), matt_list.end());

    cout << "Matt, here are your friends:" << endl;
    std::copy(matt_list.begin(), matt_list.end(),
              std::ostream_iterator<std::string>(cout, "\n"));

    cout << "Pat, enter your friends or <stop>:" << endl;
    std::vector<std::string> pat_list;
    while (std::getline(cin, temp) && temp != "stop")
        pat_list.push_back(temp);
    std::sort(pat_list.begin(), pat_list.end());

    cout << "Pat, here are your friends:" << endl;
    std::copy(pat_list.begin(), pat_list.end(),
              std::ostream_iterator<std::string>(cout, "\n"));

    std::vector<std::string> total_list;
    total_list.insert(total_list.begin(), matt_list.begin(), matt_list.end());
    total_list.insert(total_list.begin(), pat_list.begin(), pat_list.end());

    std::sort(total_list.begin(), total_list.end());
    total_list.erase(
        std::unique(total_list.begin(), total_list.end()),
        total_list.end());

    cout << "Here is your total list of friends:" << endl;
    std::copy(total_list.begin(), total_list.end(),
              std::ostream_iterator<std::string>(cout, "\n"));


    return 0;
}
