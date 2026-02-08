/*A monitoring system generates a sequence of numeric event IDs from 1 to N. 
To make logs easier to analyse, the system applies tags to certain events based on predefined rules: 
• Events whose ID is divisible by 3 are tagged as “Buzz” 
• Events whose ID is divisible by 5 are tagged as “Fuzz” 
• Events divisible by both 3 and 5 receive both tags*/
#include <iostream>
using namespace std;

class Event {
public:
    int id;
    string tag;

    Event(int eventId) {
        id = eventId;
        tag = "";  // default empty
    }

    void applyTag() {
        if (id % 3 == 0) tag += "Buzz";
        if (id % 5 == 0) tag += "Fuzz";
    }

    void display() {
        if (tag != "")
            cout << "Event " << id << ": " << tag << endl;
        else
            cout << "Event " << id << ": No Tag" << endl;
    }
};

int main() {
    int N;
    cout << "Enter the number of events: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        Event e(i);
        e.applyTag();
        e.display();
    }

    return 0;
}