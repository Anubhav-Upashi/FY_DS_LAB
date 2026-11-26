#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){

    cout << myMax<int>(2, 6) << endl;
    cout << myMax<double>(4.7, 5.5) << endl;
    cout << myMax<char>('d', 'a');
    return 0;
}
