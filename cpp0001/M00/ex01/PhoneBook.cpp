#include "PhoneBook.hpp"

// Constructor
PhoneBook::PhoneBook() {
    contactCount = 0;
    nextIndex = 0;
}

// Format field for SEARCH table
static std::string formatField(const std::string &str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

// Validation helpers
static bool isDigitsOnly(const std::string &s) {
    if (s.empty()) return false;
    for (size_t i = 0; i < s.size(); i++) {
        if (!isdigit(s[i]))
            return false;
    }
    return true;
}

static bool isPrintable(const std::string &s) {
    for (size_t i = 0; i < s.size(); i++) {
        if (!isprint(s[i]))
            return false;
    }
    return true;
}

// Prompt user for input
static std::string promptField(const std::string &fieldName, bool digitsOnly = false) {
    std::string input;
    bool valid = false;

    while (!valid) {
        std::cout << fieldName << ": ";
        std::getline(std::cin, input);

        if (input.empty()) {
            std::cout << "❌ " << fieldName << " cannot be empty. Try again.\n";
            continue;
        }

        if (!isPrintable(input)) {
            std::cout << "❌ Invalid characters detected. Try again.\n";
            continue;
        }

        if (digitsOnly && !isDigitsOnly(input)) {
            std::cout << "❌ " << fieldName << " must contain only digits. Try again.\n";
            continue;
        }

        valid = true;
    }
    return input;
}

// Add contact
void PhoneBook::addContact() {
    Contact newContact;

    newContact.setFirstName(promptField("First name"));
    newContact.setLastName(promptField("Last name"));
    newContact.setNickname(promptField("Nickname"));
    newContact.setPhoneNumber(promptField("Phone number", true));
    newContact.setDarkestSecret(promptField("Darkest secret"));

    contacts[nextIndex] = newContact;

    if (contactCount < 8)
        contactCount++;
    nextIndex = (nextIndex + 1) % 8;

    std::cout << "✅ Contact added successfully!\n";
}

// Display one contact
void PhoneBook::displayContact(int index) const {
    int realIndex = index - 1;
    if (realIndex < 0 || realIndex >= contactCount) {
        std::cout << "❌ Invalid index!\n";
        return;
    }

    const Contact &c = contacts[realIndex];
    std::cout << "First name: " << c.getFirstName() << "\n";
    std::cout << "Last name: " << c.getLastName() << "\n";
    std::cout << "Nickname: " << c.getNickname() << "\n";
    std::cout << "Phone number: " << c.getPhoneNumber() << "\n";
    std::cout << "Darkest secret: " << c.getDarkestSecret() << "\n";
}

// Search contacts
void PhoneBook::searchContacts() const {
    if (contactCount == 0) {
        std::cout << "📂 PhoneBook is empty!\n";
        return;
    }

    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < contactCount; i++) { std::cout << "|"
        << std::setw(10) << (i + 1) << "|"
                  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
                  << std::setw(10) << formatField(contacts[i].getNickname()) << "|" <<  std::endl;
    }
    std::cout << "|___________________________________________|" << std::endl;
    std::cout << "Enter index (1-" << contactCount << ") to view details: ";
    std::string input;
    std::getline(std::cin, input);

    if (isDigitsOnly(input)) {
        int idx = std::atoi(input.c_str());
        displayContact(idx);
    } else {
        std::cout << "❌ Invalid input!\n";
    }
}

// Check if full
bool PhoneBook::isFull() const {
    return contactCount == 8;
}
