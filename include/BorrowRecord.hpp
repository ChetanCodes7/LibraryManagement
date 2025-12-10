#ifndef BORROW_RECORD_HPP               // Header guard start: prevents double inclusion
#define BORROW_RECORD_HPP

#include <string>                       // Include string library
using namespace std;                    // Use standard namespace (allows using string directly)

class BorrowRecord {
public:
    int itemId;                         // Stores the ID of the borrowed item
    string memberName;                  // Stores the name of the member who borrowed it

    BorrowRecord(int id, string member); // Constructor to initialize itemId and memberName
    string serialize() const;            // Converts the record into a single string format
};

#endif                                    // Header guard end

