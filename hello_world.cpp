//
//  main.cpp
//  Git Hello World
//
//  Created by Simon To on 17/1/21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    for (int i = 10; i > 0; i--) {
        cout << "T-minus: " << flush;
        cout << i << "!" << endl;
    }
    cout << "Hello this beautiful world!" << endl;
}
