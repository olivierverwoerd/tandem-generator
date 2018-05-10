//A very dutch code	
// Example program
#include <iostream>
#include <string>

std::string l0 = "";
std::string l1 = "";
std::string l2 = "";
std::string l3 = "";
std::string l4 = "";
std::string l5 = "";
std::string l6 = "";
std::string l7 = "";
std::string l8 = "";
std::string l9 = "";
int num = 0;

void front(){
    l0 += " ##";
    l1 += "   #";
    l2 += "       #";
    l3 += "########";
    l4 += "   #   ####";
    l5 += " #  ###  ###";
    l6 += "  ##  #   ##";
    l7 += "  ##   #  ##";
    l8 += "       ###  ###";
    l9 += "     ####";
}


void seats(){
    
    l0 += "  ##     ";
    l1 += "    #### ";
    l2 += "        #";
    l3 += "#########";
    l4 += "        #";
    l5 += "        #";
    l6 += "        #";
    l7 += "#########";
    l8 += "         ";
    l9 += "         ";
}

void back(){
    l0 += "            ";
    l1 += "       #####";
    l2 += "        #";
    l3 += "        ##";
    l4 += "   #####  #";
    l5 += " ###  ###  #";
    l6 += "##   #  ##  #";
    l7 += "##  #########";
    l8 += " ###  ###";
    l9 += "   ####      ";
}

int main()
{
    while(num < 1){
        std::cout << "Tandem Generator\n\nHow many seats the bike?: ";
        std::cin >> num;
    }
    back();
	for(num; num > 1; num--){
		seats();
	}
    front();
    std::cout << l0 << '\n' << l1 << '\n' << l2 << '\n' << l3 << '\n' << l4 << '\n' << l5 << '\n' << l6 << '\n' << l7 << '\n' << l8 << '\n' << l9 << '\n';
}
