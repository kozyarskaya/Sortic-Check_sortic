#include "check_sortic.h"

void ra(vector <int> &a){
    if (a.size() > 0){
    int c = a[0];
    for (int i = 1 ; i < a.size(); i++){
        a[i - 1] = a[i];
    }
    a[a.size() - 1] = c;
    }
}
