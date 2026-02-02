#include <iostream>
#include <string>
using namespace std;

class HostelRoom {
private:
    int roomNumber;
    string studentName;
    bool isOccupied;

public:
    // Constructor
    HostelRoom(int rno) {
        roomNumber = rno;
        studentName = "None";
        isOccupied = false;
    }

    // Allocate room
    void allocateRoom(string name) {
        if (!isOccupied) {
            studentName = name;
            isOccupied = true;
            cout << "Room allocated to " << studentName << endl;
        } else {
            cout << "Room already occupied!" << endl;
        }
    }

    // Vacate room
    void vacateRoom() {
        if (isOccupied) {
            studentName = "None";
            isOccupied = false;
            cout << "Room vacated successfully." << endl;
        } else {
            cout << "Room is already empty." << endl;
        }
    }

    // Display status
    void displayStatus() {
        cout << "\nRoom Number: " << roomNumber << endl;
        if (isOccupied) {
            cout << "Status: Occupied" << endl;
            cout << "Student Name: " << studentName << endl;
        } else {
            cout << "Status: Vacant" << endl;
        }
    }
};

int main() {
    HostelRoom room1(101);

    room1.displayStatus();
    room1.allocateRoom("Amit");
    room1.displayStatus();
    room1.vacateRoom();
    room1.displayStatus();

    return 0;
}
