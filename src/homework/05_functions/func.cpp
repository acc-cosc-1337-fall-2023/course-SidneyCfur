//add include statements
#include<string>
#include<iostream>
//add function code here
using std::string; using std::cout;

double get_gc_content(const string& dna){

    double output = 0.0;
    string list = dna;

    for(auto i=0; i < dna.length(); i++){
        if(list[i] =='G' || list[i] == 'C'){
            output += 1.0;
    }
    
}
    output /= 8.0;
    return output;
}


string get_reverse_string(string dna) {
    string output = dna;
    int count = 0;
    for(int i = dna.length() - 1; i >= 0; i--){
        output[count] = dna[i];
        count++;
}
return output;
}

string get_dna_complement(string dna){
    string output = get_reverse_string(dna);

    for(int i = 0; i <= output.length(); i++){
        if(output[i] == 'A'||output[i] == 'a'){
            output[i] = 'T';
        }
        else if(output[i] == 'T'||output[i] == 't'){
            output[i] = 'A';
        }
        else if(output[i] == 'G'||output[i] == 'g'){
            output[i] = 'C';
        }
        else if(output[i] == 'C'||output[i] == 'c'){
            output[i] = 'G';
        }
    }
    return output;
}