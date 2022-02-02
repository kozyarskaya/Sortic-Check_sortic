#include "check_sortic.h"

void pb(vector <int> &a, vector <int> &b){
    if (a.size() > 0){
        vector <int> new_vector;
        vector <int> del;
        new_vector = b;
        b = del;
        b.push_back(a[0]);
        a = itc_slice_lst(a, 1, a.size());
        for(int i = 0; i != new_vector.size(); i++)
            b.push_back(new_vector[i]);
    }
}
