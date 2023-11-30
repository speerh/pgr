#include <fstream>
#include <iostream>
#include <vector>

using namespace std; 


//OPEN/READ FILES
//READ FIRST LETTER
//READ # MEM FRAMES
//READ STRING

int main() {
    vector<int> inp;
    string filename = "";
}

void read(string fn){
    fstream fin(fn);
    char i;
    while(fin >> i){
        cout << i; 
    }
}
