#ifndef _TC_CORE_H_
#define _TC_CORE_H_ 1

#include <asm/types.h>
#include <linux/pkt_sched.h>

#define TIME_UNITS_PER_SEC	1000000

int  tc_core_time2big(long time);
unsigned tc_core_time2tick(unsigned time);
unsigned tc_core_tick2time(unsigned tick);
unsigned tc_core_time2ktime(unsigned time);
unsigned tc_core_ktime2time(unsigned ktime);
unsigned tc_calc_xmittime(unsigned rate, unsigned size);
unsigned tc_calc_xmitsize(unsigned rate, unsigned ticks);
int tc_calc_rtable(unsigned bps, __u32 *rtab, int cell_log, unsigned mtu, unsigned mpu);

int tc_setup_estimator(unsigned A, unsigned time_const, struct tc_estimator *est);

int tc_core_init(void);

extern struct rtnl_handle g_rth;
extern int is_batch_mode;

#endif
