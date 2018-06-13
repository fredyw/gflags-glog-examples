#include <iostream>
#include "glog/logging.h"
#include "gflags/gflags.h"

DEFINE_string(message, "Default message", "Message to print");

int main(int argc, char *argv[]) {
    google::InitGoogleLogging(argv[0]);
    gflags::SetUsageMessage("Examples of using gflags and glog");
    gflags::SetVersionString("1.0.0");
    gflags::ParseCommandLineFlags(&argc, &argv, true);

    LOG(INFO) << FLAGS_message;

    gflags::ShutDownCommandLineFlags();

    return 0;
}