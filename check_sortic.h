#ifndef CHECK_SORTIC_H_INCLUDED
#define CHECK_SORTIC_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
using namespace std;


void sa(vector <int> &a);

void sb(vector <int> &b);

void ss(vector <int> &a, vector <int> &b);

void pa(vector <int> &a, vector <int> &b);

void pb(vector <int> &a, vector <int> &b);

void ra(vector <int> &a);

void rb(vector <int> &b);

void rr(vector <int> &a, vector <int> &b);

void rra(vector <int> &a);

void rrb(vector <int> &b);

void rrr(vector <int> &a, vector <int> &b);



vector <int> itc_slice_lst(vector <int> mass, int start, int finish);

int itc_find_str(string str1, string str2);

string itc_slice_str(string str, int start, int finish);

long long itc_str_to_int(string str);

long long itc_len(string str);



#endif // CHECK_SORTIC_H_INCLUDED
