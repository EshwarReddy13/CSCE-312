#include<stdio.h>

unsigned int driver_on_seat;
unsigned int driver_seat_belt_fastened;
unsigned int engine_running;
unsigned int doors_closed;
unsigned int key_in_car;
unsigned int door_lock_lever;
unsigned int brake_pedal;
unsigned int car_moving;
unsigned int passenger_seat;
unsigned int high_speed_collision;

unsigned int bell = 0;
unsigned int door_lock_actu = 0;
unsigned int brake_actu = 0;
unsigned int passenger_airbag_actu = 0;


void read_inputs_from_ip_if(){
}

void write_output_to_op_if(){
}


// The code segment which implements the decision logic
void control_action(){

    /*
       The code given here sounds the bell when driver is on seat
       AND hasn't closed the doors. (Requirement-2)
      
       3. Provide your own code to do problems 3, which satisfies 5 requirements 
    */

    //Bell Actuator
    if (engine_running && !doors_closed){
        bell = 1;
    }else if(engine_running && !driver_seat_belt_fastened){
        bell = 1;
    }else if(engine_running && driver_seat_belt_fastened && doors_closed){
        bell = 0;
    }else if(!engine_running){
        bell = 0;
    }else{
        bell = 0;
    }

    //Door lock Actuator
    if(!driver_on_seat && key_in_car && door_lock_lever){
        door_lock_actu = 0;
    }else if(driver_on_seat && key_in_car && door_lock_lever){
        door_lock_actu = 1;
    }else{
        door_lock_actu = 0;
    }

    //Braking Actuator
    if(brake_pedal && car_moving){
        brake_actu = 1;
    }else if(brake_pedal && !car_moving){
        brake_actu = 0;
    }else if(!brake_pedal && car_moving){
        brake_actu = 0;
    }else{
        brake_actu = 0;
    }

    //Passenger Aribag Actuator
    if(passenger_seat && high_speed_collision){
        passenger_airbag_actu = 1;
    }else if(!passenger_seat && high_speed_collision){
        passenger_airbag_actu = 0;
    }else if(!passenger_seat && !high_speed_collision){
        passenger_airbag_actu = 0;
    }else{
        passenger_airbag_actu = 0;
    }

}

int main(){
    int test[10] = {1,0,1,0,1,1,0,0,0,0};
    bell = 0;
    door_lock_actu = 0;
    brake_actu = 0;
    passenger_airbag_actu =0;

    driver_on_seat = test[0]; 
    driver_seat_belt_fastened = test[1];
    engine_running = test[2];
    doors_closed = test[3];
    key_in_car = test[4];
    door_lock_lever = test[5];
    brake_pedal = test[6];
    car_moving = test[7];
    passenger_seat = test[8];
    high_speed_collision = test[9];
    control_action();
    printf(" %d %d %d %d \n",bell,door_lock_actu,brake_actu,passenger_airbag_actu);

}