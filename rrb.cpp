#include "check_sortic.h"

void rrb(vector <int> &b){
    if (b.size() > 0){
    int c = b[b.size() - 1];
    for (int i = b.size() - 2; i >= 0; i--){
        b[i + 1] = b[i];
    }
    b[0] = c;
    }
}
