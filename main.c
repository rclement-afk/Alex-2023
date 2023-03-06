#include <kipr/wombat.h>
#include </home/root/Documents/KISS/Alex/Project 1/include/create_functions.h>
#include </home/root/Documents/KISS/Alex/Project 1/include/create_comp_lib.h>

int main()
{
    
	printf("Connecting to Create\n");
    create_connect();
    printf("Create Connected\n");
    start_position();
    slow_base(1075); //Starting position
    //////////First Red Pom////////////
    create_backward(10, 200);
    //Pseudo-Code for red pom pickup
    slow_base(2000);
    slow_hand(open);
    slow_arm(down);
    slow_hand(2000);
    slow_arm(graze);
    create_right(101,200);//going for second red pom
    slow_base(back);
    square_up_back_create(black,200);
    create_forward(33,200);
    slow_hand(open);
    create_left(104,200);// second red pom
    create_backward(12,200);
    slow_base(front);
    slow_hand(open);
    slow_arm(down);
    slow_hand(closed);
    slow_arm(graze);
    create_right(120,200);//double red poms
    slow_hand(open);
    create_left(40,200);
    create_forward(15,200);
    slow_arm(down);
    slow_hand(closed);
    slow_arm(up);
    create_backward(15,200);
    create_right(30,200);
    slow_hand(open);
    create_left(45,200);//first green pom
    slow_arm(down);
    slow_hand(closed);
    slow_arm(graze);
    create_left(65,200);//second green pom
    create_forward(4,200);
    slow_hand(open);
    slow_arm(down);
    create_forward(2,200);
    slow_hand(closed);
    slow_arm(graze);
    create_left(60,200);
    slow_hand(open);
    slow_base(middle);
    slow_arm(up);
    create_left(190,200);//ring stand
    square_up_back_create(black,-200);
    create_forward(30,200);
    create_right(5,200);
    create_forward(12,90);
    create_left(104,200);
    //create_disconnect();
    return 0; 
}
