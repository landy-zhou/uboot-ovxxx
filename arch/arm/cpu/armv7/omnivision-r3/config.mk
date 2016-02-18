ifeq ($(CONFIG_CPU_V7),y)
ifndef CONFIG_SPL_BUILD
ALL-y	+= u-boot.img
endif
endif
