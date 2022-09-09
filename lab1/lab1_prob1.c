#include <stdlib.h> 
#include <stdio.h> //For input/output 
#include <sys/time.h> //For gettimeofday() function 

int main(){ 
    int int_var; //Tag 1 
    struct timeval this_instant; 
    double time_stamp; 
    int i; 
    FILE *my_file_pointer; 
    
    if ( (my_file_pointer = fopen("lab1_prob1_out.txt", "a")) == NULL){ 
        printf("Error opening the file, so exiting\n"); 
        exit(1);
    } 
gettimeofday(&this_instant, 0); 
time_stamp = this_instant.tv_sec; 
fprintf(my_file_pointer, "This program was executed at time : %d secs\n", time_stamp); 
fprintf(my_file_pointer, "The sizes of different data type for this machine and compiler are -\n"); 
fprintf(my_file_pointer, "int data type is %d bytes or %d bits long\n",sizeof(int_var), sizeof(int_var)*8 );  
fprintf(my_file_pointer, "double data type is %d bytes or %d bits long\n",sizeof(double), sizeof(double)*8 ); 

 

//Code segment for console I/O, this can be used instead of the file I/O 
printf("This program was executed at time : %d secs\n", time_stamp); 
printf("The sizes of different data type for this machine and compiler are -\n"); 
printf("int data type is %d bytes or %d bits long\n",sizeof(int_var), sizeof(int_var)*8 );  
printf("double data type is %d bytes or %d bits long\n",sizeof(double), sizeof(double)*8 ); 
printf("short data type is %d bytes or %d bits long\n", sizeof(short), sizeof(short)*8); 
fclose(my_file_pointer); //Tag 2 

return 0; 
} 
