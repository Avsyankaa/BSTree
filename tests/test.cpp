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
  std::ofstream out_file("file.txt");
  
  tree.save("file.txt");
  out_file.close();
  
  std::string result1;
  std::string result2 = "12 4 2 5 56 78 ";
  std::ifstream in_file("file.txt");
  getline(in_file, result1);
  
  REQUIRE(result1 == result2);
}

TEST_CASE("builder_3")
{
  Tree tree1 = {12, 4, 56, 78, 2, 5};
  Tree tree2 = tree1;
  std::ofstream out_file("file.txt");
  
  tree1.save("file.txt");
  out_file.close();
  
  std::string result1;
  
  std::ifstream in_file("file.txt");
  getline(in_file, result1);
  in_file.close();
  std::ofstream out_file1("file.txt");
  tree2.save("file.txt");
  out_file1.close();
  
  std::string result2;
  
  std::ifstream in_file1("file.txt");
  getline(in_file1, result2);
  in_file1.close();
  
  REQUIRE(result1 == result2);
}
