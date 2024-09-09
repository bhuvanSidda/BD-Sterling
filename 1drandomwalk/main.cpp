#include <iostream>
#include <unordered_map>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    srand(time(0));
    int numvalues = 1000000;
    unordered_map<int,int> umap;
    for(int j = 0; j<numvalues; j++){
        int position = 0;
        for(int i = 0; i < 10; i++){
            double coin = (double) rand() / RAND_MAX;
            if(coin > 0.5){
                position++;
            }else{
                position--;
            }
            
        }
        //cout << position << "|";
        umap[position] += 1;
    }
    //cout << endl;
    for(int k = numvalues * -1; k < numvalues; k++){
        if(umap[k] != 0){
            cout << "proportion of " << k << ": " << (double) umap[k]/numvalues << endl; 
        }
    }
    return 0;
}