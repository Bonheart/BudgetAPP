#include "Income_Expense_Manager.h"

void Income_Expense_Manager::add_new_income() {

    Income income = add_info_about_income();

    incomes.push_back(income);

    income_file.add_income_to_file(income);

    cout << "income added." << endl;
    system("pause");
}

Income Income_Expense_Manager::add_info_about_income() {

    Income income;
    string income_date = "", income_title = "", income_amount = "";

    income.set_incomes_id(income_file.get_last_income_id() + 1);
    income.set_logged_users_id(logged_user_id);

    string data_option_choice;

    cout << "Set income data. Two options: today's date (TD) or manually chosen date (MCD)" << endl;
    cin >> data_option_choice;
    transform(data_option_choice.begin(), data_option_choice.end(), data_option_choice.begin(), :: toupper);

    while(true) {

        if(data_option_choice == "MCD") {

            cout << "You have chosen to enter date manually. Preparing." << endl;
            Sleep(2000);
            system("cls");

            income_date = date.entering_manual_date();
            income.set_date_in_string(income_date);
            Sleep(1500);
            system("cls");

            cout << "Enter income title: " << endl;
            income_title = Helpful_Methods::load_line();
            income.set_incomes_title(income_title);
            system("cls");

            cout << "Enter income. Remember to type amount of income separated with ONE dot." << endl;

            income_amount = Helpful_Methods::load_line();

            while (Helpful_Methods::check_if_income_or_expense_does_have_only_dot_and_digits(income_amount) != true || Helpful_Methods::check_how_many_dots_user_entered(income_amount) != false) {

                system("cls");
                cout << "Try again: " << endl;
                income_amount = Helpful_Methods::load_line();

            }
            income.set_incomes_amount(income_amount);
            break;

        }

        else if (data_option_choice == "TD") {

            cout << "Enter income title: " << endl;
            income_title = Helpful_Methods::load_line();
            income.set_incomes_title(income_title);

            income_date = date.get_current_data_from_PC();
            income.set_date_in_string(income_date);

            cout << "Enter income. Remember to type amount of income separated with ONE dot." << endl;
            income_amount = Helpful_Methods::load_line();

            while (Helpful_Methods::check_if_income_or_expense_does_have_only_dot_and_digits(income_amount) != true || Helpful_Methods::check_how_many_dots_user_entered(income_amount) != false) {

                cout << "Try again: " << endl;
                income_amount = Helpful_Methods::load_line();

            }
            income.set_incomes_amount(income_amount);

            break;
        }

        else{
            cout << "Try again:" << endl;
            cin >> data_option_choice;
            transform(data_option_choice.begin(), data_option_choice.end(), data_option_choice.begin(), :: toupper);
        }
    }

    return income;
}
/*
void Income_Expense_Manager::display_income(int logged_user_id){ // do zrobienia odrebna metoda sprawdzajaca czy id_pobranego z pliku jest rowny zalogowanemu.

    Income income;

    unsigned int i = 0;
    cout << "1" << endl;
    while (i < incomes.size()){
            cout << "250" << endl;
            Sleep(1500);

        cout << incomes[i].get_incomes_title() << endl;
        cout << incomes[i].get_incomes_amount() << endl;
        cout << incomes[i].get_date_in_string() << endl;
        system("pause");

     //   }
        i++;


    }
}
*/

void Income_Expense_Manager::add_new_expense() {

    Expense expense = add_info_about_expense();

    expenses.push_back(expense);

    expense_file.add_expense_to_file(expense);

    cout << "Expense added." << endl;
    system("pause");

}

Expense Income_Expense_Manager::add_info_about_expense() {

    Expense expense;
    string expense_date = "", expense_title = "", expense_amount = "";

    expense.set_expense_id(expense_file.get_last_expense_id() + 1);
    expense.set_logged_user_id(logged_user_id);

    string data_option_choice;

    cout << "Set expense data. Two options: today's date (TD) or manually chosen date (MCD)" << endl;
    cin >> data_option_choice;
    transform(data_option_choice.begin(), data_option_choice.end(), data_option_choice.begin(), :: toupper);

    while(true) {

        if(data_option_choice == "MCD") {

            cout << "You have chosen to enter date manually. Preparing." << endl;
            Sleep(2000);
            system("cls");

            expense_date = date.entering_manual_date();
            expense.set_expense_date(expense_date);
            Sleep(1500);
            system("cls");

            cout << "Enter expense title: " << endl;
            expense_title = Helpful_Methods::load_line();
            expense.set_expense_title(expense_title);
            system("cls");

            cout << "Enter expense. Remember to type amount of expense separated with dots." << endl;

            expense_amount = Helpful_Methods::load_line();

            while (Helpful_Methods::check_if_income_or_expense_does_have_only_dot_and_digits(expense_amount) != true || Helpful_Methods::check_how_many_dots_user_entered(expense_amount) != false) {

                cout << "Try again: " << endl;
                expense_amount = Helpful_Methods::load_line();

            }
            expense.set_expense_amount(expense_amount);
            break;

        }

        else if (data_option_choice == "TD") {

            cout << "Enter expense title: " << endl;
            expense_title = Helpful_Methods::load_line();
            expense.set_expense_title(expense_title);

            expense_date = date.get_current_data_from_PC();
            expense.set_expense_date(expense_date);

            cout << "Enter expense. Remember to type amount of expense separated with dots." << endl;
            expense_amount = Helpful_Methods::load_line();

            while (Helpful_Methods::check_if_income_or_expense_does_have_only_dot_and_digits(expense_amount) != true || Helpful_Methods::check_how_many_dots_user_entered(expense_amount) != false) {

                cout << "Try again: " << endl;
                expense_amount = Helpful_Methods::load_line();

            }
            expense.set_expense_amount(expense_amount);

            break;
        }

        else{
            cout << "Try again:" << endl;
            cin >> data_option_choice;
            transform(data_option_choice.begin(), data_option_choice.end(), data_option_choice.begin(), :: toupper);
        }
    }

    return expense;
}
