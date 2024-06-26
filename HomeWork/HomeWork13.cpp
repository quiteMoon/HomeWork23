#include <iostream>

using namespace std;

class String {
private:
    char* str;
    size_t L;
    static int Count;

public:
    String() : String(80) {}

    String(size_t size) {
        L = size;
        str = new char[L + 1];
        memset(str, 0, L + 1);
        Count++;
    }

    String(const char* inputStr) {
        L = strlen(inputStr);
        str = new char[L + 1];
        strcpy_s(str, L + 1, inputStr);
        Count++;
    }

    ~String() {
        delete[] str;
        Count--;
    }

    void input() {
        cout << "Enter a string: ";
        cin.getline(str, L + 1);
    }

    void print() const { cout << "String: " << str << endl; }

    static int getObjectCount() { return Count; }
};

int String::Count = 0;

int main() {
    String str1;   
    String str2(10);
    String str3("Hello, world!");

    str1.input();
    str1.print();

    str2.input();
    str2.print();
    
    str3.print();

    cout << "Total number of String objects: " << String::getObjectCount() << endl;
}
