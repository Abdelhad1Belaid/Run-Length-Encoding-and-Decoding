#include <cstring>
#include <string>

using namespace std;
/*-------------------------Encoding Function-------------------------*/
string run_length_encoding(string term) {
  int m = term.length();
  string encoded = "";
  for (int i = 0; i < m; ++i) {
    int count = 1;
    while (i < m && term[i] == term[i + 1]) {
      count++;
      i++;
    }
    encoded = encoded + to_string(count) + term[i];
  }
  return encoded;
}
