/*
 * gtest_main.cpp
 *
 *  Created on: Mar 30, 2020
 *      Author: srikesh
 */

#include <stdio.h>
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv); //Initializes the framework & must be called before RUN_ALL_TESTS
  return RUN_ALL_TESTS(); //RUN_ALL_TESTS automatically detects and runs all the tests
  	  	  	  	  	  	  // defined using the TEST macro.
}



