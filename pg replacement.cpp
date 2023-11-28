#include <fstream>
#include <iostream>

using namespace std; 


//OPEN/READ FILES
//READ FIRST LETTER
//READ # MEM FRAMES
//READ STRING

int main() {
    int inp[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    string filename = "";
}

void read(string fn){
    fstream fin(fn);
    char i;
    while(fin >> i){
        cout << i; 
    }
}
