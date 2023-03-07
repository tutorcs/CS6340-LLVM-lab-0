https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "Prereqs.h"

using namespace llvm;

namespace prereqs {
Prereqs::Prereqs() : ModulePass(ID) {}

void Prereqs::print(Module &M) {
  outs() << "Analytics of Module " << M.getName() << "\n";
  outs() << "  # Functions    : " << NumOfFunctions << "\n";
  outs() << "  # Instructions : " << NumOfInstructions << "\n";
}

bool Prereqs::runOnModule(Module &M) {
  /* Add your code here */
  for (auto &function : M.getFunctionList()) {
    NumOfFunctions++; 
    NumOfInstructions += function.getInstructionCount();
  }

  /* DO NOT EDIT BELOW THIS LINE */
  print(M);
  return false;
}

char Prereqs::ID = 1;
static RegisterPass<Prereqs> X("Prereqs", "Prereqs", false, false);
} // namespace prereqs
