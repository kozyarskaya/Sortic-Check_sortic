#include "check_sortic.h"

void rb(vector <int> &b){
    if (b.size() > 0){
    int c = b[0];
    for (int i = 1 ; i < b.size(); i++){
        b[i - 1] = b[i];
    }
    b[b.size() - 1] = c;
    }
}
