#include <iostream>
#include <string>

using namespace std;

class User{
    int _secret = 22;

public:
    string name = "Nithish";
    void setSecret(const int &newsecret){
        _secret = newsecret;
}
    int getSecret(){
        return _secret;
}
    void classMessage(){
        cout << "i am a method inside the class  " << name <<endl;
}
};

int main(){
    User sam;
    sam.name = "sam";
    sam.setSecret(321);
   cout<< sam.getSecret() <<endl;
    
    return 0;
}
