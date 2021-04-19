#include <cstring>
#include <string>

using namespace std;
/*-------------------------Decoding Function-------------------------*/
string run_length_decoding(string term) {
  string decoded = "";
  string num = "";
  for (auto &&i : term) {
    if (isalpha(i)) {
      for (int j = 0; j < stoi(num); ++j) {
        decoded += i;
      }
      num = "";
    } else {
      num += i;
    }
  }
  return decoded;
}
