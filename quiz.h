#include <string>
#include <>


#include <cstdlib>

using namespace std;



#ifndef QUIZ_H
#define QUIZ_H



class Quiz {
    
private:
    int question_nr;
    int answeres[10];
public:
    
    Quiz();
    Quiz(string s);
    
    void startQuiz();
    
    void saveResult();
    
};

#endif /* QUIZ_H */

