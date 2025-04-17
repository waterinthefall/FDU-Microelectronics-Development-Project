#include "main.h"
#include "gpio.h"


int main() {
    FL_Init();
    FL_DelayMs(500);

    GPIO_Init();

    while (1) {
        FL_GPIO_ToggleOutputPin(LED1_GPIO_PORT, LED1_PIN);
        FL_DelayMs(1000);
    }
    
}