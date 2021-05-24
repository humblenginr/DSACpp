#include <iostream>
using namespace std;

int main(){
    char my_name[] = "Nithish";
    for(char* i = my_name; *i; i++){
        cout << *i << endl;
    }
    cout << "using For range" <<endl;
    for (char i : my_name) {
        cout<<i<<endl;
    }
	return 0;
}


