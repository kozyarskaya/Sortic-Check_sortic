#include "check_sortic.h"

void rra(vector <int> &a){
    if (a.size() > 0){
    int c = a[a.size() - 1];
    for (int i = a.size() - 2; i >= 0; i--){
        a[i + 1] = a[i];
    }
    a[0] = c;
    }
}
