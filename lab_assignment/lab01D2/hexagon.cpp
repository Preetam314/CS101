#include<simplecpp>
main_program{
    turtleSim();
    hide();
    repeat(6){

    repeat(5){
        forward(5);
        penUp();
        forward(5);
        penDown();
        wait(0.1);
    }
    repeat(5){
        left(60);
        forward(50);
        wait(0.1);
    }
    penUp();
    left(60);
    forward(50);
    right(60);
    wait(0.1);

    

    }
    getClick();

}

