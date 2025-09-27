#include <iostream>
#include <string>


bool isSafeBridge(std::string s) {
	if (s.find(" ") != std::string::npos){
        return false;
    }
    else {
        return true;
    }
}

int main()
{
    std::cout << isSafeBridge("####") << "\n";
    std::cout << isSafeBridge("## ####") << "\n";
    std::cout << isSafeBridge("#") << "\n";

}
