#include <iostream>
#include <string>

using namespace std;

int main() {
    string lower{"zhihu"};
    string same = move(lower);

    // After the move operation, the original 
    // string is set empty
    cout << lower.empty() << endl;

    cout << "lowers: " << lower << endl;
    cout << "same: " << same << endl;
    return 0;
}