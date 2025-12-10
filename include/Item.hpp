#ifndef ITEM_HPP                     // Header guard start: prevents double inclusion
#define ITEM_HPP

#include <string>                    // For std::string
#include <iostream>                  // For std::cout (used in derived classes)
using namespace std;                 // Allows using standard library names directly

class Item {
protected:
    int id;                          // Unique ID of the item
    string title;                    // Title or name of the item
    int availableCount;              // Number of items currently available

public:
    Item(int id, string title, int count); // Constructor to initialize fields
    virtual ~Item() {}                      // Virtual destructor for safe polymorphic deletion

    // Getters (read-only access)
    int getId() const { return id; }              // Returns item ID
    string getTitle() const { return title; }     // Returns item title
    int getAvailableCount() const { return availableCount; } // Returns available count

    // Setter
    void setAvailableCount(int count) { availableCount = count; } // Updates available count

    // Pure virtual functions: must be implemented in derived classes
    virtual string serialize() const = 0;  // Convert item to string form
    virtual void display() const = 0;      // Display item details
};

#endif                                   // End of header guard
