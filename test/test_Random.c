#include "unity.h"
#include "Random.h"

void setUp(void)
{
}

void tearDown(void)
{
}

//inside custom test assert
void checkAvlTree(Node *node, uint32_t *height, uint32_t *numberOfNode, int lineNumber);

void test_random(void)
{
  int val;
  // for i = 0...20000 do 
  //  Node *node = avlFindNode(val = getRandomNum());
  //  if node == NULL
  //    then create node with val,
  //      add new node to AVL tree
  //  else i--;
  //  run TEST_AVL_TREE(root, count++);
  // end
  
}
