// CSCE312: Lab-1 Problem-4 framework

/* ***   README   **** */

/*
   This example program sounds the bell when driver is on seat
   AND haven't closed the doors. Use the general framework and the function
   shells, replace the code inside  the control_action() function with your
   own code to do problem 4.

Note: This code is designed to run in an infinite loop to mimic a real control system.
If you prefer to read the inputs from a file, modify the code appropriately to terminate the
loop when all the inputs have been processed.

Turning in this file without your code will result in zero points being awarded for this problem.

run this file as : gcc -std=c99 filename.c -o executableName

*/


#include <stdio.h> //This is useful to do i/o to test the code

unsigned int input = 0;
unsigned int output = 0;

void read_inputs_from_ip_if(){
	//This read the current state of the available sensors

	printf("input signal: ");
	scanf("%d", &input);
}

void write_output_to_op_if(){

    //This display/print the state of the 3 actuators (DLA/BELL/BA)
    printf("output signal: %d\n", output);
}


//The code segment which implements the decision logic
void control_action(){

    /*
       The code given here sounds the bell when driver is on seat
       AND hasn't closed the doors. (Requirement-2)
       Replace this code segment with your own code to do problems 3 and 4.
    */

    //if (engine_running && !doors_closed) bell = 1;
    
    

    // I just converted the if then else statements in problem 3 to be binary input (i.e converted the decimal to binary)
    // The use of hex seems unecessary here cause we can just check the input if certain values are true or false (1 or 0) and produce the output
    if ((input & 12) == 4) 
      output = output | 1;

    if((input & 4) == 4){
        output = output | 1;
    }else if((input & 14)==14){
        output = output | 0;
    }else if((input & 0)==0){
        output = output | 0;
    }else{
        output = output | 0;
    }

    if((input & 49)==49){
        output = output | 2;
    }else if((input & 48)==48){
        output = output | 0;
    }else{
        output = output | 0;
    }

    if((input & 192)==192){
        output = output | 4;
    }else if((input & 64)==64){
        output = output | 0;
    }else if((input & 128)==128){
        output = output | 0;
    }else{
        output = output | 0;
    }

    if((input & 768)==768){
        output = output | 8;
    }else if((input & 256)==256){
        output = output | 0;
    }else{
        output = output |0;
    }
}

/* ---     You should not have to modify anything below this line ---------*/

int main(int argc, char *argv[])
{

    // code segment 1
    /*
        The main control loop which keeps the system alive and responsive for ever,
        until the system is powered off 
    */
    for (; ; )
    {
        input  = 0;
        output = 0;
        read_inputs_from_ip_if();
        control_action();
        write_output_to_op_if();
    }
    

    // code segment 2: 
    /*
        - 8 test cases for Problem 4.
    */
    
    // int inputs[] = {0, 83, 250, 21, 189, 87, 255, 145};
    // for (int i = 0; i < 8; i++) {
    //     int bell = 0;
    //     int dla  = 0;
    //     int ba   = 0;
    //     input    = inputs[i];
    //     output   = 0;

    //     control_action();

    //     if (output & 1)
    //         bell = 1;
    //     if (output & 2)
	//         dla = 1;
    //     if (output & 4)
    //         ba = 1;

    //     printf("Case %d:  %d %d %d \n", i, bell, dla, ba);
    // }

    return 0;
}


