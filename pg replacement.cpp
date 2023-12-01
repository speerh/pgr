#include <fstream>
#include <iostream>
#include <vector>

using namespace std; 

//funct identifiers
void read(string fn);

vector<int> inp;

//OPEN/READ FILES
//READ FIRST LETTER
//READ # MEM FRAMES
//READ STRING

int main() {
    
    string filename = "FIFO.txt";
    read(filename);
}

//read file
void read(string fn){
    fstream fin(fn);
    char i;
    char algo;
    //read letter designating mode
    algo = fin.get();
    fin.ignore();

    //cycle thru file and assign numbers to vector  
    while(fin >> i){
        //add i to array
        //convert char to int
        inp.push_back(i - 48);
        //skip delimiter
        fin.ignore();

    }
    cout << "\n\n";
    for (const int& i : inp) {
        cout << i << "  ";
    }

    //TEMP JUST TO SEE BEFORE IT CLOSES
    int x;
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
}
