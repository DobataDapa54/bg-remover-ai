// main.cpp — entry point. Wires config and subsystems together.

#include "bgremoverai/settings.h"
#include "bgremoverai/remover.h"
#include "bgremoverai/video.h"
#include "bgremoverai/batch.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    bgremoverai::Settings settings = bgremoverai::Settings::load_default();
    bgremoverai::Remover remover(settings.store_path);
    bgremoverai::Video video(settings.store_path);
    bgremoverai::Batch batch(settings.store_path);
    std::fprintf(stderr, "[bg-remover-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
