  solution "STM32F103VGT6Project"
  configurations { "STM32F103VGT6Project" }
  project"STM32F103VGT6Project"
  kind "ConsoleApp"
  language "C"
  filter "configurations:STM32F103VGT6Project"
  sysincludedirs  {"$(VC_IncludePath)"}
  defines { "USE_FULL_LL_DRIVER", "USE_HAL_DRIVER", "STM32F103xG", "HSE_VALUE=8000000", "HSE_STARTUP_TIMEOUT=100", "LSE_STARTUP_TIMEOUT=5000", "LSE_VALUE=32768", "HSI_VALUE=8000000", "LSI_VALUE=40000", "_IAR_", "__ICCARM__", "_Pragma(x)=", "__interrupt=", "__packed=__attribute__((__packed__))", "__weak=__attribute__((weak))" }
  forceincludes { "" }
  includedirs { "../Drivers/STM32F1xx_HAL_Driver/Inc", "../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy", "../Drivers/STM32F1xx_HAL_Driver/Src", "../Drivers/CMSIS/Include", "../Complier", "../STARTUP", "../STM32F1xx", "../Doc", "../Application/AD5593", "../Application/ADC", "../Application/ADS8688", "../Application/APP", "../Application/AT24Cxx", "../Application/CRC", "../Application/Delay", "../Application/DHT11", "../Application/DS18B20", "../Application/EEPROM", "../Application/FLASH", "../Application/GPIO", "../Application/HMC830", "../Application/I2C", "../Application/IAP", "../Application/ISP", "../Application/IWDG", "../Application/Key", "../Application/LED", "../Application/LCD1602", "../Application/OneWire", "../Application/PCF8563", "../Application/Power", "../Application/Random", "../Application/RFASK", "../Application/SPI", "../Application/SysTick", "../Application/Timer", "../Application/USART", "../Application/WM8510", "../Application/NRF2401", "../Application/OLED", "../Application/WWDG", "../Application/SHT2x", "../Application/BKP", "../Application/CSS", "../Application/Decode", "../Application/W25Qxx", "../Application/DS1302", "../Application/RFASKHW", "../Application/ENC28J60", "../Application/PID", "../Application/ADS1256", "../Application/PVD", "../Application/RTC", "../Application/MyMalloc", "../Application/Encode" }
  files { "../Application/AD5593/ad5593_cfg.c", "../Application/AD5593/ad5593_cfg.h", "../Application/AD5593/ad5593_lib.c", "../Application/AD5593/ad5593_lib.h", "../Application/AD5593/ad5593_task.c", "../Application/AD5593/ad5593_task.h", "../Application/ADC/adc_cfg.c", "../Application/ADC/adc_cfg.h", "../Application/ADC/adc_lib.c", "../Application/ADC/adc_lib.h", "../Application/ADC/adc_task.c", "../Application/ADC/adc_task.h", "../Application/ADS1256/ads1256_cfg.c", "../Application/ADS1256/ads1256_cfg.h", "../Application/ADS1256/ads1256_lib.c", "../Application/ADS1256/ads1256_lib.h", "../Application/ADS1256/ads1256_task.c", "../Application/ADS1256/ads1256_task.h", "../Application/ADS8688/ads8688_cfg.c", "../Application/ADS8688/ads8688_cfg.h", "../Application/ADS8688/ads8688_lib.c", "../Application/ADS8688/ads8688_lib.h", "../Application/ADS8688/ads8688_task.c", "../Application/ADS8688/ads8688_task.h", "../Application/APP/config.h", "../Application/APP/main.c", "../Application/APP/main.h", "../Application/AT24Cxx/at24cxx_cfg.c", "../Application/AT24Cxx/at24cxx_cfg.h", "../Application/AT24Cxx/at24cxx_lib.c", "../Application/AT24Cxx/at24cxx_lib.h", "../Application/AT24Cxx/at24cxx_task.c", "../Application/AT24Cxx/at24cxx_task.h", "../Application/BKP/bkp_cfg.c", "../Application/BKP/bkp_cfg.h", "../Application/BKP/bkp_lib.c", "../Application/BKP/bkp_lib.h", "../Application/BKP/bkp_task.c", "../Application/BKP/bkp_task.h", "../Application/CRC/crc_cfg.c", "../Application/CRC/crc_cfg.h", "../Application/CRC/crc_lib.c", "../Application/CRC/crc_lib.h", "../Application/CRC/crc_task.c", "../Application/CRC/crc_task.h", "../Application/CSS/css_cfg.c", "../Application/CSS/css_cfg.h", "../Application/CSS/css_lib.c", "../Application/CSS/css_lib.h", "../Application/CSS/css_task.c", "../Application/CSS/css_task.h", "../Application/Decode/decode_cfg.c", "../Application/Decode/decode_cfg.h", "../Application/Decode/decode_lib.c", "../Application/Decode/decode_lib.h", "../Application/Decode/decode_task.c", "../Application/Decode/decode_task.h", "../Application/Delay/delay_cfg.c", "../Application/Delay/delay_cfg.h", "../Application/Delay/delay_lib.c", "../Application/Delay/delay_lib.h", "../Application/Delay/delay_task.c", "../Application/Delay/delay_task.h", "../Application/DHT11/dht11_cfg.c", "../Application/DHT11/dht11_cfg.h", "../Application/DHT11/dht11_lib.c", "../Application/DHT11/dht11_lib.h", "../Application/DHT11/dht11_task.c", "../Application/DHT11/dht11_task.h", "../Application/DS1302/ds1302_cfg.c", "../Application/DS1302/ds1302_cfg.h", "../Application/DS1302/ds1302_lib.c", "../Application/DS1302/ds1302_lib.h", "../Application/DS1302/ds1302_task.c", "../Application/DS1302/ds1302_task.h", "../Application/DS18B20/ds18b20_cfg.c", "../Application/DS18B20/ds18b20_cfg.h", "../Application/DS18B20/ds18b20_lib.c", "../Application/DS18B20/ds18b20_lib.h", "../Application/DS18B20/ds18b20_task.c", "../Application/DS18B20/ds18b20_task.h", "../Application/EEPROM/eeprom_cfg.c", "../Application/EEPROM/eeprom_cfg.h", "../Application/EEPROM/eeprom_lib.c", "../Application/EEPROM/eeprom_lib.h", "../Application/EEPROM/eeprom_task.c", "../Application/EEPROM/eeprom_task.h", "../Application/ENC28J60/enc28j60_cfg.c", "../Application/ENC28J60/enc28j60_cfg.h", "../Application/ENC28J60/enc28j60_lib.c", "../Application/ENC28J60/enc28j60_lib.h", "../Application/ENC28J60/enc28j60_task.c", "../Application/ENC28J60/enc28j60_task.h", "../Application/Encode/encode_cfg.c", "../Application/Encode/encode_cfg.h", "../Application/Encode/encode_lib.c", "../Application/Encode/encode_lib.h", "../Application/Encode/encode_task.c", "../Application/Encode/encode_task.h", "../Application/FLASH/flash_cfg.c", "../Application/FLASH/flash_cfg.h", "../Application/FLASH/flash_lib.c", "../Application/FLASH/flash_lib.h", "../Application/FLASH/flash_task.c", "../Application/FLASH/flash_task.h", "../Application/GPIO/gpio_cfg.c", "../Application/GPIO/gpio_cfg.h", "../Application/GPIO/gpio_lib.c", "../Application/GPIO/gpio_lib.h", "../Application/GPIO/gpio_task.c", "../Application/GPIO/gpio_task.h", "../Application/HMC472/hmc472_cfg.c", "../Application/HMC472/hmc472_cfg.h", "../Application/HMC472/hmc472_lib.c", "../Application/HMC472/hmc472_lib.h", "../Application/HMC472/hmc472_task.c", "../Application/HMC472/hmc472_task.h", "../Application/HMC830/hmc830_cfg.c", "../Application/HMC830/hmc830_cfg.h", "../Application/HMC830/hmc830_lib.c", "../Application/HMC830/hmc830_lib.h", "../Application/HMC830/hmc830_task.c", "../Application/HMC830/hmc830_task.h", "../Application/I2C/i2c_cfg.c", "../Application/I2C/i2c_cfg.h", "../Application/I2C/i2c_lib.c", "../Application/I2C/i2c_lib.h", "../Application/I2C/i2c_task.c", "../Application/I2C/i2c_task.h", "../Application/IAP/iap_cfg.c", "../Application/IAP/iap_cfg.h", "../Application/IAP/iap_lib.c", "../Application/IAP/iap_lib.h", "../Application/IAP/iap_task.c", "../Application/IAP/iap_task.h", "../Application/ISP/isp_cfg.c", "../Application/ISP/isp_cfg.h", "../Application/ISP/isp_lib.c", "../Application/ISP/isp_lib.h", "../Application/ISP/isp_task.c", "../Application/ISP/isp_task.h", "../Application/IWDG/iwdg_cfg.c", "../Application/IWDG/iwdg_cfg.h", "../Application/IWDG/iwdg_lib.c", "../Application/IWDG/iwdg_lib.h", "../Application/IWDG/iwdg_task.c", "../Application/IWDG/iwdg_task.h", "../Application/Key/key_cfg.c", "../Application/Key/key_cfg.h", "../Application/Key/key_lib.c", "../Application/Key/key_lib.h", "../Application/Key/key_task.c", "../Application/Key/key_task.h", "../Application/LCD1602/lcd1602_cfg.c", "../Application/LCD1602/lcd1602_cfg.h", "../Application/LCD1602/lcd1602_lib.c", "../Application/LCD1602/lcd1602_lib.h", "../Application/LCD1602/lcd1602_task.c", "../Application/LCD1602/lcd1602_task.h", "../Application/LED/led_cfg.c", "../Application/LED/led_cfg.h", "../Application/LED/led_lib.c", "../Application/LED/led_lib.h", "../Application/LED/led_task.c", "../Application/LED/led_task.h", "../Application/MyMalloc/my_malloc.c", "../Application/MyMalloc/my_malloc.h", "../Application/NRF2401/nrf2401_cfg.c", "../Application/NRF2401/nrf2401_cfg.h", "../Application/NRF2401/nrf2401_lib.c", "../Application/NRF2401/nrf2401_lib.h", "../Application/NRF2401/nrf2401_task.c", "../Application/NRF2401/nrf2401_task.h", "../Application/OLED/oled_cfg.c", "../Application/OLED/oled_cfg.h", "../Application/OLED/oled_lib.c", "../Application/OLED/oled_lib.h", "../Application/OLED/oled_task.c", "../Application/OLED/oled_task.h", "../Application/OneWire/one_wire_cfg.c", "../Application/OneWire/one_wire_cfg.h", "../Application/OneWire/one_wire_lib.c", "../Application/OneWire/one_wire_lib.h", "../Application/OneWire/one_wire_task.c", "../Application/OneWire/one_wire_task.h", "../Application/PCF8563/pcf8563_cfg.c", "../Application/PCF8563/pcf8563_cfg.h", "../Application/PCF8563/pcf8563_lib.c", "../Application/PCF8563/pcf8563_lib.h", "../Application/PCF8563/pcf8563_task.c", "../Application/PCF8563/pcf8563_task.h", "../Application/PID/pid_cfg.c", "../Application/PID/pid_cfg.h", "../Application/PID/pid_lib.c", "../Application/PID/pid_lib.h", "../Application/PID/pid_task.c", "../Application/PID/pid_task.h", "../Application/Power/power_cfg.c", "../Application/Power/power_cfg.h", "../Application/Power/power_lib.c", "../Application/Power/power_lib.h", "../Application/Power/power_task.c", "../Application/Power/power_task.h", "../Application/PVD/pvd_cfg.c", "../Application/PVD/pvd_cfg.h", "../Application/PVD/pvd_lib.c", "../Application/PVD/pvd_lib.h", "../Application/PVD/pvd_task.c", "../Application/PVD/pvd_task.h", "../Application/Random/random_cfg.c", "../Application/Random/random_cfg.h", "../Application/Random/random_lib.c", "../Application/Random/random_lib.h", "../Application/Random/random_task.c", "../Application/Random/random_task.h", "../Application/RFASK/rfask_cfg.c", "../Application/RFASK/rfask_cfg.h", "../Application/RFASK/rfask_eeprom.c", "../Application/RFASK/rfask_eeprom.h", "../Application/RFASK/rfask_lib.c", "../Application/RFASK/rfask_lib.h", "../Application/RFASK/rfask_task.c", "../Application/RFASK/rfask_task.h", "../Application/RFASKHW/rfaskhw_cfg.c", "../Application/RFASKHW/rfaskhw_cfg.h", "../Application/RTC/rtc_cfg.c", "../Application/RTC/rtc_cfg.h", "../Application/RTC/rtc_lib.c", "../Application/RTC/rtc_lib.h", "../Application/RTC/rtc_task.c", "../Application/RTC/rtc_task.h", "../Application/SHT2x/sht2x_cfg.c", "../Application/SHT2x/sht2x_cfg.h", "../Application/SHT2x/sht2x_lib.c", "../Application/SHT2x/sht2x_lib.h", "../Application/SHT2x/sht2x_task.c", "../Application/SHT2x/sht2x_task.h", "../Application/SPI/spi_cfg.c", "../Application/SPI/spi_cfg.h", "../Application/SPI/spi_lib.c", "../Application/SPI/spi_lib.h", "../Application/SPI/spi_task.c", "../Application/SPI/spi_task.h", "../Application/SysTick/systick_cfg.c", "../Application/SysTick/systick_cfg.h", "../Application/SysTick/systick_lib.c", "../Application/SysTick/systick_lib.h", "../Application/SysTick/systick_task.c", "../Application/SysTick/systick_task.h", "../Application/Timer/timer_cfg.c", "../Application/Timer/timer_cfg.h", "../Application/Timer/timer_lib.c", "../Application/Timer/timer_lib.h", "../Application/Timer/timer_task.c", "../Application/Timer/timer_task.h", "../Application/USART/usart_cfg.c", "../Application/USART/usart_cfg.h", "../Application/USART/usart_dma_cfg.c", "../Application/USART/usart_dma_cfg.h", "../Application/USART/usart_dma_lib.c", "../Application/USART/usart_dma_lib.h", "../Application/USART/usart_dma_task.c", "../Application/USART/usart_dma_task.h", "../Application/USART/usart_lib.c", "../Application/USART/usart_lib.h", "../Application/USART/usart_task.c", "../Application/USART/usart_task.h", "../Application/W25Qxx/w25qxx_cfg.c", "../Application/W25Qxx/w25qxx_cfg.h", "../Application/W25Qxx/w25qxx_lib.c", "../Application/W25Qxx/w25qxx_lib.h", "../Application/W25Qxx/w25qxx_task.c", "../Application/W25Qxx/w25qxx_task.h", "../Application/WM8510/wm8510_cfg.c", "../Application/WM8510/wm8510_cfg.h", "../Application/WM8510/wm8510_lib.c", "../Application/WM8510/wm8510_lib.h", "../Application/WM8510/wm8510_task.c", "../Application/WM8510/wm8510_task.h", "../Application/WWDG/wwdg_cfg.c", "../Application/WWDG/wwdg_cfg.h", "../Application/WWDG/wwdg_lib.c", "../Application/WWDG/wwdg_lib.h", "../Application/WWDG/wwdg_task.c", "../Application/WWDG/wwdg_task.h", "../Complier/complier_cfg.c", "../Complier/complier_cfg.h", "../Complier/complier_lib.c", "../Complier/complier_lib.h", "../Doc/ReadMe.txt", "../STM32F1xx/system_stm32f1xx.c", "../STM32F1xx/system_stm32f1xx.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_adc.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_adc.h", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_bus.h", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_cortex.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_crc.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_crc.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_dma.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_dma.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_exti.c", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_gpio.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_gpio.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_i2c.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_iwdg.h", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_pwr.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_rcc.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_rcc.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_sdmmc.c", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_spi.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_spi.h", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_system.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_tim.c", "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_tim.h", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_usart.c", "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_utils.c", "../STARTUP/EWARM/startup_stm32f103xg.s", "../STM32F1xx/stm32_assert.h", "../STM32F1xx/stm32_cfg.c", "../STM32F1xx/stm32_cfg.h", "../STM32F1xx/stm32f103xg.h", "../STM32F1xx/stm32f1xx.h", "../STM32F1xx/stm32f1xx_it.c", "../STM32F1xx/stm32f1xx_it.h", "../STM32F1xx/stm32f1xx_ll.h" }
  vpaths {["Application"] = { "" } , ["Application/AD5593"] = { "../Application/AD5593/ad5593_cfg.c" , "../Application/AD5593/ad5593_cfg.h" , "../Application/AD5593/ad5593_lib.c" , "../Application/AD5593/ad5593_lib.h" , "../Application/AD5593/ad5593_task.c" , "../Application/AD5593/ad5593_task.h" } , ["Application/ADC"] = { "../Application/ADC/adc_cfg.c" , "../Application/ADC/adc_cfg.h" , "../Application/ADC/adc_lib.c" , "../Application/ADC/adc_lib.h" , "../Application/ADC/adc_task.c" , "../Application/ADC/adc_task.h" } , ["Application/ADS1256"] = { "../Application/ADS1256/ads1256_cfg.c" , "../Application/ADS1256/ads1256_cfg.h" , "../Application/ADS1256/ads1256_lib.c" , "../Application/ADS1256/ads1256_lib.h" , "../Application/ADS1256/ads1256_task.c" , "../Application/ADS1256/ads1256_task.h" } , ["Application/ADS8688"] = { "../Application/ADS8688/ads8688_cfg.c" , "../Application/ADS8688/ads8688_cfg.h" , "../Application/ADS8688/ads8688_lib.c" , "../Application/ADS8688/ads8688_lib.h" , "../Application/ADS8688/ads8688_task.c" , "../Application/ADS8688/ads8688_task.h" } , ["Application/APP"] = { "../Application/APP/config.h" , "../Application/APP/main.c" , "../Application/APP/main.h" } , ["Application/AT24Cxx"] = { "../Application/AT24Cxx/at24cxx_cfg.c" , "../Application/AT24Cxx/at24cxx_cfg.h" , "../Application/AT24Cxx/at24cxx_lib.c" , "../Application/AT24Cxx/at24cxx_lib.h" , "../Application/AT24Cxx/at24cxx_task.c" , "../Application/AT24Cxx/at24cxx_task.h" } , ["Application/BKP"] = { "../Application/BKP/bkp_cfg.c" , "../Application/BKP/bkp_cfg.h" , "../Application/BKP/bkp_lib.c" , "../Application/BKP/bkp_lib.h" , "../Application/BKP/bkp_task.c" , "../Application/BKP/bkp_task.h" } , ["Application/CRC"] = { "../Application/CRC/crc_cfg.c" , "../Application/CRC/crc_cfg.h" , "../Application/CRC/crc_lib.c" , "../Application/CRC/crc_lib.h" , "../Application/CRC/crc_task.c" , "../Application/CRC/crc_task.h" } , ["Application/CSS"] = { "../Application/CSS/css_cfg.c" , "../Application/CSS/css_cfg.h" , "../Application/CSS/css_lib.c" , "../Application/CSS/css_lib.h" , "../Application/CSS/css_task.c" , "../Application/CSS/css_task.h" } , ["Application/Decode"] = { "../Application/Decode/decode_cfg.c" , "../Application/Decode/decode_cfg.h" , "../Application/Decode/decode_lib.c" , "../Application/Decode/decode_lib.h" , "../Application/Decode/decode_task.c" , "../Application/Decode/decode_task.h" } , ["Application/Delay"] = { "../Application/Delay/delay_cfg.c" , "../Application/Delay/delay_cfg.h" , "../Application/Delay/delay_lib.c" , "../Application/Delay/delay_lib.h" , "../Application/Delay/delay_task.c" , "../Application/Delay/delay_task.h" } , ["Application/DHT11"] = { "../Application/DHT11/dht11_cfg.c" , "../Application/DHT11/dht11_cfg.h" , "../Application/DHT11/dht11_lib.c" , "../Application/DHT11/dht11_lib.h" , "../Application/DHT11/dht11_task.c" , "../Application/DHT11/dht11_task.h" } , ["Application/DS1302"] = { "../Application/DS1302/ds1302_cfg.c" , "../Application/DS1302/ds1302_cfg.h" , "../Application/DS1302/ds1302_lib.c" , "../Application/DS1302/ds1302_lib.h" , "../Application/DS1302/ds1302_task.c" , "../Application/DS1302/ds1302_task.h" } , ["Application/DS18B20"] = { "../Application/DS18B20/ds18b20_cfg.c" , "../Application/DS18B20/ds18b20_cfg.h" , "../Application/DS18B20/ds18b20_lib.c" , "../Application/DS18B20/ds18b20_lib.h" , "../Application/DS18B20/ds18b20_task.c" , "../Application/DS18B20/ds18b20_task.h" } , ["Application/EEPROM"] = { "../Application/EEPROM/eeprom_cfg.c" , "../Application/EEPROM/eeprom_cfg.h" , "../Application/EEPROM/eeprom_lib.c" , "../Application/EEPROM/eeprom_lib.h" , "../Application/EEPROM/eeprom_task.c" , "../Application/EEPROM/eeprom_task.h" } , ["Application/ENC28J60"] = { "../Application/ENC28J60/enc28j60_cfg.c" , "../Application/ENC28J60/enc28j60_cfg.h" , "../Application/ENC28J60/enc28j60_lib.c" , "../Application/ENC28J60/enc28j60_lib.h" , "../Application/ENC28J60/enc28j60_task.c" , "../Application/ENC28J60/enc28j60_task.h" } , ["Application/Encode"] = { "../Application/Encode/encode_cfg.c" , "../Application/Encode/encode_cfg.h" , "../Application/Encode/encode_lib.c" , "../Application/Encode/encode_lib.h" , "../Application/Encode/encode_task.c" , "../Application/Encode/encode_task.h" } , ["Application/FLASH"] = { "../Application/FLASH/flash_cfg.c" , "../Application/FLASH/flash_cfg.h" , "../Application/FLASH/flash_lib.c" , "../Application/FLASH/flash_lib.h" , "../Application/FLASH/flash_task.c" , "../Application/FLASH/flash_task.h" } , ["Application/GPIO"] = { "../Application/GPIO/gpio_cfg.c" , "../Application/GPIO/gpio_cfg.h" , "../Application/GPIO/gpio_lib.c" , "../Application/GPIO/gpio_lib.h" , "../Application/GPIO/gpio_task.c" , "../Application/GPIO/gpio_task.h" } , ["Application/HMC472"] = { "../Application/HMC472/hmc472_cfg.c" , "../Application/HMC472/hmc472_cfg.h" , "../Application/HMC472/hmc472_lib.c" , "../Application/HMC472/hmc472_lib.h" , "../Application/HMC472/hmc472_task.c" , "../Application/HMC472/hmc472_task.h" } , ["Application/HMC830"] = { "../Application/HMC830/hmc830_cfg.c" , "../Application/HMC830/hmc830_cfg.h" , "../Application/HMC830/hmc830_lib.c" , "../Application/HMC830/hmc830_lib.h" , "../Application/HMC830/hmc830_task.c" , "../Application/HMC830/hmc830_task.h" } , ["Application/I2C"] = { "../Application/I2C/i2c_cfg.c" , "../Application/I2C/i2c_cfg.h" , "../Application/I2C/i2c_lib.c" , "../Application/I2C/i2c_lib.h" , "../Application/I2C/i2c_task.c" , "../Application/I2C/i2c_task.h" } , ["Application/IAP"] = { "../Application/IAP/iap_cfg.c" , "../Application/IAP/iap_cfg.h" , "../Application/IAP/iap_lib.c" , "../Application/IAP/iap_lib.h" , "../Application/IAP/iap_task.c" , "../Application/IAP/iap_task.h" } , ["Application/ISP"] = { "../Application/ISP/isp_cfg.c" , "../Application/ISP/isp_cfg.h" , "../Application/ISP/isp_lib.c" , "../Application/ISP/isp_lib.h" , "../Application/ISP/isp_task.c" , "../Application/ISP/isp_task.h" } , ["Application/IWDG"] = { "../Application/IWDG/iwdg_cfg.c" , "../Application/IWDG/iwdg_cfg.h" , "../Application/IWDG/iwdg_lib.c" , "../Application/IWDG/iwdg_lib.h" , "../Application/IWDG/iwdg_task.c" , "../Application/IWDG/iwdg_task.h" } , ["Application/Key"] = { "../Application/Key/key_cfg.c" , "../Application/Key/key_cfg.h" , "../Application/Key/key_lib.c" , "../Application/Key/key_lib.h" , "../Application/Key/key_task.c" , "../Application/Key/key_task.h" } , ["Application/LCD1602"] = { "../Application/LCD1602/lcd1602_cfg.c" , "../Application/LCD1602/lcd1602_cfg.h" , "../Application/LCD1602/lcd1602_lib.c" , "../Application/LCD1602/lcd1602_lib.h" , "../Application/LCD1602/lcd1602_task.c" , "../Application/LCD1602/lcd1602_task.h" } , ["Application/LED"] = { "../Application/LED/led_cfg.c" , "../Application/LED/led_cfg.h" , "../Application/LED/led_lib.c" , "../Application/LED/led_lib.h" , "../Application/LED/led_task.c" , "../Application/LED/led_task.h" } , ["Application/MyMalloc"] = { "../Application/MyMalloc/my_malloc.c" , "../Application/MyMalloc/my_malloc.h" } , ["Application/NRF2401"] = { "../Application/NRF2401/nrf2401_cfg.c" , "../Application/NRF2401/nrf2401_cfg.h" , "../Application/NRF2401/nrf2401_lib.c" , "../Application/NRF2401/nrf2401_lib.h" , "../Application/NRF2401/nrf2401_task.c" , "../Application/NRF2401/nrf2401_task.h" } , ["Application/OLED"] = { "../Application/OLED/oled_cfg.c" , "../Application/OLED/oled_cfg.h" , "../Application/OLED/oled_lib.c" , "../Application/OLED/oled_lib.h" , "../Application/OLED/oled_task.c" , "../Application/OLED/oled_task.h" } , ["Application/OneWire"] = { "../Application/OneWire/one_wire_cfg.c" , "../Application/OneWire/one_wire_cfg.h" , "../Application/OneWire/one_wire_lib.c" , "../Application/OneWire/one_wire_lib.h" , "../Application/OneWire/one_wire_task.c" , "../Application/OneWire/one_wire_task.h" } , ["Application/PCF8563"] = { "../Application/PCF8563/pcf8563_cfg.c" , "../Application/PCF8563/pcf8563_cfg.h" , "../Application/PCF8563/pcf8563_lib.c" , "../Application/PCF8563/pcf8563_lib.h" , "../Application/PCF8563/pcf8563_task.c" , "../Application/PCF8563/pcf8563_task.h" } , ["Application/PID"] = { "../Application/PID/pid_cfg.c" , "../Application/PID/pid_cfg.h" , "../Application/PID/pid_lib.c" , "../Application/PID/pid_lib.h" , "../Application/PID/pid_task.c" , "../Application/PID/pid_task.h" } , ["Application/Power"] = { "../Application/Power/power_cfg.c" , "../Application/Power/power_cfg.h" , "../Application/Power/power_lib.c" , "../Application/Power/power_lib.h" , "../Application/Power/power_task.c" , "../Application/Power/power_task.h" } , ["Application/PVD"] = { "../Application/PVD/pvd_cfg.c" , "../Application/PVD/pvd_cfg.h" , "../Application/PVD/pvd_lib.c" , "../Application/PVD/pvd_lib.h" , "../Application/PVD/pvd_task.c" , "../Application/PVD/pvd_task.h" } , ["Application/Random"] = { "../Application/Random/random_cfg.c" , "../Application/Random/random_cfg.h" , "../Application/Random/random_lib.c" , "../Application/Random/random_lib.h" , "../Application/Random/random_task.c" , "../Application/Random/random_task.h" } , ["Application/RFASK"] = { "../Application/RFASK/rfask_cfg.c" , "../Application/RFASK/rfask_cfg.h" , "../Application/RFASK/rfask_eeprom.c" , "../Application/RFASK/rfask_eeprom.h" , "../Application/RFASK/rfask_lib.c" , "../Application/RFASK/rfask_lib.h" , "../Application/RFASK/rfask_task.c" , "../Application/RFASK/rfask_task.h" } , ["Application/RFASKHW"] = { "../Application/RFASKHW/rfaskhw_cfg.c" , "../Application/RFASKHW/rfaskhw_cfg.h" } , ["Application/RTC"] = { "../Application/RTC/rtc_cfg.c" , "../Application/RTC/rtc_cfg.h" , "../Application/RTC/rtc_lib.c" , "../Application/RTC/rtc_lib.h" , "../Application/RTC/rtc_task.c" , "../Application/RTC/rtc_task.h" } , ["Application/SHT2x"] = { "../Application/SHT2x/sht2x_cfg.c" , "../Application/SHT2x/sht2x_cfg.h" , "../Application/SHT2x/sht2x_lib.c" , "../Application/SHT2x/sht2x_lib.h" , "../Application/SHT2x/sht2x_task.c" , "../Application/SHT2x/sht2x_task.h" } , ["Application/SPI"] = { "../Application/SPI/spi_cfg.c" , "../Application/SPI/spi_cfg.h" , "../Application/SPI/spi_lib.c" , "../Application/SPI/spi_lib.h" , "../Application/SPI/spi_task.c" , "../Application/SPI/spi_task.h" } , ["Application/SysTick"] = { "../Application/SysTick/systick_cfg.c" , "../Application/SysTick/systick_cfg.h" , "../Application/SysTick/systick_lib.c" , "../Application/SysTick/systick_lib.h" , "../Application/SysTick/systick_task.c" , "../Application/SysTick/systick_task.h" } , ["Application/Timer"] = { "../Application/Timer/timer_cfg.c" , "../Application/Timer/timer_cfg.h" , "../Application/Timer/timer_lib.c" , "../Application/Timer/timer_lib.h" , "../Application/Timer/timer_task.c" , "../Application/Timer/timer_task.h" } , ["Application/USART"] = { "../Application/USART/usart_cfg.c" , "../Application/USART/usart_cfg.h" , "../Application/USART/usart_dma_cfg.c" , "../Application/USART/usart_dma_cfg.h" , "../Application/USART/usart_dma_lib.c" , "../Application/USART/usart_dma_lib.h" , "../Application/USART/usart_dma_task.c" , "../Application/USART/usart_dma_task.h" , "../Application/USART/usart_lib.c" , "../Application/USART/usart_lib.h" , "../Application/USART/usart_task.c" , "../Application/USART/usart_task.h" } , ["Application/W25Qxx"] = { "../Application/W25Qxx/w25qxx_cfg.c" , "../Application/W25Qxx/w25qxx_cfg.h" , "../Application/W25Qxx/w25qxx_lib.c" , "../Application/W25Qxx/w25qxx_lib.h" , "../Application/W25Qxx/w25qxx_task.c" , "../Application/W25Qxx/w25qxx_task.h" } , ["Application/WM8510"] = { "../Application/WM8510/wm8510_cfg.c" , "../Application/WM8510/wm8510_cfg.h" , "../Application/WM8510/wm8510_lib.c" , "../Application/WM8510/wm8510_lib.h" , "../Application/WM8510/wm8510_task.c" , "../Application/WM8510/wm8510_task.h" } , ["Application/WWDG"] = { "../Application/WWDG/wwdg_cfg.c" , "../Application/WWDG/wwdg_cfg.h" , "../Application/WWDG/wwdg_lib.c" , "../Application/WWDG/wwdg_lib.h" , "../Application/WWDG/wwdg_task.c" , "../Application/WWDG/wwdg_task.h" } , ["Complier"] = { "../Complier/complier_cfg.c" , "../Complier/complier_cfg.h" , "../Complier/complier_lib.c" , "../Complier/complier_lib.h" } , ["Doc"] = { "../Doc/ReadMe.txt" } , ["Drivers"] = { "" } , ["Drivers/CMSIS"] = { "../STM32F1xx/system_stm32f1xx.c" , "../STM32F1xx/system_stm32f1xx.h" } , ["Drivers/STM32F1xx_HAL_Driver"] = { "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_hal.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_hal.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_adc.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_adc.h" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_bus.h" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_cortex.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_crc.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_crc.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_dma.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_dma.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_exti.c" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_gpio.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_gpio.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_i2c.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_iwdg.h" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_pwr.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_rcc.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_rcc.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_sdmmc.c" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_spi.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_spi.h" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_system.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_tim.c" , "../Drivers/STM32F1xx_HAL_Driver/Inc/stm32f1xx_ll_tim.h" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_usart.c" , "../Drivers/STM32F1xx_HAL_Driver/Src/stm32f1xx_ll_utils.c" } , ["STARTUP"] = { "" } , ["STARTUP/EWARM"] = { "../STARTUP/EWARM/startup_stm32f103xg.s" } , ["STM32F1xx"] = { "../STM32F1xx/stm32_assert.h" , "../STM32F1xx/stm32_cfg.c" , "../STM32F1xx/stm32_cfg.h" , "../STM32F1xx/stm32f103xg.h" , "../STM32F1xx/stm32f1xx.h" , "../STM32F1xx/stm32f1xx_it.c" , "../STM32F1xx/stm32f1xx_it.h" , "../STM32F1xx/stm32f1xx_ll.h" } }
