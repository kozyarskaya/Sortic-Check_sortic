#include"check_sortic.h"
#include <fstream>
#include <Windows.h>

void print(vector <int> &mass){
    for (int i = 0; i < mass.size(); i++){
        cout << mass[i] << " ";
    }
    cout << endl;
}


void run_programm(string str, vector <int> &a, vector <int> &b){
    if (str == "sa")
        sa(a);
    else if (str == "sb")
        sb(b);
    else if (str == "pa")
        pa(a, b);
    else if (str == "pb")
        pb(a, b);
    else if (str == "ra")
        ra(a);
    else if (str == "rb")
        rb(b);
    else if (str == "rr")
        rr(a, b);
    else if (str == "rra")
        rra(a);
    else if (str == "rrb")
        rrb(b);
    else if (str == "rrr")
        rrr(a, b);
}



void breakdown(string str, vector <int> &a, vector <int> &b){
    int i = 0, j = 0;
    string ch = "", com = "";
    while(str[i] != '!'){
        while (str[j] != ' '){
            ch += str[j];
            j++;
            }
            j++;
        a.push_back(itc_str_to_int(ch));
        ch = "";
        i = j;
    }
    i += 2;
    j += 2;
    while(str[i] != '*'){
        while (str[j] != ' ' && str[j] != '*'){
            com += str[j];
            j++;
    }
    i = j;
    j++;
    run_programm(com, a, b);
    com = "";
    }
}

string check_sortic(vector <int> &a){
    string message = "OK";
    for(int i = 1; i < a.size(); i++){
        if(a[i] < a[i - 1])
            message = "KO";
    }
    return message;
}

int main(){
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    string comand_str, mass;
    ifstream file("comands.txt");
    while(file){
        vector <int> a;
        vector <int> b;
        getline(file, comand_str);
        breakdown(comand_str, a, b);
        //print(a);
        mass = check_sortic(a);
        if(mass == "OK"){
             SetConsoleTextAttribute(hConsole, 10);
             cout << mass << endl;
        }
        else if(mass == "KO"){
             SetConsoleTextAttribute(hConsole, 12);
             cout << mass << endl;
        }
        SetConsoleTextAttribute(hConsole, 15);
    }
    return 0;
}
