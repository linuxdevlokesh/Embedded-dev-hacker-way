// main.c

#define LED_PIN 5
#define DELAY_COUNT 500000U

int global_counter = 10;

int main(void){
    int led_pin = LED_PIN;
    for (volatile int i = 0; i < DELAY_COUNT; i++){
        global_counter++;
    }
    // Inline Assembly 
    __asm volatile("nop");

    while(1) {
        // Infinite loop
    }

}
