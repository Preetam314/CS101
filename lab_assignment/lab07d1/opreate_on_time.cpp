#include<iostream>
#include <string>


struct Time{
    int h;
    int s;
};


Time add(Time t1,Time t2){
    Time result;
    result.h = t1.h+ t2.h + (t1.s+t2.s)/60;
    result.s = (t1.s+t2.s)%60;

    return result;
}

Time sub(Time t1, Time t2){
    Time result;

    if(t1.h - t2.h < 0){
        result.s = (t2.s - t1.s < 0)? 60 + (t2.s - t1.s): t2.s - t1.s;
        result.h = (t2.s - t1.s < 0)? abs(t1.h - t2.h) - 1 : abs(t1.h - t2.h); 
    }
    else{
        result.s = (t1.s - t2.s < 0)? 60 + (t1.s - t2.s): t1.s - t2.s;
        result.h = (t1.s - t2.s < 0)? abs(t2.h - t1.h) - 1 : abs(t2.h - t1.h);     
    }


    return result;


}

int main(){
    Time t1, t2;
    std::cin >> t1.h >> t1.s >> t2.h >> t2.s;



    Time addition = add(t1, t2);
    Time substraction = sub(t1, t2);

    std::cout << addition.h << " hrs " << addition.s << " mins" << "\n" << substraction.h<< " hrs "<<substraction.s << " mins"; 

    

}