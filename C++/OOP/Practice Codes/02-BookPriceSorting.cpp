#include <iostream>
#include <string>
using namespace std;

class Library {
public:
    string book_name;
    float price;

     void add_book() {
        cout << "  • Book Name: ";
        cin >> book_name;
        cout << "  • Book Prize: ";
        cin >> price;
    }
    
    static void print_shelf(Library shelf[], int entries) {
        cout << "----------------------------------------------------------" << endl;
        cout << "|         Book Name          ""         Prize              |" << endl;
        cout << "----------------------------------------------------------" << endl;
        for (int i = 0; i < entries; i++) {
            cout << "          " << shelf[i].book_name << "                        " << shelf[i].price << "         " << endl;
        }
        cout << "----------------------------------------------------------" << endl;
    }
    static void drop_duplicate(Library shelf[], int &entries) {
        
        cout << "\nDropping Duplicates......." << endl;
        for (int i = 0; i < entries-1; i++) {
            for (int j = i + 1; j < entries; j++) {
                if (shelf[i].book_name == shelf[j].book_name) {
                    for (int k = j; k < entries - 1; k++) {
                        shelf[k] = shelf[k + 1];
                        
                    }
                    
                    entries--; 
                    j--; 
                }
            }
        }
    }

    
    static void remove_duplicate(Library shelf[],int entries){
    	bool map[entries];
    	Library result[entries];
        cout << "\nDropping Duplicates......." << endl;
        for (int i = 0; i < entries; i++) {
            for (int j = i + 1; j < entries; j++) {
               if (shelf[i].book_name == shelf[j].book_name){
               	    map[j]=true; 
                }
              }  
            }
            
            int i=0,j=0;
            while(i<entries){
            	if(!map[i]){
            		result[j]=shelf[i];
            		j++;
            	}
            	i++;
            }
            for (int k = j; k < entries; k++) {
                    result[k].book_name = "No_book";
                    result[k].price = 0.0;
           }
        cout << "----------------------------------------------------------" << endl;
        cout << "|         Book Name          ""         Prize              |" << endl;
        cout << "----------------------------------------------------------" << endl;
        for (int i = 0; i < entries; i++) {
            cout << "          " << result[i].book_name << "                        " << result[i].price << "         " << endl;
        }
        cout << "----------------------------------------------------------" << endl;  
            
    }

    static void sort_books(Library shelf[], int entries) {
        for (int i = 0; i < entries - 1; i++) {
              for (int j = i + 1; j < entries; j++) {
                
                if (shelf[i].price < shelf[j].price) {
             
                    Library temp = shelf[i];
                    shelf[i] = shelf[j];
                    shelf[j] = temp;
                }
            }
        }
    }

    

    static void sort_in_range(Library shelf[], int target, int entries) {
        int count = 0;
        
        cout << "Books Under Provided Prize:" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "|         Book Name          ""         Prize              |" << endl;
        cout << "----------------------------------------------------------" << endl;
        
        for (int i = 0; i < entries; i++) {
            if (shelf[i].price < target){ 
                cout << "        " << shelf[i].book_name << "                  ""          " << shelf[i].price << "             " << endl;
                count++;
            }
        }
        cout << "----------------------------------------------------------" << endl;
        
        cout << "\n\nNumber of Books Available Under Given Prize Tag: [ " << count <<" ]"<< endl;

        count = 0; //dbg
                                    
        cout << "Books Above Provided Prize:" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "|         Book Name          ""         Prize              |" << endl;
        cout << "----------------------------------------------------------" << endl;
        for (int i = 0; i < entries; i++) {
            if (shelf[i].price >= target){
                cout << "        " << shelf[i].book_name << "                           " << shelf[i].price << "             " << endl;
                count++;
            }
        }
        cout << "----------------------------------------------------------" << endl;
        cout << "\n\nNumber of Books Available Above Given Prize Tag: [ " << count <<" ]"<< endl;
     }
    };


int main() {
    Library shelf[10];
    int entries, choice;

    cout << "Enter Number of Entries: ";
    cin >> entries;

    for (int i = 0; i < entries; i++) {
        cout<<"Enter Details of Book - "<<i+1<<" : "<<endl;
        shelf[i].add_book();
    }

    do {
       cout << "\nOperation Menu:" << endl;
        cout << "1. Sort Books Around a Prize" << endl;
        cout << "2. Drop Duplicate ( Optimized ) " << endl;
        cout << "3. Display" << endl;       
        cout <<"4.  Sort By Prize Decending Order"<<endl;
        cout << "5. Remove Duplicate ( Unoptimized ) " << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int target;
                cout<<"Enter Price Around you Want to Sort :";
                cin >>target;
                Library :: sort_in_range(shelf, target,entries);
                
                break;
            }
            case 2: {
                Library :: drop_duplicate(shelf, entries);
                break;
            }
            case 3: {
                Library :: print_shelf(shelf, entries);
                break;
            }
            case 4:
                 Library :: sort_books(shelf,entries);
                 cout << "Books sorted by price." << endl;                 
                 break;
            case 5:
            	 Library :: remove_duplicate(shelf, entries);
            break;           
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
