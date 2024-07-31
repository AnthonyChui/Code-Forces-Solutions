#include<iostream>
#include<string>
#include<vector>
using namespace std;

string convert(string originalString){
    int row=0;
    int col=0;
    int n;
    string finalString = "";
    if(originalString[0]=='R'&&isdigit(originalString[1])&&originalString.find("C")!=string::npos){
        for(int i = 2; i < originalString.length(); i++){
            if(originalString[i]=='C'){
                n=i;
            }
        }
        row = stoi(originalString.substr(1, n));
        col = stoi(originalString.substr(n+1));
        //convert col into letters
        while (col > 0) {
            col--; // Adjust for 0-based indexing
            finalString = char(col % 26 + 'A') + finalString;
            col /= 26;
        }
        finalString+=to_string(row);
        return finalString;
    }
    else{
        for(int i = 0; i < originalString.length(); i++){
            if(isdigit(originalString[i])){
                n=i;
                break;
            }
        }
        int base = 1;
        for (int i = 0; i < n; i++) {
            col = col * 26 + (originalString[i] - 'A' + 1);
        }
        row = stoi(originalString.substr(n));
        finalString+="R";
        finalString+=to_string(row);
        finalString+="C";
        finalString+=to_string(col);
        return finalString;
    }

}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //write code here
    int n;
    string coord;
    vector<string> coords;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>coord;
        coords.push_back(coord);
    }

    for(int i = 0; i<n; i++){
        cout << convert(coords[i])<<endl;
    }

    return 0;
}