https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "llvm/IR/Module.h"

using namespace llvm;

namespace prereqs {
struct Prereqs : public ModulePass {
  static char ID;
  Prereqs();

  bool runOnModule(Module &M);
  void print(Module &M);

  int NumOfFunctions = 0;
  int NumOfInstructions = 0;
};
} // namespace prereqs
