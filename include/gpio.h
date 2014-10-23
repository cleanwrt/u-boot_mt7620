#ifndef GPIO_H
#define GPIO_H

#if defined(MT7620_MP)
/* LED, Button GPIO# definition */
#define RST_BTN		12
#define WPS_BTN		12
//#define PWR_LED	GND
#define WIFI_2G_LED	72
#define WAN_LED		44

enum gpio_reg_id {
	GPIO_INT = 0,
	GPIO_EDGE,
	GPIO_RMASK,
	GPIO_MASK,
	GPIO_DATA,
	GPIO_DIR,
	GPIO_POL,
	GPIO_SET,
	GPIO_RESET,
	GPIO_TOG,
	GPIO_MAX_REG
};

extern unsigned int mtk7620_get_gpio_reg_addr(unsigned short gpio_nr, enum gpio_reg_id id);
extern int mtk7620_set_gpio_dir(unsigned short gpio_nr, unsigned short gpio_dir);
extern int mtk7620_get_gpio_pin(unsigned short gpio_nr);
extern int mtk7620_set_gpio_pin(unsigned short gpio_nr, unsigned int val);
#endif

extern void led_init(void);
extern void gpio_init(void);
extern void LEDON(void);
extern void LEDOFF(void);
extern unsigned long DETECT(void);
extern unsigned long DETECT_WPS(void);
extern void rst_fengine(void);

#if defined(ALL_LED_OFF)
extern void ALL_LEDON(void);
extern void ALL_LEDOFF(void);
#endif

#endif
