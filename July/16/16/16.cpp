#include <iostream>
#include <regex>
#include <string>
#include <stdexcept>

using namespace std;

class UserLogin {
private:
    string username;
    string password;

    bool isStrongPassword(const string& password) {
        // Пароль должен содержать хотя бы одну цифру и иметь длину не менее 6 символов
        const regex pattern(R"(^(?=.*\d).{6,}$)");
        return regex_match(password, pattern);
    }

public:
    UserLogin(const string& username, const string& password): username(username), password(password) {}

    void login() {
        string inputUsername, inputPassword;
        cout << "Enter login: ";
        cin >> inputUsername;

        cout << "Ebter password: ";
        cin >> inputPassword;

        if (inputUsername == username && inputPassword == password) {
            cout << "Successful login!\n";
        }
        else {
            cout << "Login failed. Check login and password.\n";
        }
    }
};

int main() {
    string username, password, email;
    cout << "New user register:\n";

    while (true) {
        cout << "Enter your login (at least 4 characters): ";
        cin >> username;
        if (username.length() >= 4) {
            break;
        }
        cout << "Login is too short. Try again.\n";
    }

    while (true) {
        cout << "Enter password (at least 6 characters, must contain at least one number): ";
        cin >> password;
        if (password.length() >= 6 && std::any_of(password.begin(), password.end(), ::isdigit)) {
            break;
        }
        cout << "The password is too weak.Try again.\n";
    }


    UserLogin newUser(username, password);
    cout << "\nlogin in your account\n";
    newUser.login();

    return 0;
}

