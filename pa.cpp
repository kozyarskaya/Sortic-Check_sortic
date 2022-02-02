#include "check_sortic.h"

void pa(vector <int> &a, vector <int> &b){
    if (b.size() > 0){
        vector <int> new_vector;
        vector <int> del;
        new_vector = a;
        a = del;
        a.push_back(b[0]);
        b = itc_slice_lst(b, 1, b.size());
        for(int i = 0; i != new_vector.size(); i++)
            a.push_back(new_vector[i]);
    }
}
