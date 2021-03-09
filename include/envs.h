#ifndef _ENVS_H

#define _ENVS_H

static char *afl_environment_deprecated[] = {

    "AFL_LLVM_WHITELIST",
    "AFL_GCC_WHITELIST",
    "AFL_DEBUG_CHILD_OUTPUT",
    "AFL_DEFER_FORKSRV",
    "AFL_POST_LIBRARY",
    "AFL_PERSISTENT",
    NULL

};

static char *afl_environment_variables[] = {

    "AFL_ALIGNED_ALLOC",
    "AFL_ALLOW_TMP",
    "AFL_ANALYZE_HEX",
    "AFL_AS",
    "AFL_AUTORESUME",
    "AFL_AS_FORCE_INSTRUMENT",
    "AFL_BENCH_JUST_ONE",
    "AFL_BENCH_UNTIL_CRASH",
    "AFL_CAL_FAST",
    "AFL_CC",
    "AFL_CMIN_ALLOW_ANY",
    "AFL_CMIN_CRASHES_ONLY",
    "AFL_CMPLOG_ONLY_NEW",
    "AFL_CODE_END",
    "AFL_CODE_START",
    "AFL_COMPCOV_BINNAME",
    "AFL_COMPCOV_LEVEL",
    "AFL_CRASH_EXITCODE",
    "AFL_CUSTOM_MUTATOR_LIBRARY",
    "AFL_CUSTOM_MUTATOR_ONLY",
    "AFL_CXX",
    "AFL_CYCLE_SCHEDULES",
    "AFL_DEBUG",
    "AFL_DEBUG_CHILD",
    "AFL_DEBUG_GDB",
    "AFL_DISABLE_TRIM",
    "AFL_DONT_OPTIMIZE",
    "AFL_DRIVER_STDERR_DUPLICATE_FILENAME",
    "AFL_DUMB_FORKSRV",
    "AFL_ENTRYPOINT",
    "AFL_EXIT_WHEN_DONE",
    "AFL_FAST_CAL",
    "AFL_FORCE_UI",
    "AFL_FUZZER_ARGS",  // oss-fuzz
    "AFL_GCC_ALLOWLIST",
    "AFL_GCC_DENYLIST",
    "AFL_GCC_BLOCKLIST",
    "AFL_GCC_INSTRUMENT_FILE",
    "AFL_GCC_OUT_OF_LINE",
    "AFL_GCC_SKIP_NEVERZERO",
    "AFL_GCJ",
    "AFL_HANG_TMOUT",
    "AFL_FORKSRV_INIT_TMOUT",
    "AFL_HARDEN",
    "AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES",
    "AFL_IGNORE_UNKNOWN_ENVS",
    "AFL_IMPORT_FIRST",
    "AFL_INST_LIBS",
    "AFL_INST_RATIO",
    "AFL_KILL_SIGNAL",
    "AFL_KEEP_TRACES",
    "AFL_KEEP_ASSEMBLY",
    "AFL_LD_HARD_FAIL",
    "AFL_LD_LIMIT_MB",
    "AFL_LD_NO_CALLOC_OVER",
    "AFL_LD_PASSTHROUGH",
    "AFL_REAL_LD",
    "AFL_LD_PRELOAD",
    "AFL_LD_VERBOSE",
    "AFL_LLVM_ALLOWLIST",
    "AFL_LLVM_DENYLIST",
    "AFL_LLVM_BLOCKLIST",
    "AFL_LLVM_CMPLOG",
    "AFL_LLVM_INSTRIM",
    "AFL_LLVM_CTX",
    "AFL_LLVM_CTX_K",
    "AFL_LLVM_DICT2FILE",
    "AFL_LLVM_DOCUMENT_IDS",
    "AFL_LLVM_INSTRIM_LOOPHEAD",
    "AFL_LLVM_INSTRUMENT",
    "AFL_LLVM_LTO_AUTODICTIONARY",
    "AFL_LLVM_AUTODICTIONARY",
    "AFL_LLVM_SKIPSINGLEBLOCK",
    "AFL_LLVM_INSTRIM_SKIPSINGLEBLOCK",
    "AFL_LLVM_LAF_SPLIT_COMPARES",
    "AFL_LLVM_LAF_SPLIT_COMPARES_BITW",
    "AFL_LLVM_LAF_SPLIT_FLOATS",
    "AFL_LLVM_LAF_SPLIT_SWITCHES",
    "AFL_LLVM_LAF_ALL",
    "AFL_LLVM_LAF_TRANSFORM_COMPARES",
    "AFL_LLVM_MAP_ADDR",
    "AFL_LLVM_MAP_DYNAMIC",
    "AFL_LLVM_NGRAM_SIZE",
    "AFL_NGRAM_SIZE",
    "AFL_LLVM_NOT_ZERO",
    "AFL_LLVM_INSTRUMENT_FILE",
    "AFL_LLVM_SKIP_NEVERZERO",
    "AFL_NO_AFFINITY",
    "AFL_LLVM_LTO_STARTID",
    "AFL_LLVM_LTO_DONTWRITEID",
    "AFL_NO_ARITH",
    "AFL_NO_AUTODICT",
    "AFL_NO_BUILTIN",
#if defined USE_COLOR && !defined ALWAYS_COLORED
    "AFL_NO_COLOR",
    "AFL_NO_COLOUR",
#endif
    "AFL_NO_CPU_RED",
    "AFL_NO_FORKSRV",
    "AFL_NO_UI",
    "AFL_NO_PYTHON",
    "AFL_UNTRACER_FILE",
    "AFL_LLVM_USE_TRACE_PC",
    "AFL_MAP_SIZE",
    "AFL_MAPSIZE",
    "AFL_MAX_DET_EXTRAS",
    "AFL_NO_X86",  // not really an env but we dont want to warn on it
    "AFL_NOOPT",
    "AFL_PASSTHROUGH",
    "AFL_PATH",
    "AFL_PERFORMANCE_FILE",
    "AFL_PRELOAD",
    "AFL_PYTHON_MODULE",
    "AFL_QEMU_COMPCOV",
    "AFL_QEMU_COMPCOV_DEBUG",
    "AFL_QEMU_DEBUG_MAPS",
    "AFL_QEMU_DISABLE_CACHE",
    "AFL_QEMU_DRIVER_NO_HOOK",
    "AFL_QEMU_FORCE_DFL",
    "AFL_QEMU_PERSISTENT_ADDR",
    "AFL_QEMU_PERSISTENT_CNT",
    "AFL_QEMU_PERSISTENT_GPR",
    "AFL_QEMU_PERSISTENT_HOOK",
    "AFL_QEMU_PERSISTENT_MEM",
    "AFL_QEMU_PERSISTENT_RET",
    "AFL_QEMU_PERSISTENT_RETADDR_OFFSET",
    "AFL_QEMU_PERSISTENT_EXITS",
    "AFL_QEMU_INST_RANGES",
    "AFL_QEMU_EXCLUDE_RANGES",
    "AFL_QEMU_SNAPSHOT",
    "AFL_QUIET",
    "AFL_RANDOM_ALLOC_CANARY",
    "AFL_REAL_PATH",
    "AFL_SHUFFLE_QUEUE",
    "AFL_SKIP_BIN_CHECK",
    "AFL_SKIP_CPUFREQ",
    "AFL_SKIP_CRASHES",
    "AFL_STATSD",
    "AFL_STATSD_HOST",
    "AFL_STATSD_PORT",
    "AFL_STATSD_TAGS_FLAVOR",
    "AFL_TESTCACHE_SIZE",
    "AFL_TESTCACHE_ENTRIES",
    "AFL_TMIN_EXACT",
    "AFL_TMPDIR",
    "AFL_TOKEN_FILE",
    "AFL_TRACE_PC",
    "AFL_USE_ASAN",
    "AFL_USE_MSAN",
    "AFL_USE_TRACE_PC",
    "AFL_USE_UBSAN",
    "AFL_USE_CFISAN",
    "AFL_WINE_PATH",
    "AFL_NO_SNAPSHOT",
    "AFL_EXPAND_HAVOC_NOW",
    "AFL_USE_QASAN",
    NULL

};

extern char *afl_environment_variables[];

#endif

