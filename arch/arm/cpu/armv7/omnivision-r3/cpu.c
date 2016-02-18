#include <common.h>
#include <asm/io.h>

int arch_cpu_init(void)
{
	return 0;
}

void arch_preboot_os(void)
{
}

#if defined(CONFIG_DISPLAY_CPUINFO)
int print_cpuinfo(void)
{
	printf("CPU: OV798\n");

	return 0;
}
#endif

void enable_caches(void)
{
	//TODO
	//icache_enable();
	//dcache_enable();
}
