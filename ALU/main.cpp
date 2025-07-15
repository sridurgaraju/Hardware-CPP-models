#include <iostream>
#include <cstdint>

using namespace std;

struct aluResult {
    uint32_t result;
    bool zeroFlag;
    };

aluResult aluExecute(uint32_t operandA,uint32_t operandB, uint8_t aluControl);

int main()
{
    int a,b;
    cout << "Enter operandA:" << endl;
    cin >> a;
    cout << "Enter operandB:" << endl;
    cin >> b;
    for (int op = 0; op <= 9; ++op) {
        aluResult res = aluExecute(a, b, op);
        cout << "Result = " << res.result
             << ", Zero Flag = " << res.zeroFlag << endl;
    }
    return 0;
}

aluResult aluExecute(uint32_t operandA, uint32_t operandB, uint8_t aluControl){
    aluResult res{};
    switch(aluControl){
      case 0x0: //AND
          cout << "AND\n";
          res.result = operandA & operandB;
          break;
      case 0x1: //OR
          cout << "OR\n";
          res.result = operandA | operandB;
          break;
      case 0x2: //ADD
          cout << "ADD\n";
          res.result = operandA + operandB;
          break;
      case 0x3: //XOR
          cout << "XOR\n";
          res.result = operandA ^ operandB;
          break;
      case 0x4: //SLL
          cout << "SLL\n";
          res.result = operandA << (operandB & 0x1F);
          break;
      case 0x5: //SRL
          cout << "SRL\n";
          res.result = operandA >> (operandB & 0x1F);
          break;
      case 0x6: //SUB
          cout << "SUB\n";
          res.result = operandA - operandB;
          break;
      case 0x7: //SRA
          cout << "SRA\n";
          res.result = static_cast<int32_t>(operandA) >> (operandB & 0x1F);
          break;
      case 0x8: //SLT
          cout << "SLT\n";
          res.result = static_cast<int32_t>(operandA) < static_cast<int32_t>(operandB) ? 1 : 0;
          break;
      case 0x9: //SLTU
          cout << "SLTU\n";
          res.result = operandA < operandB ? 1 : 0;
          break;
      default:
          res.result = 0;
          break;
    }
    if(res.result == 0)
        res.zeroFlag = 1;
    else
        res.zeroFlag = 0;
    return res;
}

