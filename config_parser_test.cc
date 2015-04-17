#include "gtest/gtest.h"
#include "config_parser.h"

// SICK NASTY X-AMPLE THAT WORKS
TEST(NginxConfigParserTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("example_config", &out_config);

  EXPECT_TRUE(success);
}

// SICK NASTY FAILED EXAMPLE
TEST(FailTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;

  bool success = parser.Parse("example_fail", &out_config);

  EXPECT_TRUE(success);
}

