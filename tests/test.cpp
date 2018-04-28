#include <catch.hpp>
#include <sstream>
#include <string>
#include <fstream>

#include "bstree.hpp"
using namespace BSTree;

TEST_CASE("builder_1")
{
  Tree tree;
  REQUIRE(tree.empty() == true);
  tree.insert(23);
  REQUIRE(tree.empty() == false);
}

TEST_CASE("builder_2")
{
  Tree tree = {12, 4, 56, 78, 2, 5};
  std::ofstream file("file.txt");
  
  tree.save("file.txt");
  file.close();
  
  std::string result1;
  std::string result2 = "12 4 2 5 56 78 ";
  std::ifstream file("file.txt");
  getline(file, result1);
  
  REQUIRE(result1 == result2);
}

TEST_CASE("builder_3")
{
  Tree tree1 = {12, 4, 56, 78, 2, 5};
  Tree tree2 = tree1;
  std::ofstream file("file.txt");
  
  tree1.save("file.txt");
  file.close();
  
  std::string result1;
  
  std::ifstream file("file.txt");
  getline(file, result1);
  file.close();
  std::ofstream file1("file.txt");
  tree2.save("file.txt");
  file1.close();
  
  std::string result2;
  
  std::ifstream file1("file.txt");
  getline(file1, result2);
  file1.close();
  
  REQUIRE(result1 == result2);
}
