

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include "main.hpp"

class PhoneBook {
private:
    Contact contacts[8];   // fixed-size array (no dynamic allocation allowed)
    int contactCount;      // how many contacts currently stored
    int nextIndex;         // index for next insertion (circular overwrite)

public:
    PhoneBook();   // constructor to initialize counters
    void addContact();     // ask user input, save into Contact
    void searchContacts() const; // display contacts table, ask index to view
    void displayContact(int index) const; // show full info of one contact

    bool isFull() const;   // helper: check if we reached 8
};

#endif
