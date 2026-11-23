// remover.cpp — part of bg-remover-ai.

#include "bgremoverai/remover.h"

#include <cstdio>

namespace bgremoverai {

Remover::Remover(const std::string& config_path)
    : config_path_(config_path) {}

void Remover::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Remover::run() {
    if (verbose_) std::fprintf(stderr, "[bg-remover-ai] remover: run\n");
    // core logic lives here
    return true;
}

}  // namespace bgremoverai
