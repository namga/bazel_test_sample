load("@rules_cc//cc:defs.bzl", "cc_library", "cc_binary")

cc_library(
  name = "test_lib",
  srcs = [
       "lib_x.c",
       "lib_a.c",
       "lib_x_mock.cpp"
  ],
  hdrs = [
       "lib_a.h",
       "lib_x.h",
       "lib_x_mock.h"
  ],
  includes =["."],
  deps = ["@com_google_googletest//:gtest_main"]
)

cc_binary(
  name = "hello_test",
  srcs = [
       "hello_test.cpp"
  ],
  deps = [
       "@com_google_googletest//:gtest_main",
       ":test_lib"]
)