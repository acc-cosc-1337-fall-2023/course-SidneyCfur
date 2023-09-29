//add include statements
#include<string>
//add function code here
using std::string;

double get_gc_content(const string& dna){
double output = 0.0;
double counter;
string list = dna;
for(auto i=0; i < 8; i++){
    if(list[i] =='g' || list[i] == 'a'){
        counter += 1.0;
    }
    counter /= 8.0;
}

return output;
}

string get_dna_compelemt(string dna){

}

string reverse_string(string dna){

}