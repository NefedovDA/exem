#include <iostream>
#include <vector>
#include "deque.h"

using namespace std;

int main() {
    //const const int a = 1;
    deque<const int> d;
    d.push_front(0);
    for (int i = 1; i < 10; ++i) {
        d.push_front(i);
        cout << *d.cfront() << " ";
        cout << *--d.cback() << " ";
    }

    cout << endl;

    for(auto i = d.front(); i != d.back(); ++i) {
        cout << *i << " ";
    }

    d.insert(d.front() + 2, 0);

    cout << endl;

    for(auto i = d.front(); i != d.back(); ++i) {
        cout << *i << " ";
    }

    d.erase(d.front() + 9);

    cout << endl;

    auto it = d.front() + 9;
    *it;
    for(auto i = d.front(); i != d.back(); ++i) {
        cout << *i << " ";
    }

    return 0;
}