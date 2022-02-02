#include "check_sortic.h"

void sa(vector <int> &a){
    if(a.size() > 1){
        int b = a[1];
        a[1] = a[0];
        a[0] = b;
    }
}

