#ifndef HELPFUL_METHODS_H
#define HELPFUL_METHODS_H

#include <iostream>
#include <sstream>
#include <algorithm>

#include "Income.h"
#include "Date.h"

using namespace std;

class Helpful_Methods{

public:

    static string load_line();
    static string change_first_letter_to_big_one(string text_to_convert);
    static char select_option_from_main_menu();
    static char select_option_from_users_menu();
    static string int_to_string_conversion(int number);
    static void display_months_list();
    static int date_without_dashes_in_int(string text);
    static bool check_how_many_dots_user_entered(string text);
    static bool check_if_income_or_expense_does_have_only_dot_and_digits( string str);
    static int load_int();

};



#endif // HELPFUL_METHODS_H
