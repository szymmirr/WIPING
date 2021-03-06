#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#define main __real_main
#include "../WIPING26.cpp"
#undef main

std::string INPUT_1 = "3.0 3.0 1.0 1.0 3.0 0.0 0.0 3.0 7.0 3.0 5.0 3.0 3.0 3.0";
std::string CORRECT_ANSWER_1 = "OK 0.000 90.000 270.000 OK STOP";
std::string INCORRECT_ANSWER_1 = "OK";

std::ostringstream capture_main_stdout(std::string test_input) {
    std::istringstream input(test_input);
    std::cin.rdbuf(input.rdbuf());

    std::ostringstream output;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());

    __real_main();
    std::cout.rdbuf(p_cout_streambuf);

    return output;
}

TEST_CASE("Incorrect return") {
    std::ostringstream output = capture_main_stdout(INPUT_1);
    REQUIRE_FALSE(__real_main() == 1);
}

TEST_CASE("Correct return") {
    std::ostringstream output = capture_main_stdout(INPUT_1);
    REQUIRE(__real_main() == 0);
}

TEST_CASE("Incorrect answer") {
    std::ostringstream output = capture_main_stdout(INPUT_1);
    INFO(output.str());
	REQUIRE_FALSE(output.str() == INCORRECT_ANSWER_1);
}

TEST_CASE("Correct answer 1") {
    std::ostringstream output = capture_main_stdout(INPUT_1);
    INFO(output.str());
	REQUIRE(output.str() == CORRECT_ANSWER_1);
}
