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
    int remainder;

    do {
        remainder = input %2;
        temp = to_string(remainder);
        input = input / 2;
        result = temp + result;
    } while (input != 0);

    return result;
}
string octal(int input ){ 
    string result, temp;
    int remainder;

    do {
        remainder = input %8;
        temp = to_string(remainder);
        input = input / 8;
        result = temp + result;
    } while (input != 0);

    return result;
}
string hexa(int input ){ 
    string result, temp;
    int remainder;

    do {
        remainder = input %16;

        if (remainder == 10)
            temp = "A";
        else if (remainder == 11)
            temp = "B";
        else if (remainder == 12)
            temp = "C";
        else if (remainder == 13)
            temp = "D";
        else if (remainder == 14)
            temp = "E";
        else if (remainder == 15)
            temp = "F";
        else
            temp = to_string(remainder);

        input = input / 16;
        result = temp + result;
    } while (input != 0);
    
    return result;
}
