
#include <iostream>

#include <string>

using namespace std;


void start(){
    string u;
    char c;
    c = '0';
    bool haschosen;
    haschosen = true;
    cout << "Wecome to the Quiz App " << endl  << " Please type your username " << endl;
    getline(cin,u,'\r');
    cin.clear();
    
    cout << "Hello " << u << " What Quiz would you like to do?" << endl;
 
    
    while(haschosen == true){
    
    cout << "Type 1 for: History" << endl << "Type 2 for: Computer Science" << endl << "Type 3 for: Nature" << endl;
   
    cin >> c;
    cin.clear();
    
    switch(c){
        
        case '1' :
            haschosen = false;
            cout << "History" << endl;
            break;
        
        case '2' :
            haschosen = false;
            cout << "Type 1 for: History" << endl;
            break;    
        
        case '3' :
            haschosen = false;
            cout << "Type 1 for: History" << endl;
            break;  
            
        default  :
           cout << "Type 1,2 or 3" << endl;
           haschosen = true;
            break;
           
    }
    
    }
    
    
    
    
}






int main(int argc, char** argv) {
      string username;
      string q;
      
     start();
      
     // Quiz quiz(q,username);
      
      
    
    
    
    return 0;
}

