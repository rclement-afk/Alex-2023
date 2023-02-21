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
    msleep(2000);
    //////////First Red Pom////////////
    create_backward(5,200);
    msleep(15);
    square_up_front_create(black, 200);
    msleep(15);
    create_left(104, 200); //claw breaks 
    msleep(15);
    create_backward(10, 200);
    msleep(15);
    //Pseudo-Code for red pom pickup
    slow_base(2000);
    slow_hand(open);
    msleep(15);
    slow_arm(down);
    msleep(100);
    slow_hand(2000);
    msleep(2000); //To represent pseudo-code
    slow_arm(graze);
    msleep(15);
    create_right(101,200);//going for second red pom
    msleep(15);
    create_forward(20,200);
    msleep(15);
    create_forward(20,200);
    msleep(15);
    slow_hand(open);
    msleep(15);
    create_left(104,200);// second red pom
    create_backward(4,200);
    slow_hand(open);
    slow_arm(down);
    slow_hand(closed);
    slow_arm(graze);
    create_right(101,200);
    slow_hand(open);
    create_left(60,200);//first green pom
    slow_arm(down);
    slow_hand(closed);
    slow_arm(graze);
    create_left(70,200);//second green pom
    create_forward(2,200);
    slow_hand(open);
    slow_arm(down);
    slow_hand(closed);
    slow_arm(graze);
    create_left(60,200);
    slow_hand(open);
    start_position();
    create_forward(39,200);
    //create_disconnect();
    return 0;
}
