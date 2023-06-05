#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;


int main() {     
    // First task
    int number;
    cout << "Type a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " is even" << "\n";
    }
    else {
        cout << number << " is odd" << "\n";
    }


    // Second task
    int first_num, second_num, third_num;

    cout << "Type 3 numbers: ";
    cin >> first_num >> second_num >> third_num;

    int min = first_num;

    if (second_num < min) {
        min = second_num;
    }
    if (third_num < min) {
        min = third_num;
    }
    cout << "The smallest number is: " << min << "\n";


    //Third task
    int num;
    cout << "Type a number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "the number is zero." "\n";
    }
    else if (num < 0)
    {
        cout << "the number is negative." "\n";
    }
    else if (num > 0)
    {
        cout << "the number is positive." "\n";
    }
    else
    {
        cout << "Wrong symbol, try again!";
    }


    // Fourth task
    int a, b;
    char operation;

    cout << "First number: " "\n";
    cin >> a;

    cout << "Choose the operator (+, -, *, /, %): " "\n";
    cin >> operation;

    cout << "Second number " "\n";
    cin >> b;

    int conseq;

    switch (operation) {
    case '+':
        conseq = a + b;
        break;
    case '-':
        conseq = a - b;
        break;
    case '*':
        conseq = a * b;
        break;
    case '/':
        conseq = a / b;
        break;
    case '%':
        conseq = a % b;
        break;
    default:
        cout << "ERROR! Try again!";
        return 0;
    }

    cout << conseq << endl;


    // Fifth task
    char symbol;
    cout << "Type a symbol: ";
    cin >> symbol;

    if (isdigit(symbol)) {
        cout << "Typed symbol is number." "\n";
    }
    else if (isalpha(symbol)) {
        cout << "Typed symbol is letter." "\n";
    }
    else if (ispunct(symbol)) {
        cout << "Typed symbol is punctuation sign." "\n";
    }
    else {
        cout << "ERROR!" "\n";
    }


    // Sixth task
    int number_sixth, N, M;

    cout << "Type a number: ";
    cin >> number_sixth;

    cout << "Type a range beginning (N): ";
    cin >> N;

    cout << "Type a range ending (M): ";
    cin >> M;

    if (number_sixth >= N && number_sixth <= M) {
        cout << "The number belongs arange" << "\n";
    }
    else {
       cout << "The number not belongs to a rabge " << "\n";
    }


    // Seventh task
     int x, y;
     cout << "Type a multiple X: ";
     cin >> x;
     cout << "Type a dividor Y: ";
     cin >> y;

     if (x % y == 0) {
         cout << x << " is mulltiple of " << y << "\n";
     }
     else {
         cout << x << " is not multiple of " << y << "\n";
     }


     // Eighth task
     int n;
     cout << "Type a number: ";
     cin >> n;

     if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0) {
         cout << n << " is mulltiple to 3, 5 and 7 " << "\n";
     }
     else {
         cout << n << " is not mulltiple to 3, 5 and 7 " << "\n";
     }

     // Nineth task
     int num_mod;
     cout << "Type a number: ";
     cin >> num_mod;

     int module = abs(num_mod);

     if (num_mod >= 0) {
         cout << module << "\n";
     }
     else if (num_mod < 0) {
         cout << module << "\n";
     }

     // Tenth task
     int num_dig;
     cout << "Type a number (max 4 digit): ";
     cin >> num_dig;

     string num_str = to_string(num_dig);
     int count = num_str.length();

     cout << count << "\n";


     // Eleventh task
     int num_palind, remainder;
     int reverse = 0;
     cout << "Type a number: ";
     cin >> num_palind;
     int main_num = num_palind;

     while (num_palind != 0) {
         remainder = num_palind % 10;
         reverse = reverse * 10 + remainder;
         num_palind /= 10;
     }

     if (main_num == reverse)
         cout << main_num << " Number is palindrome! " << "\n";
     else
         cout << main_num << " Number is not a palindrome! " << "\n";

     // Twelveth task
     float x_l;
     float y_l;
     float x_t;
     float y_t;
     float x_r;
     float y_r;

     cout << "Enter x top left corner: ";
     cin >> x_l;
     cout << "Enter y top left corner: " "\n";
     cin >> y_l;
     cout << "Enter x bottom left corner: " "\n";
     cin >> x_r;
     cout << "Enter y bottom left corner: " "\n";
     cin >> y_r;
     cout << "Enter the x of your point: " "\n";
     cin >> x_t;
     cout << "Enter the y of your point: " "\n";
     cin >> y_t;

     bool contains = (y_r <= y_t <= y_l) && (x_l <= x_t <= x_r);
     cout << contains;

     cout << (contains ? "The point is contained on the site" : "no") << "\n";


     // Thirteenth task
     int first, second, third, fourth;
     cout << "Type 4 numbers: ";
     cin >> first >> second >> third >> fourth;

     int max = (first > second) ? ((first > third) ? ((first > fourth) ? first : fourth) : ((third > fourth) ? third : fourth)) : ((second > third) ? ((second > fourth) ? second : fourth) : ((third > fourth) ? third : fourth));

     cout << "Maximum value: " << max;

     return 0;

 }
