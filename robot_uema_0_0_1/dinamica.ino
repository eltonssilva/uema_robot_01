#define motor_a_0   2
#define motor_a_1   4

#define motor_b_0   7
#define motor_b_1   8



void robot_init (void){

    if(DEBUG_ROBOT) printf("Iniciou robot");

    pinMode(motor_a_0, OUTPUT);
    pinMode(motor_a_1, OUTPUT);
    pinMode(motor_b_0, OUTPUT);
    pinMode(motor_b_1, OUTPUT);

    digitalWrite(motor_a_0, 1);
    digitalWrite(motor_a_1, 1);
    digitalWrite(motor_b_0, 1);
    digitalWrite(motor_b_1, 1);
}

void robot_front (void){

     if(DEBUG_ROBOT) Serial.println("Robot Front");


    digitalWrite(motor_a_0, 0);
    digitalWrite(motor_a_1, 1);

    digitalWrite(motor_b_0, 0);
    digitalWrite(motor_b_1, 1);

}


void robot_back (void){

    if(DEBUG_ROBOT) printf("Robot Back");

    digitalWrite(motor_a_0, 1);
    digitalWrite(motor_a_1, 0);
    
    digitalWrite(motor_b_0, 1);
    digitalWrite(motor_b_1, 0);

}

void robot_left (void){

    if(DEBUG_ROBOT) printf("Robot Left");

    digitalWrite(motor_a_0, 0);
    digitalWrite(motor_a_1, 1);
    
    digitalWrite(motor_b_0, 0);
    digitalWrite(motor_b_1, 0);
}


void robot_right (void){

    if(DEBUG_ROBOT) printf("Robot Right");

    digitalWrite(motor_a_0, 0);
    digitalWrite(motor_a_1, 0);

    digitalWrite(motor_b_0, 0);
    digitalWrite(motor_b_1, 1);
}


void robot_stop (void){

    if(DEBUG_ROBOT) Serial.println("Robot Stop");

    digitalWrite(motor_a_0, 0);
    digitalWrite(motor_a_1, 0);
    
    digitalWrite(motor_b_0, 0);
    digitalWrite(motor_b_1, 0);
}