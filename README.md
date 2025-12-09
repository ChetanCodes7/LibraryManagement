# Library Management System

## Overview
The Library Management System is a C++ application designed to manage library operations efficiently. It provides features for managing users, books, magazines, and borrowing records. The system ensures data consistency, robust error handling, and user-friendly interactions.

## Features
- **User Management**: Add, update, and delete users with roles (e.g., admin, user).
- **Book and Magazine Management**: Manage library items such as books and magazines.
- **Borrowing Records**: Track borrowing and returning of items.
- **Data Persistence**: Store and retrieve data from files (`users.txt`, `catalog.txt`, etc.).
- **Error Handling**: Graceful handling of invalid inputs and runtime errors.

## Project Structure
```
LibraryManagement/
├── Makefile
├── data/
│   ├── catalog.txt
│   ├── records.txt
│   └── users.txt
├── include/
│   ├── AuthSystem.hpp
│   ├── Book.hpp
│   ├── BorrowRecord.hpp
│   ├── CustomException.hpp
│   ├── Item.hpp
│   ├── Library.hpp
│   ├── Magazine.hpp
│   └── User.hpp
├── src/
│   ├── AuthSystem.cpp
│   ├── Book.cpp
│   ├── BorrowRecord.cpp
│   ├── Item.cpp
│   ├── Library.cpp
│   ├── Magazine.cpp
│   ├── main.cpp
│   └── User.cpp
```

## Getting Started

### Prerequisites
- **Compiler**: A C++ compiler supporting C++11 or later.
- **Make**: Ensure `make` is installed for building the project.

### Build and Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Nurbekprodev/LibraryManagement.git
   ```
2. Navigate to the project directory:
   ```bash
   cd LibraryManagement
   ```
3. Build the project:
   ```bash
   make
   ```
4. Run the application:
   ```bash
   ./library_app
   ```

### File Descriptions
- **`users.txt`**: Stores user data in the format `username,password,role`.
- **`catalog.txt`**: Stores catalog data for books and magazines.
- **`records.txt`**: Stores borrowing records.

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Commit your changes and push to your fork.
4. Submit a pull request.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments
- Inspired by real-world library management systems.
- Developed as part of an Object-Oriented Programming project.

---

Feel free to reach out with any questions or suggestions!