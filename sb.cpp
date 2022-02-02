#include "check_sortic.h"

void sb(vector <int> &b){
    if(b.size() > 0){
        int a = b[1];
        b[1] = b[0];
        b[0] = a;
    }
}
