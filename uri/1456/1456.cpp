#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int pointer, word_index;
char store[30000];
string word;


void brainfuck(string program) {
    unsigned int i;
    int j, brackets_level;
    string inner_code;

    for (i = 0; i < program.size(); i++) {
        switch (program[i]) {
            case '>': pointer++; break;
            case '<': pointer--; break;
            case '+': store[pointer]++; break;
            case '-': store[pointer]--; break;
            case '.': cout << store[pointer]; break;
            case ',':
                if (word_index >= (int)word.size()) {
                    store[pointer] = 0;
                } else {
                    store[pointer] = word[word_index];
                    word_index++;
                }
                break;
            case '[':
                brackets_level = 1;
                inner_code = "";
                
                i++;
                while (1){
                    if (program[i] == '[') brackets_level++;
                    else if (program[i] == ']') brackets_level--;
                    
                    if(brackets_level == 0) break;
                    inner_code += program[i];
                    
                    i++;
                }
                
                while (store[pointer] != 0) brainfuck(inner_code);
                
                break;
            case '#':
                for (j = 0; j < 10; j++) cout << store[j];
                break;
        }
    }
}


int main() {
    int n, nn;
    string program;
    cin >> n;

    nn = 1;
    while (nn <= n) {
        pointer = 0;
        word_index = 0;
        memset(store, 0, sizeof(store));
        
        cin >> word;
        cin >> program;

        cout << "Instancia " << nn++ << endl;
        brainfuck(program);
        cout << endl << endl;

    }
    return 0;
}
