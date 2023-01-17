#include <iostream>
#include "rectangle.h"

int main() {
    using namespace std;
    cout<<(new rectangle(5.3,6.7))->perimeter();
    return 0;
}
