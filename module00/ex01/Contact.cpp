#include "main.hpp"

// Default constructor: start with empty strings
Contact::Contact() {
    firstName = "";
    lastName = "";
    nickname = "";
    phoneNumber = "";
    darkestSecret = "";
}

// Setters
void Contact::setFirstName(const std::string &fn) {
    firstName = fn;
}

void Contact::setLastName(const std::string &ln) {
    lastName = ln;
}

void Contact::setNickname(const std::string &nn) {
    nickname = nn;
}

void Contact::setPhoneNumber(const std::string &pn) {
    phoneNumber = pn;
}

void Contact::setDarkestSecret(const std::string &ds) {
    darkestSecret = ds;
}

// Getters
std::string Contact::getFirstName() const {
    return firstName;
}

std::string Contact::getLastName() const {
    return lastName;
}

std::string Contact::getNickname() const {
    return nickname;
}

std::string Contact::getPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
    return darkestSecret;
}

// Check if contact is empty
bool Contact::isEmpty() const {
    return firstName.empty() && lastName.empty() && phoneNumber.empty();
}
