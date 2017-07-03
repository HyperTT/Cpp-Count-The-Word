#include <iostream>
#include "mycount.h"
using namespace std;

int main()
{
    cout << count_the_word("raj.txt", "the") << endl;
    cout << count_the_word("raj.txt", "is") << endl;
    cout << count_the_word("raj.txt", "Romeo") << endl;
    cout << count_the_word("raj.txt", "case") << endl;
    cout << count_the_word("clock.txt", "clock") << endl;
    cout << count_the_word("clock.txt", "synchronization") << endl;

    return 0;
}
