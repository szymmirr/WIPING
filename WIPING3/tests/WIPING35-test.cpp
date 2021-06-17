#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#define main __real_main
#include "../WIPING35.cpp"
#undef main

std::string INPUT_1 = "C Z 1,00 C X 1,00 B T 2,00 B S 2,00 A L 3,00 A K 3,00";
std::string CORRECT_ANSWER_1 = "\"A K 3,00 A L 3,00 B S 2,00 B T 2,00 C X 1,00 C Z 1,00\"";
std::string INCORRECT_ANSWER_1 = "0";

std::string INPUT_2 = "AAAAA BBBBB 100,00 AAAAA BBBBB 50,00 BBBBB AAAAA 200,00 AAAAA CCCCC 250,00 CCCCC BBBBB 100,00 BBBBB CCCCC 300,00 CCCCC AAAAA 150,00";
std::string CORRECT_ANSWER_2 = "\"AAAAA CCCCC 100,00 BBBBB AAAAA 50,00 BBBBB CCCCC 200,00\"";

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

TEST_CASE("Correct answer 2") {
    std::ostringstream output = capture_main_stdout(INPUT_2);
    INFO(output.str());
	REQUIRE(output.str() == CORRECT_ANSWER_2);
}
