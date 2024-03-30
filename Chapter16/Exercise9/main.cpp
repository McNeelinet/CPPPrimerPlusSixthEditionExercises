#include <iostream>
#include <vector>
#include <list>
#include <algorithm>


const std::size_t SIZE = 10000000;

int main()
{
    using std::vector;
    using std::list;
    using std::cout;
    using std::endl;

    srand(0);
    vector<int> vi0(SIZE);
    for (int& value : vi0)
        value = rand();

    vector<int> vi(vi0.begin(), vi0.end());
    list<int> li(vi0.begin(), vi0.end());

    cout << "Vector sort:\n";
    clock_t start_vi_sort = clock();
    std::sort(vi.begin(), vi.end());
    clock_t end_vi_sort = clock();
    cout << (double)(end_vi_sort - start_vi_sort) / CLOCKS_PER_SEC
         << " seconds" << endl;

    cout << "List sort:\n";
    clock_t start_li_sort = clock();
    li.sort();
    clock_t end_li_sort = clock();
    cout << (double)(end_li_sort - start_li_sort) / CLOCKS_PER_SEC
         << " seconds" << endl;

    li.assign(vi.begin(), vi.end());
    cout << "Copy list to vector, sort, copy vector to list:\n";
    clock_t start_combined_sort = clock();
    vi.assign(li.begin(), li.end());
    std::sort(vi.begin(), vi.end());
    li.assign(vi.begin(), vi.end());
    clock_t end_combined_sort = clock();
    cout << (double)(end_combined_sort - start_combined_sort) / CLOCKS_PER_SEC
         << " seconds" << endl;

    return 0;
}
