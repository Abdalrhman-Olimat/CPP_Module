#include "main.hpp"

int main() {
    PhoneBook pb;
    std::string command;

    std::cout << "📞 Welcome to My Awesome PhoneBook!\n";
    std::cout << "Commands: ADD | SEARCH | EXIT\n";

    while (true) {
        std::cout << "\n> ";
        if (!std::getline(std::cin, command))
            break;
        if (command == "ADD") {
            pb.addContact();
        } else if (command == "SEARCH") {
            pb.searchContacts();
        } else if (command == "EXIT") {
            std::cout << "👋 Goodbye!\n";
            break;
        } else if (!command.empty()) {
            std::cout << "❌ Unknown command. Try again.\n";
        }
    }
    return 0;
}

