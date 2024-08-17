#include <iostream>
using namespace std;
int main(){
    string previous;
    string current;
    int rep_words = 0;
    while(cin>>current){
        if (previous == current)
            cout << "repeated word: " << current << '\n';
            ++rep_words;
            cout << "amount of repeated words: " << rep_words << "\n";
        previous = current;
    }
}

