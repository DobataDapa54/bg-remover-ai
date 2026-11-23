// batch.cpp — part of bg-remover-ai.

#include "bgremoverai/batch.h"

#include <cstdio>

namespace bgremoverai {

Batch::Batch(const std::string& config_path)
    : config_path_(config_path) {}

void Batch::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Batch::run() {
    if (verbose_) std::fprintf(stderr, "[bg-remover-ai] batch: run\n");
    // core logic lives here
    return true;
}

}  // namespace bgremoverai
