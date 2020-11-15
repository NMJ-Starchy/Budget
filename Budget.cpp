# include <iostream>

using namespace std;

int get_subscriptions(int sub) {

    // Prompt user for subscription expenses
    cout << "How much do you spend on monthly subscription services?\n ";
    cout << "Enter Amount: ";
    cin >> sub;

    return sub;

}

int get_phone_bill(int phone) {

    // Prompt user for phone bill
    cout << "How much do you pay for your phone services?\n ";
    cout << "Enter Amount: ";
    cin >> phone;

    return phone;

}

int get_groceries(int grocery) {

    // Prompt user for grocery expenses
    cout << "How much do you spend on groceries every month?\n ";
    cout << "Enter Amount: ";
    cin >> grocery;

    return grocery;

}

int get_food(int food) {

    // Prompt user for food expenses
    cout << "How much do you spend on going out to eat every month?\n ";
    cout << "Enter Amount: ";
    cin >> food;

    return food;

}

int get_rent(int rent) {

    // Prompt user for rent
    cout << "How much is your monthly rent payment?\n ";
    cout << "Enter Amount: ";
    cin >> rent;

    return rent;

}

int get_income(int income) {

    // Prompt user for income
    cout << "What is your monthly income?\n ";
    cout << "Enter Amount: ";
    cin >> income;

    return income;

}

int calc_budget(int income, int rent, int grocery, int food, int phone, int sub) {

    cout << "Calculate Budget\n";

    // adds all expenses together
    int total_expense = (rent + grocery + food + phone + sub);

    int total_cash = income - total_expense;

    cout << "Total cash after expenses: $" << total_cash;

}

int run_budget(int income, int rent, int grocery, int food, int phone, int sub) {

    cout << "running budget program...\n";

    get_income(income);
    get_rent(rent);
    get_groceries(grocery);
    get_food(food);
    get_phone_bill(phone);
    get_subscriptions(sub);

    calc_budget(income, rent, grocery, food, phone, sub);

}

int main() {

    // Initialize variables 
    int income = 0;
    int rent = 0;
    int grocery = 0;
    int food = 0;
    int phone = 0;
    int sub = 0;

    cout << "This program will help calculate your monthly budget\n";

    // Run the calculator
    run_budget(income, rent, grocery, food, phone, sub);


}