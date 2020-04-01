#include <iostream>
#include "library1.h"
#include "module1.h"
#include "sy.h"

using namespace std;

int main()
{
    lib1_print();
    module1_print();
    sy_print();
    cout << "main" << endl;
    return 0;
    
}