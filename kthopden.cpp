#include <bits/stdc++.h>
using namespace std;

string tuoicay(int doAm, int khaNangMua) {
    if (doAm < 0 || doAm > 100 || khaNangMua < 0 || khaNangMua > 100) return "Khong hop le"; 

	int a = 0;
	if (doAm <= 15) a = 1;
    else if (doAm <= 30) a = 2;
    else if (doAm <= 60) a = 3;
    else a = 4;
    
    int b = 0;
    if (khaNangMua <= 39) b = 1;
    else if (khaNangMua <= 69) b = 2;
    else b = 3;
    
    if (a == 1 && b == 1) return "Tuoi ngay, nhieu nuoc";
    if (a == 1 && b == 2) return "Tuoi ngay, vua nuoc";
    if (a == 1 && b == 3) return "Hoan, cho mua";

    if (a == 2 && b == 1) return "Tuoi ngay, it nuoc";
    if (a == 2 && b == 2) return "Tuoi ngay, it nuoc";
    if (a == 2 && b == 3) return "Hoan, cho mua";

    if (a == 3 && b == 1) return "Khong tuoi, dat du am";
    if (a == 3 && b == 2) return "Khong tuoi, dat du am";
    if (a == 3 && b == 3) return "Khong tuoi, sap mua";
    return "Khong tuoi, dat da uot";
}

int main() {
	cout << tuoicay(9, 20) << "\n";   
	cout << tuoicay(5, 56) << "\n";   
	cout << tuoicay(3, 89) << "\n";  
	
	cout << tuoicay(16, 18) << "\n";   
	cout << tuoicay(25, 50) << "\n";   
	cout << tuoicay(18, 70) << "\n";   
	
	cout << tuoicay(50, 12) << "\n";   
	cout << tuoicay(45, 45) << "\n";   
	cout << tuoicay(59, 73) << "\n";   
	
	cout << tuoicay(86, 10) << "\n";  
	cout << tuoicay(70, 58) << "\n";   
	cout << tuoicay(95, 99) << "\n";   

    
    return 0;
}

