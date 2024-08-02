#include <iostream>

using namespace std;


class SWE {
public:
    void display() {
        cout << "I am a software student" << endl;
    }
};


class NWS {
public:
    void display() {
        cout << "I am a network and security student" << endl;
    }
};


class CSN {
public:
    void display() {
        cout << "I am a computer network and security student" << endl;
    }
};

//  class ICT is inheriting from SWE, NWS, and CSN respectively
class ICT : public SWE, public NWS, public CSN {
public:
    void displayICT() {
        cout << "I belong to all categories: SWE, NWS and CSN" << endl;
    }
};

int main() {
    // Creating objects for all the  classes
    SWE softwareStudent;
    NWS networkSecurityStudent;
    CSN computerNetworkSecurityStudent;
    ICT ictStudent;

    // Calling display() for each of the classes
    softwareStudent.display();       
    networkSecurityStudent.display(); 
    computerNetworkSecurityStudent.display();
    ictStudent.displayICT(); 

    // Calling functions of the other  classes from ICT object
    ictStudent.SWE::display();   
    ictStudent.NWS::display();   
    ictStudent.CSN::display();   

    return 0;
}

/*
This is an example of multiple inheritance, where the derived class ICT inherits from multiple base classes (SWE, NWS, and CSN).

To resolve ambiguity in calling the display function from the base classes, we explicitly specify which base class's display function we want to call using the scope resolution operator (e.g., ictStudent.SWE::display()). This resolves the conflict that arises because all three base classes have a method with the same name.
*/
