/*#define hand 3
#define arm 2
#define base 0
#define arm_max 1125
#define arm_min 400
#define arm_mid 525
#define hand_max 2047 //also start
#define hand_min 0
#define base_max 1500
#define base_min 0
#define base_start 150
#define left 2
#define right 1*/

#define down 2100
#define front 1300
#define closed 2000
#define forward1 2000
int up;
int graze;
int arm_water;
int arm_building;
//int down;
int mid;
//int front;
int back;
int open;
int middle;
//int closed;
int hand_valve;
int tight;
int tightish;

int turn;
int PID;
int square;

void slow_arm (int x );//this funtion slows 
void slow_hand (int x );//this funtion slows 
void slow_base (int x );//this funtion slows 
void start_position();
void arm_out();
void slow_base_valve();//this funtion slows
void slow_start();
void slow_base_front();
void slow_arm_pre_valve();
void slow_arm_up();
void slow_arm_up2();
void slow_hand_open();
void slow_hand_small_open();
void slow_arm_down();
void slow_hand_close();
void short_pause();
void slow_arm_bucket();
void fast_hand();
void shake_arm();
//void grab_water();
void pile_water();
//void push_water();
void recover_water();
void first_water();
void all_water();
//void first_water_down();
void all_water_drop();
void shake_arm_bucket();