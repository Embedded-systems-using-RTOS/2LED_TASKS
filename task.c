#include <stdio.h>

void task_led1(void *param);

void task_led2(void *param);

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

// Define the GPIO pins for the LEDs
#define LED1_GPIO 2
#define LED2_GPIO 4

void app_main(void)
{

    // Configure the GPIO pins for the LEDs
    esp_rom_gpio_pad_select_gpio(LED1_GPIO);
    gpio_set_direction(LED1_GPIO, GPIO_MODE_OUTPUT);

    esp_rom_gpio_pad_select_gpio(LED2_GPIO);
    gpio_set_direction(LED2_GPIO, GPIO_MODE_OUTPUT);


	xTaskCreate(task_led1, "task1", 1024*2, NULL, 3, NULL);

	xTaskCreate(task_led2, "task2", 1024*2, NULL, 3, NULL);

}

void task_led1(void *param)
{
	while(1)
	{
		// Turn on LED 1
        gpio_set_level(LED1_GPIO, 1);
        vTaskDelay(pdMS_TO_TICKS(500)); // Delay for 500 milliseconds

        // Turn off LED 1
        gpio_set_level(LED1_GPIO, 0);
        vTaskDelay(pdMS_TO_TICKS(500)); // Delay for 500 milliseconds
	}
	vTaskDelete(NULL);// in case we wanted to stop the loop
}

void task_led2(void *param)
{
	while(1)
	{
		// Turn on LED 2
        gpio_set_level(LED2_GPIO, 1);
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1000 milliseconds (1 second)

        // Turn off LED 2
        gpio_set_level(LED2_GPIO, 0);
        vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1000 milliseconds (1 second)
	}
	vTaskDelete(NULL);// in case we wanted to stop the loop
}