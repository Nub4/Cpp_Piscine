#include "iter.hpp"

int main(void)
{
    char str[] = "Hello world!";
    iter(str, strlen(str), print);

    int arr[] = {1, 3, 5, 7, 9};
    iter(arr, sizeof(arr) / 4, print);

    std::string s = "Nice day tonight";
    iter(&s, 1, print);

    return 0;
}