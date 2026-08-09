#pragma once

#include <android/log.h>
#include <cerrno>
#include <cstring>
#include <string>

#ifndef LOG_TAG
# define LOG_TAG "KernelSU"
#endif

/*
 * Logging is globally silenced: all LOG* macros are no-ops so the native
 * layer produces zero logcat output (no __android_log_print calls).
 */
#define LOGD(...)
#define LOGV(...)
#define LOGI(...)
#define LOGW(...)
#define LOGE(...)
#define LOGF(...)
#define PLOGE(fmt, args...) do { } while (0)
