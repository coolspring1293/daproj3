#ifndef FAMILY_TREE_NODE_H
#define FAMILY_TREE_NODE_H

#include <string>

enum Sex { kFemale, kMale, kBoth, kNeither };

struct FamilyMember {
  public:
    std::string name;
    int age;
    Sex sex;
    FamilyMember *spouse;

    FamilyMember(const std::string& _name, int _age, Sex _sex,
                 FamilyMember *_spouse = NULL) :
                 name(_name), age(_age),
                 sex(_sex), spouse(_spouse) {}
};

class FamilyTreeNode {
  public:
    FamilyMember info;
    FamilyTreeNode *sibling;
    FamilyTreeNode *child;

    FamilyTreeNode(FamilyTreeNode *_sibling, FamilyTreeNode *_child,
                   const std::string &_name, int _age, Sex _sex,
                   FamilyMember *spouse = NULL) :
                   info(_name, _age, _sex, _spouse) , sibling(_sibling),
                   child(_child) {}
};

#endif

