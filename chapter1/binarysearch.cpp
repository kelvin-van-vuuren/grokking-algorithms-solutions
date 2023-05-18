#include <vector>

template <typename T>
typename std::vector<T>::iterator binarysearch(std::vector<T> &list, T item)
{
    auto low = list.begin();
    auto high = list.end();

    while (low <= high) {
        auto mid = list.begin() + (high - low) / 2;

        if (*mid == item)
            return mid;

        if (*mid > item)
            high = mid - 1;
        else
            low = mid + 1;
    }

    return list.end();
}

int main()
{
    std::vector<int> list {0, 1, 2};
    auto it = binarysearch(list, 1);
    if (it != list.end())
        *it = 2;
}
