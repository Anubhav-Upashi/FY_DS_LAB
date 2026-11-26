#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){

    cout << "Max of 6 and 2 is: " << myMax<int>(6, 2) << endl;
    cout << "Max of 7.8 and 7.4 is :" << myMax<double>(7.8, 7.4) << endl;
    cout << "Max of 'd' and 'a' is: " << myMax<char>('d', 'a') << endl;
    
    return 0;
}
