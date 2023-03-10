#include <iostream>
#include <string>
#include <sstream>

using namespace std;

wstring encrypt(const wstring &s) {
    wstringstream result;
    setlocale(LC_ALL, "");
    for (wstring::size_type i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case L'а': case L'А':
                result << L"•−" << L" ";
                break;

            case L'Б': case L'б': 
                result << L"−•••" << L" ";
                break;

            case L'В': case L'в':
                result << L"•−−" << L" ";
                break;

            case L'Г': case L'г':
                result << L"−−•" << L" ";
                break;

            case L'Д': case L'д': 
                result << L"−−•" << L" ";
                break;
            
            case L'Е': case L'е':
                result << L"•" << L" ";
                break;

            case L'Ж': case L'ж':
                result << L"•••−" << L" ";
                break;

            case L'З': case L'з':
                result << L"−−••" << L" ";
                break;

            case L'И': case L'и':
                result << L"••" << L" ";
                break;
            
           case L'Й': case L'й':
                result << L"•−−−" << L" ";
                break;
   
           case L'К': case L'к':
                result << L"−•−" << L" ";
                break;

           case L'Л': case L'л':
                result << L"•−••" << L" ";
                break;

           case L'М': case L'м': 
                result << L"−−" << L" ";
                break;

           case L'Н': case L'н':  
                result << L"−•" << L" ";
                break;
           
           case L'О': case L'о':
                result << L"−−−" << L" ";
                break;

           case L'П': case L'п': 
                result << L"•−−•" << L" ";
                break;

           case L'Р': case L'р':
                result << L"•−•" << L" ";
                break;

           case L'С': case L'с': 
                result << L"•••" << L" ";
                break;

           case L'Т': case L'т':
                result << L"−" << L" ";
                break;

           case L'У': case L'у':
                result << L"••−" << L" ";
                break;

           case L'Ф': case L'ф':
                result << L"••−•" << L" ";
                break; 

           case L'Х': case L'х':
                result << L"••••" << L" ";
                break;

           case L'Ц': case L'ц':
                result << L"−•−•" << L" ";
                break;

           case L'Ч': case L'ч': 
                result << L"−−−•" << L" ";
                break;

           case L'Ш': case L'ш': 
                result << L"−−−−" << L" ";
                break;

           case L'Щ': case L'щ':
                result << L"−−•−" << L" ";
                break;
           
           case L'Ъ': case L'ъ':
                result << L"−−•−−" << L" ";
                break;

           case L'Ы': case L'ы': 
                result << L"−•−−" << L" ";
                break;

           case L'Ь': case L'ь':
                result << L"−••−" << L" ";
                break;
 
           case L'Э': case L'э':
                result << L"••−••" << L" ";
                break;

           case L'Ю': case L'ю': 
                result << L"••−−" << L" ";
                break;
        
           case L'Я': case L'я':
                result << L"•−•−" << L" ";
                break;

           case ' ': // пробел
                result << L"  ";
                break;
           
           case L'?': 
                result << L"••−−••" << L" ";
                break;

           default:
                return L"Ошибка! Символ не найден в базе";
        }
    }
    return result.str();
}

int main() {
    setlocale(LC_ALL, "");
    wstring s;
    wcout << L"Введите текст: ";
    getline(wcin, s);       
    wcout << L"Результат: " << endl << encrypt(s);
}

