
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/printk.h>

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

#define LED1_NODE		DT_NODELABEL(led2)

int main(void)
{
	static const struct gpio_dt_spec led1_spec = GPIO_DT_SPEC_GET(LED1_NODE,gpios);

	gpio_pin_configure_dt(&led1_spec, GPIO_OUTPUT);

	while (1) 
	{
		gpio_pin_set_dt(&led1_spec, 1); //set the pin HIGH
		k_msleep(SLEEP_TIME_MS);
		gpio_pin_set_dt(&led1_spec, 0); //set the pin LOW
		k_msleep(SLEEP_TIME_MS);
	}
	return 0;
}
