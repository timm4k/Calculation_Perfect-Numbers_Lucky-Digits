#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << "Result: " << power(base, exponent) << endl;

    return 0;
}

// task2
#include <iostream>
using namespace std;

int sumInRange(int a, int b) {
    if (a > b) swap(a, b);
    if (a == b) return a;
    return a + sumInRange(a + 1, b);
}

int main() {
    int num1, num2;
    cout << "Enter two nums: ";
    cin >> num1 >> num2;

    cout << "Sum in range: " << sumInRange(num1, num2) << endl;

    return 0;
}

// task3
#include <iostream>
using namespace std;

int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum;
}

void findPerfectNums(int start, int end) {
    for (int i = start; i <= end; ++i) {
        if (sumOfDivisors(i) == i) {
            cout << i << " is a perfect num." << endl;
        }
    }
}

int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    findPerfectNums(start, end);

    return 0;
}


// task4
#include <iostream>
using namespace std;

void printCard(int rank, int suit) {
    string ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
    string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    cout << "Your card is: " << ranks[rank] << " of " << suits[suit] << endl;
}

int main() {
    int rank, suit;

    cout << "Enter card rank (0 for 2, 12 for ace): ";
    cin >> rank;

    cout << "Enter card suit (0 for hearts, 3 for spades): ";
    cin >> suit;

    printCard(rank, suit);

    return 0;
}

// task5
#include <iostream>
using namespace std;

bool isLucky(int num) {
    int digits[6];

    for (int i = 5; i >= 0; --i) {
        digits[i] = num % 10;
        num /= 10;
    }

    int sumFirst = digits[0] + digits[1] + digits[2];
    int sumSecond = digits[3] + digits[4] + digits[5];

    return sumFirst == sumSecond;
}

int main() {
    int number;

    cout << "Enter a six-digit num: ";
    cin >> number;

    if (isLucky(number)) {
        cout << number << " is a lucky num" << endl;
    }
    else {
        cout << number << " is not a lucky num" << endl;
    }

    return 0;
}
