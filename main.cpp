#include <iostream>
#include <string>
#include <vector>
#include <array>
static constexpr int SudokuSize = 9;
class SudokuBoard
{ std::array<std::array<SudokuCell, SudokuSize>, SudokuSize> mCells; public: explicit SudokuBoard() {}  SudokuBoard& operator=(const std::array<std::string, SudokuSize>& input_) {  for (int i = 0; i < SudokuSize; i++) {   const std::string& str = input_[i];      for (int j = 0; j < SudokuSize; j++) {    mCells[i][j] = charToInt(str[j]);   }  } }};
class SudokuCell{ // std::array<int, 9> temp; int mData;public: explicit SudokuCell(int data_) : mData(data_) {}  SudokuCell& operator=(int data_) {   }};
inline int charToInt(char c){ return static_cast<int>(c - '0');}
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
