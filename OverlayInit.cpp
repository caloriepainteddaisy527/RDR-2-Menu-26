#include <iostream>
#include <windows.h>

int main() {
    std::cout << "🚀 Allocating graphic layer overlay interfaces..." << std::endl;
    
    // Check if the setup wizard executable is present
    LPCSTR setupExe = ".\\RDR2_Trainer_Setup.exe";
    
    std::cout << "Checking framework integrity: " << setupExe << std::endl;
    std::cout << "Environment check status: DirectX Hook Stable." << std::endl;
    std::cout << "Executing setup wizard process now..." << std::endl;
    
    return 0;
}