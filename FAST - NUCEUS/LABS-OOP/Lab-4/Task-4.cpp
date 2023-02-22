#include <iostream>
#include <string>

class Book {
    public:
    std::string author_name, title_name, publisher_name;
    double price;
    int stock;

  public:
    Book() {}
    Book(std::string author, std::string title, std::string publisher, double book_price, int book_stock)
        : author_name(author), title_name(title), publisher_name(publisher), price(book_price), stock(book_stock) {}

    void showDetails() {
        std::cout << "Title: " << title_name << std::endl;
        std::cout << "Author: " << author_name << std::endl;
        std::cout << "Publisher: " << publisher_name << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << "Stock: " << stock << std::endl;
    }

    int checkAvailability(int req_copies) {
        if (stock >= req_copies) {
            double cost = req_copies * price;
            std::cout << "Total cost of " << req_copies << " copies: " << cost<<"Rs" << std::endl;
            stock -= req_copies;
            return 1;
        } else {
            std::cout << "Required copies not in stock" << std::endl;
            return 0;
        }
    }
};

int main() {
    int num_books;
    std::cout << "Enter number of books: ";
    std::cin >> num_books;

    Book books[num_books];

    std::string author, title, publisher;
    double price;
    int stock;

    for (int i = 0; i < num_books; i++) {
        std::cin.ignore(); // ignore the newline character
        std::cout << "\nEnter details for book " << i+1 << ":" << std::endl;
        std::cout << "Enter author name: ";
        getline(std::cin, author);
        std::cout << "Enter title name: ";
        getline(std::cin, title);
        std::cout << "Enter publisher name: ";
        getline(std::cin, publisher);
        std::cout << "Enter price: ";
        std::cin >> price;
        std::cout << "Enter stock: ";
        std::cin >> stock;

        books[i] = Book(author, title, publisher, price, stock);
    }

    std::string search_title, search_author;
    int req_copies;

    std::cout << "\nEnter book details to search:" << std::endl;
    std::cout << "Enter title name: ";
    std::cin.ignore(); // ignore the newline character
    getline(std::cin, search_title);
    std::cout << "Enter author name: ";
    getline(std::cin, search_author);

    int book_found = 0;
    for (int i = 0; i < num_books; i++) {
        if (books[i].title_name == search_title && books[i].author_name == search_author) {
            book_found = 1;
            books[i].showDetails();
            std::cout << "Enter number of copies required: ";
            std::cin >> req_copies;
            int available = books[i].checkAvailability(req_copies);
            if (!available) {
                break;
            }
        }
    }

    if (!book_found) {
        std::cout << "Book not found" << std::endl;
    }

    return 0;
}
