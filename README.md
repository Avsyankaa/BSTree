## BSTree

[![Build Status](https://travis-ci.org/Avsyankaa/BSTree.svg?branch=master)](https://travis-ci.org/Avsyankaa/BSTree)

## Запуск программы 
```ShellSession
$ git clone https://github.com/Avsyankaa/BSTree
Cloning into 'BSTree'...
remote: Counting objects: 220, done.
remote: Compressing objects: 100% (179/179), done.
remote: Total 220 (delta 87), reused 0 (delta 0), pack-reused 0
Receiving objects: 100% (220/220), 55.78 KiB | 0 bytes/s, done.
Resolving deltas: 100% (87/87), done.
$ cd BSTree
```
## Обработка входных данных
```ShellSession
$ g++ examples/example1.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree 1 2 3 # с указаниями входных параметров
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program


$ g++ examples/example1.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree # без указания входных данных
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the programи 
```
## Печать дерева
```ShellSession
# Вывод на экран непустого древа
$ g++ examples/example2.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree 6 8 7 9 4 1
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
1↵
      --9
   --8
      --7
6
   --4
      --1
      
# Вывод на экран пустого древа
$ g++ examples/example2.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree 
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
1↵
Tree is empty
```
## Вывод списка узлов в стандартный поток вывода с использованием указанного подхода
```ShellSession
# Вывод на экран узлов дерева с использованием прямого обхода
$ g++ examples/example3.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree 23 45 13 56 22
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
2↵
a.Straight detour
b.Transverse detour
c.Back detour
a↵
23 13 22 45 56 

# Вывод на экран узлов дерева с использованием поперечного обхода
$ g++ examples/example3.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree 23 45 13 56 22
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
2↵
a.Straight detour
b.Transverse detour
c.Back detour
b↵
13 22 23 45 56

# Вывод на экран узлов дерева с использованием обратного обхода
$ g++ examples/example3.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree 23 45 13 56 22
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
2↵
a.Straight detour
b.Transverse detour
c.Back detour
c↵
22 13 56 45 23

# Вывод списка узлов пустого дерева на экран
$ g++ examples/example3.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
2↵
Tree is empty
```
## Завершение работы программы
```ShellSession
# Успешный выход из программы
$ g++ examples/example3.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
8↵
Do you want to leave program? ( yes, no )
y↵
Good by!

# Неуспешная попытка выхода из программы 
$ g++ examples/example3.cpp sources/bstree.cpp -Iinclude -o bstree -std=c++11
$ ./bstree
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program
8↵
Do you want to leave program? ( yes, no )
n↵
Select one of the operations:
1.Print the tree on the screen
2.List the nodes of the tree
3.Add a node to the tree
4.Remove the node from the tree
5.Save tree to a file
6.Load the tree from a file
7.Check node availability
8.Complete the program

```
