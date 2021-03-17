#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    int leapArr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int normalArr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year <= 1917 && year >= 1700){
        if (year % 4 == 0){
            //leap year julian calendar
            int total = 0, counter = 0;
            while (total <= 256){
                total = total + leapArr[counter];
                if (total + leapArr[counter + 1] > 256){
                    break;
                }
                counter++;
            }
            int days = 256 - total;
            ostringstream str1;
            str1 << days; 
            string D = str1.str();
            int month = counter + 2;
            ostringstream str2;
            str2 << setfill('0') << setw(2) << month;
            string M = str2.str();
            ostringstream str3;
            str3 << year;
            string Y = str3.str();
            string answer = D + "." + M + "." + Y;
            return answer;
        }
        else if (year % 4 != 0){
            //normal year julian calendar
            int total = 0, counter = 0;
            while (total <= 256){
                total = total + normalArr[counter];
                if (total + normalArr[counter + 1] > 256){
                    break;
                }
                counter++;
            }
            int days = 256 - total;
            ostringstream str1;
            str1 << days; 
            string D = str1.str();
            int month = counter + 2;
            ostringstream str2;
            str2 << setfill('0') << setw(2) << month;
            string M = str2.str();
            ostringstream str3;
            str3 << year;
            string Y = str3.str();
            string answer = D + "." + M + "." + Y;
            return answer;
        }
    } 
    else if (year >= 1919){
        if (year % 4 == 0 && year % 100 != 0){
            //leap year gregorian calendar
            int total = 0, counter = 0;
            while (total <= 256){
                total = total + leapArr[counter];
                if (total + leapArr[counter + 1] > 256){
                    break;
                }
                counter++;
            }
            int days = 256 - total;
            ostringstream str1;
            str1 << days; 
            string D = str1.str();
            int month = counter + 2;
            ostringstream str2;
            str2 << setfill('0') << setw(2) << month;
            string M = str2.str();
            ostringstream str3;
            str3 << year;
            string Y = str3.str();
            string answer = D + "." + M + "." + Y;
            return answer;
        }
        else if (year % 400 == 0){
            //leap year gregorain calendar
            int total = 0, counter = 0;
            while (total <= 256){
                total = total + leapArr[counter];
                if (total + leapArr[counter + 1] > 256){
                    break;
                }
                counter++;
            }
            int days = 256 - total;
            ostringstream str1;
            str1 << days; 
            string D = str1.str();
            int month = counter + 2;
            ostringstream str2;
            str2 << setfill('0') << setw(2) << month;
            string M = str2.str();
            ostringstream str3;
            str3 << year;
            string Y = str3.str();
            string answer = D + "." + M + "." + Y;
            return answer;
        }
        else{
            //normal year gregorian calendar
            int total = 0, counter = 0;
            while (total <= 256){
                total = total + normalArr[counter];
                if (total + normalArr[counter + 1] > 256){
                    break;
                }
                counter++;
            }
            int days = 256 - total;
            ostringstream str1;
            str1 << days; 
            string D = str1.str();
            int month = counter + 2;
            ostringstream str2;
            str2 << setfill('0') << setw(2) << month;
            string M = str2.str();
            ostringstream str3;
            str3 << year;
            string Y = str3.str();
            string answer = D + "." + M + "." + Y;
            return answer;
        }
    }
    else if (year == 1918){
        return "26.09.1918";
    }
    return "hello";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}