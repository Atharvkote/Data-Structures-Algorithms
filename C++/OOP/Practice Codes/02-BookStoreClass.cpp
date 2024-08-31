#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

template <typename TO, typename T1, typename T2, typename T3, typename T4, typename T5>
void print_row(std::ostream& os, TO const& to, T1 const& t1, T2 const& t2, T3 const& t3, T4 const& t4, T5 const& t5) {
    os << "| " << std::setw(4) << to 
       << " | " << std::setw(10) << t1 
       << " | " << std::setw(10) << t2 
       << " | " << std::setw(15) << t3 
       << " | " << std::setw(7) << std::fixed << std::setprecision(2) << t4 
       << " | " << std::setw(7) << t5 
       << " |\n";
}

void print_border(std::ostream& os) {
    os << "+------+------------+------------+---------------+---------+---------+\n";
}

class BookShop {
public:
    string book_name;
    string book_author;
    string book_publisher;
    int book_price;
    int book_copies;

    BookShop() {
        // un-parameterized Constructor   
    }

    void add_book() {
        cout << "\t● Enter Book Name: ";
        cin.ignore();
        getline(cin, book_name);
        cout << "\t● Enter Book Author: ";
        getline(cin, book_author);
        cout << "\t● Enter Book Publisher: ";
        getline(cin, book_publisher);
        cout << "\t● Enter Book Price: ";
        cin >> book_price;
        cout << "\t● Enter Book Copies: ";
        cin >> book_copies;
    }

    void display_book(int indx) {
        print_row(cout, indx, book_name, book_author, book_publisher, book_price, book_copies);
    }

    bool check_availablilty(int& required_copies) {
        return required_copies <= book_copies;
    }

    static int search_book(BookShop lot[], string& book_title, string& author_name, int& lot_size) {
        for (int i = 0; i < lot_size; i++) {
            if (lot[i].book_author == author_name && lot[i].book_name == book_title) {
                return i;
            }
        }
        return -1;
    }

    static void order_book(BookShop lot[], int lot_size) {
        string book_title, author_name;
        int required_copies;

        cout << " 》Enter Book Name: ";
        getline(cin, book_title);
        cout << " 》Enter Book Author: ";
        getline(cin, author_name);

        int indx = BookShop::search_book(lot, book_title, author_name, lot_size);

        if (indx != -1) {
            cout << " 》Enter Book Copies Required: ";
            cin >> required_copies;

            if (lot[indx].check_availablilty(required_copies)) {
                cout << " [ Order Successfully Placed !!! ]" << endl;
                lot[indx].book_copies -= required_copies;

                cout << "[ ORDER Details ]" << endl;
                print_border(cout);
                print_row(cout, "Sr.no", "Name", "Author", "Publisher", "Price", "Copies Left");
                print_border(cout);
                lot[indx].display_book(indx);
                print_border(cout);
            }
            else {
                cout << "OUT OF STOCK!!!" << endl;
            }

        }
        else {
            cout << "BOOK UNAVAILABLE IN SHOP!!!" << endl;
        }
    }
};

int main() {
    BookShop lot[5];
    int lot_size = 0, choice;

    do {
        cout << "\nOperation Menu:" << endl;
        cout << "1. ADD Books" << endl;
        cout << "2. Order Book" << endl;
        cout << "3. Display Books" << endl;
        cout << "4. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Enter Number of BOOKS (Max 5): ";
            cin >> lot_size;

            if (lot_size > 5) {
                cout << "You can only add up to 5 books." << endl;
                lot_size = 5;
            }

            for (int i = 0; i < lot_size; i++) {
                cout << "\n 》Enter Details of Book - " << i + 1 << " : " << endl;
                lot[i].add_book();
                cout<<"\n";
            }
            break;
        }
        case 2: {
            if (lot_size == 0) {
                cout << "No books available. Please add books first." << endl;
            }
            else {
                BookShop :: order_book(lot, lot_size);
            }
            break;
        }
        case 3: {
            if (lot_size == 0) {
                cout << "No books available." << endl;
            }
            else {
                print_border(cout);
                print_row(cout, "No", "Name", "Author", "Publisher", "Price", "Copies");
                print_border(cout);
                for (int i = 0; i < lot_size; i++) {
                    lot[i].display_book(i + 1);
                }
                print_border(cout);
            }
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
