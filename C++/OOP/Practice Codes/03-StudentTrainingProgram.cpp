#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int roll_number;
    string _class;
    float feedback;

public:
    // Default constructor
    Student() {
        name = "No Record";
        roll_number = 0;
        _class = "No Class Allotted";
        feedback = 0.0;
    }

    float getFeedBack() {
        int Feedback[5];
        cout << "    1. Did You understand the Purpose of the Training Program at start of the event?\n  \t• ( Press 1 [ YES ]  Press  0 [NO] ) : ";
        cin >> Feedback[0];
        cout << "    2. Did the Training Meet your Expectations?\n  \t• ( Press 1 [ For 8/10 or more ]  Press  0 [ 7/10 or less] ) :  ";
        cin >> Feedback[1];
        cout << "    3. Overall, how would you rate the training instructor?\n  \t• ( Press 1 [ YES ]  Press  0 [NO] ) :   ";
        cin >> Feedback[2];
        cout << "    4. Was the Training program well-organized and easy to follow?\n  \t• ( Press 1 [ YES ]  Press  0 [NO] ) :  ";
        cin >> Feedback[3];
        cout << "    5. Do you feel you were given enough time and resources to complete the training?\n  \t• ( Press 1 [ YES ]  Press  0 [NO] ) :  ";
        cin >> Feedback[4];

        int count = 0;
        for (int i = 0; i < 5; i++) {
            if (Feedback[i] == 1) {
                count++;
            }
        }

        return (count / 5.0) * 100;
    }

    // Parameterized constructor
    Student(string _name, int _roll_number, string __class) {
        name = _name;
        roll_number = _roll_number;
        _class = __class;
        feedback = getFeedBack();
    }
    
    static void print_row_header(ostream& os, const string& to, const string& t1, const string& t2, const string& t3, string t4, const string& t5) {
        os << "| " << setw(4) << to
           << " | " << setw(10) << t1
           << " | " << setw(10) << t2
           << " | " << setw(15) << t3
           << " | " << setw(7) << t4
           << " | " << setw(7) << t5
           << " |\n";
    }


    
    static void print_row(ostream& os, const string& to, const string& t1, const string& t2, const string& t3, float t4, const string& t5) {
        os << "| " << setw(4) << to
           << " | " << setw(10) << t1
           << " | " << setw(10) << t2
           << " | " << setw(15) << t3
           << " | " << setw(7) << fixed << setprecision(2) << t4
           << " | " << setw(7) << t5
           << " |\n";
    }

    
    static void print_border(ostream& os) {
        os << "+------+------------+------------+---------------+---------+-----------+\n";
    }

    
    static void print(Student division[], int class_strength) {
        print_border(cout);
        print_row_header(cout, "No.", "Name", "Roll No.", "Class", "Rating", "Status");
        print_border(cout);

        for (int i = 0; i < class_strength; i++) {
            string status = division[i].feedback > 60 ? "+ve" : "-ve";
            print_row(cout, to_string(i + 1), division[i].name, to_string(division[i].roll_number), division[i]._class, division[i].feedback, status);
        }

        print_border(cout);
    }

    
    static bool isSorted(Student division[], int class_strength) {
        for (int j = 0; j < class_strength - 1; j++) {
            if (!(division[j].roll_number < division[j + 1].roll_number)) {
                return false;
            }
        }
        return true;
    }

    static void selectionSort(Student division[], int class_strength) {
        for (int i = 0; i < class_strength - 1; i++) {
            for (int j = i + 1; j < class_strength; j++) {
                if (division[i].roll_number > division[j].roll_number) {
                    Student temp = division[i];
                    division[i] = division[j];
                    division[j] = temp;
                }
            }
        }
    }

   
    static float feedbackSummary(Student division[], int class_strength) {
        float total = 0;
        for (int i = 0; i < class_strength; i++) {
            total += division[i].feedback;
        }

        return total / class_strength;
    }

    
    static int linearSearch(Student division[], int class_strength, int target,string target_class) {
        for (int i = 0; i < class_strength; i++) {
            if (division[i].roll_number == target && division[i]._class == target_class)  {
                return i;
            }
        }
        return -1;
    }

    
    static int binarySearch(Student division[], int class_strength) {
        if (!isSorted(division, class_strength)) {
            cout << "You entered an unsorted array. Sorting the array...\n";
            selectionSort(division, class_strength);
        }

        int target;
        cout << "Enter Roll Number of Student: ";
        cin >> target;

        cout << "Searching using Binary Search..." << endl;

        int low = 0, high = class_strength - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (division[mid].roll_number == target) {
                return mid;
            } else if (division[mid].roll_number < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }

    
    void display(int i) {
        print_border(cout);
        print_row_header(cout, "No.", "Name", "Roll No.", "Class", "Rating", "Status");
        print_border(cout);
        string status = feedback > 60 ? "+ve" : "-ve";
        print_row(cout, to_string(i + 1),name, to_string(roll_number),_class,feedback, status);
        print_border(cout);
    }
};

int main() {
    Student division[10];
    int class_strength, choice;

    cout << "Enter Number of Students Attended the Program : ";
    cin >> class_strength;

    string _name, __class;
    int _roll_number;

    for (int i = 0; i < class_strength; i++) {
        cout << "Enter Details of Student - " << i + 1 << " : " << endl;
        cout << "  • Enter Roll Number: ";
        cin >> _roll_number;
        cout << "  • Enter Name: ";
        cin >> _name;
        cout << "  • Enter Class: ";
        cin >> __class;

        division[i] = Student(_name, _roll_number, __class);
    }

    do {
        cout << "\nOperation Menu:" << endl;
        cout << "1. Sort by Roll Number" << endl;
        cout << "2. Display All Students FEEDBACK" << endl;
        cout << "3. Check Student Presence (Optimized)" << endl;
        cout << "4. Check Student Presence (Unoptimized)" << endl;
        cout << "5. Get FEEDBACK Summary" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Student::selectionSort(division, class_strength);
                break;
            case 2:
                Student::print(division, class_strength);
                break;
            case 3: {
                int index = Student::binarySearch(division, class_strength);
                if (index != -1) {
                    cout << "Student was Present for the Training Program\nStudent Details:\n\n";
                    division[index].display(index);
                    cout << "\n\n";
                } else {
                    cout << "Student was NOT Present for the Training Program" << endl;
                }
                break;
            }
            case 4: {
                int target;
                string target_class;
                cout << "Enter Roll Number of Student: ";
                cin >> target;
                cout << "Enter Class of Student: ";
                cin >> target_class;

                int index = Student::linearSearch(division, class_strength, target, target_class);

                cout << "Searching using Linear Search..." << endl;

                if (index != -1) {
                    cout << "Student was Present for the Training Program\nStudent Details:\n";
                    division[index].display(index);
                } else {
                    cout << "Student was NOT Present for the Training Program" << endl;
                }
                break;
            }
            case 5: {
                Student::print(division, class_strength);
                cout << "\n\n";
                float Summary;
                Summary = Student::feedbackSummary(division, class_strength);
                if (Summary > 60) {
                    cout << "\t\t [ RESPONSE IS SATISFACTORY !!!! ]\n";
                    cout << "\t\tOverall RATING:  [ " << fixed << setprecision(2) << Summary <<"  ]"<< endl;
                } else {
                    cout << "\t\t[ RESPONSE IS NOT SATISFACTORY !!!! ]\n";
                    cout << "\t\tOverall RATING: [  " << fixed << setprecision(2) << Summary<<" ]" << endl;
                }
                break;
            }
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
