#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  string soda;
  double price;
  double change;
  double money;

  char choice;

  cout << "Vending Machine Menu: ";
  cout << "\n" << endl;
  
  cout << "|---------------------------------------------|-----|" << endl;
  cout << "|" << left << setw(25) << "Soda" << right << setw(21) << "|" <<"Price" << "|" << endl;
  cout << "|Sprite Lemon Lime Soda Pop, 2 Liter Bottle" << right << setw(9) << "|$2.68" << "|" << endl;
  cout << "|Fanta Orange Fruit Soda Pop, 2 Liter Bottle" << right << setw(8) << "|$1.78" << "|" << endl;
  cout << "|Coca-Cola Soda Pop, 2 Liter Bottle" << right << setw(17) << "|$2.68" << "|" << endl;
  cout << "|Dr Pepper Soda Pop, 2 L, Bottle" << right << setw(20) << "|$1.98" << "|" << endl;
  cout << "|---------------------------------------------|-----|" << endl;

  cout << "\n\n" << endl;
  
  cout << "Enter the soda name (sprite=s, fanta=f, coca-cola=c, Dr_pepper=d): ";
  cin >> choice;

  cout << "Input the money: $";
  cin >> money;

  switch (choice) {
    case 's':
      cout << "Your Order Sprite Lemon Lime Soda Pop." << endl;
      price = 2.68;
      break;
    case 'f':
      cout << "Your Order Fanta Orange Fruit Soda Pop." << endl;
      price = 1.78;
      break;
    case 'c':
      cout << "Your Order Coca-Cola Soda Pop." << endl;
      price = 2.68;
      break;
    case 'd':
      cout << "Your OrderDr Pepper Soda Pop." << endl;
      price = 1.98;
      break;
    default:
      cout << "The soda you order is out of sale." << endl;
      price = 0;
      break; 
    }

  change = money - price;
  cout << fixed << setprecision(2);
  cout << "Your Exchange: $" << change << endl;
    return 0;
}
