

## WARNING! DO NOT change this lists order because power sleep order depends on it!! ##

obj-y += setup.o 
obj-y += reset.o 
obj-y += timer.o
#maintimer.o cpu0timer.o cpu1timer.o 
obj-y += serial.o 
obj-y += tcu.o
obj-y += jzcpm_pwc.o
obj-$(CONFIG_USB) += cpm_usb.o

ifeq ($(CONFIG_FPGA_TEST),y)
obj-y += clk_fpga.o
else
obj-y += clk.o
endif

obj-y += random.o

obj-y += gpio.o 
# only for debug
#obj-y += pmmon.o 
obj-y += irq.o 

obj-y += platform.o

ifeq ($(CONFIG_PM_POWERDOWN_P0),y)
obj-y += pm_p0.o
else
obj-y += pm.o
endif

obj-$(CONFIG_CPU_FREQ) += cpufreq.o

obj-$(CONFIG_DWC_LM_INTERFACE)  += lm.o lm-device.o

obj-y += ahbm.o 

ifneq ($(CONFIG_NAND), y)
obj-y += gpemc.o

obj-y += bch.o
endif

ifeq ($(CONFIG_HIBERNATION), y)
obj-y += hibernate.o
endif
