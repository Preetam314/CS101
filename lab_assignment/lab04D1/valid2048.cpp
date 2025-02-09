    #include <iostream>
    using namespace std;

    bool isvalid(unsigned int& n){
        if(n == 0){
            return 0;
        }

        if((n&(n - 1)) == 0){
            return 1;
        }

        return 0;

    }

    int main(){
        unsigned int t; cin >> t;
        for(unsigned int i = 0; i < t; i++){
            unsigned int a; cin >> a;

            if(isvalid(a) == 1){
                cout << "yes" << endl;
            }
            else if (isvalid(a) == 0){
                cout << "no" << endl;
            }
        }


    } 