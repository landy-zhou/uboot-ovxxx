#include <common.h>
#include <asm/io.h>

DECLARE_GLOBAL_DATA_PTR;

int timer_init(void)
{
	//TODO: set tick to 100Hz

	gd->arch.timer_rate_hz = 100;

	return 0;
}

/*
 * Return the number of timer ticks per second.
 */
ulong get_tbclk(void)
{
	return gd->arch.timer_rate_hz;
}

/* override */
void __udelay(unsigned long usec)
{
	volatile int d;
	for(d=0; d<usec/50; d++);
}
