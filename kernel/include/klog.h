#ifndef __KSU_H_KLOG
#define __KSU_H_KLOG

#include <linux/printk.h>

#ifdef pr_fmt
#undef pr_fmt
#define pr_fmt(fmt) "KernelSU: " fmt
#endif

/*
 * Global log silencing.
 *
 * All pr_* log macros are redefined as no-ops so the kernel module
 * produces zero log output (no dmesg / logcat noise).
 * The `no_printk` style keeps compile-time type checking of arguments
 * while generating no runtime output, and avoids unused-variable
 * warnings in -Werror builds.
 */
#undef pr_emerg
#undef pr_alert
#undef pr_crit
#undef pr_err
#undef pr_warning
#undef pr_warn
#undef pr_notice
#undef pr_info
#undef pr_debug
#undef pr_devel
#undef pr_cont
#undef pr_emerg_ratelimited
#undef pr_alert_ratelimited
#undef pr_crit_ratelimited
#undef pr_err_ratelimited
#undef pr_warn_ratelimited
#undef pr_notice_ratelimited
#undef pr_info_ratelimited
#undef pr_debug_ratelimited
#undef pr_emerg_once
#undef pr_alert_once
#undef pr_crit_once
#undef pr_err_once
#undef pr_warn_once
#undef pr_notice_once
#undef pr_info_once
#undef pr_debug_once

#define pr_emerg(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_alert(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_crit(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_err(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_warning(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_warn(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_notice(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_info(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_debug(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_devel(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_cont(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_emerg_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_alert_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_crit_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_err_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_warn_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_notice_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_info_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_debug_ratelimited(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_emerg_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_alert_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_crit_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_err_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_warn_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_notice_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_info_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)
#define pr_debug_once(fmt, ...) no_printk(fmt, ##__VA_ARGS__)

#endif
