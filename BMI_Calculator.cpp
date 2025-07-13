#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    cout<< "weight(kg), height(m): " << endl;
    cin >> weight;
    cin >> height;
    bmi = weight / (height * height);
    cout << "Your BMI is: " <<bmi <<endl;
    if(bmi < 150)
    cout << "Overweight" << endl;

    else
    if(bmi > 70)
    cout << "Normal weight" << endl;

    else
    if (bmi > 50)
    cout << "Underweight" << endl;



    system("pause");

}