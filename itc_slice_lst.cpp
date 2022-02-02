#include "check_sortic.h"

vector <int> itc_slice_lst(vector <int> mass, int start, int finish){
    vector <int> new_vector;
    for(int i = start; i < finish; i++){
        new_vector.push_back(mass[i]);
    }
    return new_vector;
}
