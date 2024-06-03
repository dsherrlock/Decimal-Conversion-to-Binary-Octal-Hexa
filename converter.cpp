#include <iostream>
using namespace std;

string binary(int input);
string octal(int input);
string hexa(int input);

int main(){
    int decimal;
    string base2, base8, base16;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    base2 = binary(decimal);
    base8 = octal(decimal);
    base16 = hexa(decimal);

    cout << "Binary        |  " << base2 << endl;
    cout << "Octal         |  " << base8 << endl;
    cout << "HexaDecimal   |  " << base16;

    return 0;
}
string binary(int input ){ 
    string result, temp;
    int temp2;

    while (input != 0)
    {
        temp2 = input %2;
        temp = to_string(temp2);
        input = input / 2;
        result = temp + result;
    }
    return result;
}
string octal(int input ){ 
    string result, temp;
    int temp2;

    while (input != 0)
    {
        temp2 = input %8;
        temp = to_string(temp2);
        input = input / 8;
        result = temp + result;
    }
    return result;
}
string hexa(int input ){ 
    string result, temp;
    int temp2;

    while (input != 0)
    {
        temp2 = input %16;

        if (temp2 == 10)
            temp = "A";
        else if (temp2 == 11)
            temp = "B";
        else if (temp2 == 12)
            temp = "C";
        else if (temp2 == 13)
            temp = "D";
        else if (temp2 == 14)
            temp = "E";
        else if (temp2 == 15)
            temp = "F";
        else
            temp = to_string(temp2);

        input = input / 16;
        result = temp + result;
    }
    return result;
}
