#include <iostream>

using namespace std;

int main()
{
    double sum = 0;
    double mark;
    double average;
    int counter = 0;

    for(int k =0; k < 5; k++){
        cout << "Enter the values " << (k + 1) << ": ";
        cin >> mark;
        sum += mark;
    }
    average = sum / 5.0;
    cout << "The average is: " << average << endl;
    return 0;
}
