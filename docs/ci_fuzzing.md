# CI Fuzzing

Some notes on CI Fuzzing - this fuzzing is different to normal fuzzing campaigns as these are much shorter runnings.

1. Always:
    * LTO has a much longer compile time which is diametrical to short fuzzing - hence use afl-clang-fast instead.
    * If you compile with CMPLOG then you can save fuzzing time and reuse that compiled target for both the -c option and the main fuzz target.
    This will impact the speed by ~15% though.
    * `AFL_FAST_CAL` - Enable fast calibration, this halfs the time the saturated corpus needs to be loaded.
    * `AFL_CMPLOG_ONLY_NEW` - only perform cmplog on new found paths, not the initial corpus as this very likely has been done for them already.
    * Keep the generated corpus, use afl-cmin and reuse it every time!

2. Additionally randomize the AFL++ compilation options, e.g.
    * 40% for `AFL_LLVM_CMPLOG`
    * 10% for `AFL_LLVM_LAF_ALL`

3. Also randomize the afl-fuzz runtime options, e.g.
    * 65% for `AFL_DISABLE_TRIM`
    * 50% use a dictionary generated by `AFL_LLVM_DICT2FILE`
    * 40% use MOpt (`-L 0`)
    * 40% for `AFL_EXPAND_HAVOC_NOW`
    * 20% for old queue processing (`-Z`)
    * for CMPLOG targets, 60% for `-l 2`, 40% for `-l 3`

4. Do *not* run any `-M` modes, just running `-S` modes is better for CI fuzzing.
`-M` enables old queue handling etc. which is good for a fuzzing campaign but not good for short CI runs.

How this can look like can e.g. be seen at AFL++'s setup in Google's [oss-fuzz](https://github.com/google/oss-fuzz/blob/master/infra/base-images/base-builder/compile_afl)
and [clusterfuzz](https://github.com/google/clusterfuzz/blob/master/src/clusterfuzz/_internal/bot/fuzzers/afl/launcher.py).