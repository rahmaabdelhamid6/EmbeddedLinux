#include <iostream>
#include <csignal> 
#include <unistd.h>

void signal_handler(int signal_num) 
{ 
    std::cout << "Interrupt signal "<<signal_num << "Received" << std::endl; 
    std::cout << std::endl << "----------------------Exiting Program----------------------" << std::endl << std::endl;

    // It terminates the  program 
    exit(signal_num); 
} 
  
int main ()
{
    // signal(SIGINT, signal_handler);// produces a receipt for an active signal // d bytb3 elly gowa signal_handler
    // signal(SIGABRT, signal_handler);  //Termination of a program, abnormally // d hay'feh 3la toul mbytb3sh elly gowa signal_handler
    signal(SIGTERM, signal_handler); // Sends a termination request to the program  // d hay'feh 3la toul mbytb3sh elly gowa signal_handler

    std::cout << "Press Ctrl+C to trigger the interrupt signal." << std::endl;

    while (true) {
         std::cout << "Still Running......" << std::endl;

        // Sleep for 1 second to control the loop execution speed
        sleep(1);

    }

    return 0;
}