package me.weishu.kernelsu.log

/**
 * Logging is globally silenced.
 *
 * Drop-in replacement for `android.util.Log`: every log method is a no-op,
 * so the app produces zero logcat output. `getStackTraceString` keeps its
 * original behavior because it is used to render error pages in the UI.
 */
object Log {
    @JvmStatic
    fun v(tag: String, msg: String): Int = 0
    @JvmStatic
    fun v(tag: String, msg: String, tr: Throwable): Int = 0
    @JvmStatic
    fun d(tag: String, msg: String): Int = 0
    @JvmStatic
    fun d(tag: String, msg: String, tr: Throwable): Int = 0
    @JvmStatic
    fun i(tag: String, msg: String): Int = 0
    @JvmStatic
    fun i(tag: String, msg: String, tr: Throwable): Int = 0
    @JvmStatic
    fun w(tag: String, msg: String): Int = 0
    @JvmStatic
    fun w(tag: String, tr: Throwable): Int = 0
    @JvmStatic
    fun w(tag: String, msg: String, tr: Throwable): Int = 0
    @JvmStatic
    fun e(tag: String, msg: String): Int = 0
    @JvmStatic
    fun e(tag: String, tr: Throwable): Int = 0
    @JvmStatic
    fun e(tag: String, msg: String, tr: Throwable): Int = 0
    @JvmStatic
    fun wtf(tag: String, msg: String): Int = 0
    @JvmStatic
    fun wtf(tag: String, msg: String, tr: Throwable): Int = 0
    @JvmStatic
    fun wtf(tag: String, tr: Throwable): Int = 0
    @JvmStatic
    fun isLoggable(tag: String, level: Int): Boolean = false
    @JvmStatic
    fun println(priority: Int, tag: String, msg: String): Int = 0
    @JvmStatic
    fun getStackTraceString(tr: Throwable): String = android.util.Log.getStackTraceString(tr)
}
