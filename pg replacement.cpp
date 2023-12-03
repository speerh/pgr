//HANNAH SPEER
//B01266391

#include <fstream>
#include <iostream>
#include <list>

using namespace std; 

//funct identifiers
void read(string fn);
void fifo();

list<int> inp;
char algo;
int numFrames;
int numFaults;

//OPEN/READ FILES
//READ FIRST LETTER
//READ # MEM FRAMES
//READ STRING

int main() {
    
    string filename = "FIFO.txt";
    //take input from file and save values to vector (inp)
    read(filename);
    fifo();
}

//read file
void read(string fn){
    fstream fin(fn);
    char i;
    //read letter designating mode
    algo = fin.get();
    fin.ignore();
    //read first # indicating # of memory frames
    numFrames = (fin.get() - 48);
    fin.ignore();

    //cycle thru file and assign numbers to vector  
    while(fin >> i){
        //add i to array
        //convert char to int
        inp.push_back(i - 48);
        //skip delimiter
        fin.ignore();

    }

}

void fifo() {

    cout << "FIFO:\nEntry array: ";
        for (auto const& v : inp)
            cout << v << " ";

    int i = 0;
    list<int> frames;
    bool inSet = false;
    //start traversing pages

    while (frames.size() < numFrames) {
        frames.push_back(inp.front());
        inp.pop_front();
        numFaults++;
        cout << "\nAdded " << frames.back();
    }

    while (inp.size() > 0) {
        cout << "\nFRAMES: ";
        for (auto const& v : frames)
            cout << v << " ";

        inSet = false;
        //check if page in set
        for (auto const& v : frames) {
            if (inp.front() == v)
                inSet = true;
        };
        //if in set, progress to next # (do not pop frame; no pg fault)
        if (inSet) {
            cout << "\n HIT";
            inp.pop_front();
        }
        else {
            cout << "\n PG FAULT";
            //pop first in frames
            frames.pop_front();
            //store page in queue
            frames.push_back(inp.front());
            inp.pop_front();
            //numfaults++
            numFaults++;

        }
    }
    cout << "\n\nEnter a number to continue: ";
    int x;
    std::cin >> x;
}
