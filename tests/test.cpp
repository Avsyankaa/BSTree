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
  std::ofstream out_file1("file1.txt");
  tree2.save("file1.txt");
  out_file1.close();
  
  std::string result2;
  
  std::ifstream in_file1("file1.txt");
  getline(in_file1, result2);
  in_file1.close();
  
  REQUIRE(result1 == result2);
}

TEST_CASE("insert")
{
  Tree tree = {12, 4, 56, 78, 2};
  tree.insert(5);
  std::ofstream out_file("file.txt");
  
  tree.save("file.txt");
  out_file.close();
  
  std::string result1;
  std::string result2 = "12 4 2 5 56 78 ";
  std::ifstream in_file("file.txt");
  getline(in_file, result1);
  
  REQUIRE(result1 == result2);
}

TEST_CASE("remove")
{
  Tree tree = {12, 4, 56, 78, 2, 5, 7};
  tree.remove(7);
  std::ofstream out_file("file.txt");
  
  tree.save("file.txt");
  out_file.close();
  
  std::string result1;
  std::string result2 = "12 4 2 5 56 78 ";
  std::ifstream in_file("file.txt");
  getline(in_file, result1);
  
  REQUIRE(result1 == result2);
}

TEST_CASE("exists")
{
  Tree tree = {12, 4, 56, 78, 2, 5, 7};
  REQUIRE(tree.exists(4)==true);
  REQUIRE(tree.exists(1258)==false);
}

