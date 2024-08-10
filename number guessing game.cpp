[9:36 PM, 8/10/2024] .: #include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess;
    int chances = 0;
    srand(time(0)); 
    randomNumber = rand() % 100 + 1; 
    cout << "\t\t\tWelcome to Guess the Number Game\n\n";

    do
    {
        cout << "Enter your guess between 1 and 100: ";
        cin >> guess;
        chances++;

        if (guess > randomNumber){
            cout << "The "<<guess<<" is Too high!\n\n";
        }
        else if (guess < randomNumber){
            cout << "The "<<guess<<" is Too low!\n\n";
        }
        else{
            cout << "\nVoila! You got the right guess "<<guess <<"in "<< chances << " tries!\n";
        }
    } 
        while (guess != randomNumber);

	return 0;
}
[9:36 PM, 8/10/2024] .: Simple Calculator:
# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}