#include <iostream>
#include <stdexcept>
using  namespace std;

void processInput(int value) {
    if (value < 0) {
        throw invalid_argument("Input value must be non-negative");
    } else if (value > 100) {
        throw out_of_range("Input value is out of range");
    }
}

int main() {
    try {
        processInput(-5);
    } catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() <<endl;
    } catch (const out_of_range& e) {
        cerr << "Out of range: " << e.what() <<endl;
    } catch (const exception& e) {
        cerr << "Caught an exception: " << e.what() <<endl;
    }
    return 0;
}
