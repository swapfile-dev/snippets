#include <benchmark/benchmark.h>

#include <iostream>
#include <string>
using namespace std;

static void foo(benchmark::State& s) {
    auto n = s.range(0);

    std::string x{"Hello World!"};

    for (auto _ : s) {
        for (int i = 0; i < n; ++i) {
            benchmark::DoNotOptimize(x.length());
        }
    }
}

BENCHMARK(foo)->Range(1, 1e6);

BENCHMARK_MAIN();
