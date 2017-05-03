

#include <cstdlib>

using namespace std;


void start(int *q, string *username){
    
    
    bool haschosen;
    cout << "Wecome to the Quiz App " << endl  << " Please type your username " << endl;
    cin >> getline(username, 100);
    cout << "Hello " + username + " What Quiz would you like to do?" << endl;
 
    
    while(haschosen)
    cout << "Type 1 for: History" << endl << "Type 2 for: Computer Science" << endl << "Type 3 for: Nature" << endl;
    cin >> q;
    
    switch(q){
        
        case q == 1 :
            haschosen = false;
            break;
        
        case q == 2 :
            haschosen = false;
            break;    
        
        case q == 3 :
            haschosen = false;
            break;  
            
        default  :
           cout << "Type 1,2 or 3" << endl;
            break;
           
    }
    
   
    
    
    
    
}






int main(int argc, char** argv) {
      string username;
      int q;
      
      void start(*q,*username);
      
      Quiz quiz(q,username);
      
      
    
    
    
    return 0;
}

