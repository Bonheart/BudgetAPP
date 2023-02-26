#include "Helpful_Methods.h"

string Helpful_Methods::load_line() {

    string input = "";
    cin.sync(); // sync, so nothing is gonna crash in getting data's
    getline(cin,input);
    return input;

}

string Helpful_Methods::change_first_letter_to_big_one(string txt_to_convert) {

    if(!txt_to_convert.empty()) {

        transform(txt_to_convert.begin(), txt_to_convert.end(), txt_to_convert.begin(), :: tolower);
        txt_to_convert[0] = toupper(txt_to_convert[0]); // // first string's array[0](string is seen as letter chain - which means an array) is converted to upper letter
    }

    return txt_to_convert;
}

char Helpful_Methods::select_option_from_main_menu() {

    char choice;

    system("cls");

    cout << "    >>> USERS MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. User Register" << endl;
    cout << "2. User Login" << endl;
    cout << "3. Exit" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";

    cin >> choice;

    return choice;
}

char Helpful_Methods::select_option_from_users_menu() {

    char choice;

    system("cls");

    cout <<" Choose an option below you wish to do " << endl;
    cout <<" --------------------------------------" << endl;
    cout <<" 1. Add income." << endl;
    cout <<" 2. Add expense." << endl;
    cout <<" 3. Display current month's balance." << endl;
    cout <<" 4. Display last month's balance." << endl;
    cout <<" 5. I want to choose balance's period of time myself!" << endl;
    cout <<" 7. Change password." << endl;
    cout <<" 8. Logout" << endl;

    cin >> choice;

    return choice;
}


string Helpful_Methods::int_to_string_conversion(int number) {
    ostringstream ss;
    ss << number;
    string str = ss.str();
    return str;
}

void Helpful_Methods::display_months_list() {

    cout << ">>>>>>>>>>>>>>>>> MONTH LIST <<<<<<<<<<<<<<<<<<: " << endl;
    cout << "1. January" << endl;
    cout << "2. February" << endl;
    cout << "3. March" << endl;
    cout << "4. April" << endl;
    cout << "5. May" << endl;
    cout << "6. June" << endl;
    cout << "7. July" << endl;
    cout << "8. August" << endl;
    cout << "9. September" << endl;
    cout << "10. October" << endl;
    cout << "11. November" << endl;
    cout << "12. December" << endl;
    cout << "Enter month's number: " << endl;

}

bool Helpful_Methods::check_if_text_has_commas(string text) {


    if((text.find(',') != string::npos)) {

        cout << endl;
        cout << "Entered income separated with commas. Please separate with dots." << endl;
        system("pause");
        system("cls");
        cout << "Enter income amount once again: " << endl;
        return true;

    } else
        return false;

}

bool Helpful_Methods::check_if_text_has_dots(string text) {


    if((text.find('.') != string::npos)) {
        return true;
    } else
        return false;

}

int Helpful_Methods::check_how_many_dots_user_entered(string text) {

    int counting = 0;

    for( unsigned int i = 0; i < text.length(); i++) {

        if(text[i] == '.') {

            counting++;

        }

    }
    return counting;
}
