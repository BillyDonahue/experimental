
#include <array>
#include <iostream>
#include <type_traits>
#include <utility>

#include "logv2.h"

DEFINE_LOG_COMPONENT_FOR_FILE(12345)

void inOther();

int main() {
  LOG("main in " __FILE__);
  inlineFunc();
  inOther();
  return 0;
}