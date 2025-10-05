#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    
    cout << setfill('_') << setw(50) << "_" << endl;

    cout << "|" << setfill(' ') << setw(48) << "|" << endl;
    cout << "|" << setfill(' ') << setw(48) << "|" << endl;
    cout << "|" << setfill(' ') << setw(48) << "|" << endl;

    cout << "|" << setfill(' ') << setw(18) << " "
         << "[##]"
         << setfill(' ') << setw(26) << "|" << endl;

    cout << "|" << setfill(' ') << setw(18) << " "
         << "[##]"
         << setfill(' ') << setw(26) << "|" << endl;

 
    cout << "|" << setfill(' ') << setw(48) << "|" << endl;
    cout << "|" << setfill(' ') << setw(48) << "|" << endl;


    cout << "|" << setfill(' ') << setw(38) << " "
         << "[  ]"
         << setfill(' ') << setw(6) << "|" << endl;

    cout << "|" << setfill(' ') << setw(38) << " "
         << "[  ]"
         << setfill(' ') << setw(6) << "|" << endl;


    cout << setfill('_') << setw(50) << "_" << endl;

    return 0;
}
