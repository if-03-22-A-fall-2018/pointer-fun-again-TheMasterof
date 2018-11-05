#include <stdio.h>

struct Playstruct{
  int int_value=20;
  double double_value=10.5;
  char a_string[64]="Martin";
}

//Implement
void print_struct(struct Playstruct ps, struct Playstruct* pps)

int main(int argc, char const *argv[]) {
  struct Playstruct play_struct;
  struct Playstruct* play_struct_pointer=&play_struct;
  print_struct(play_struct,play_struct_pointer);
  return 0;
}
void print_struct(struct Playstruct ps, struct Playstruct* pps){
  printf("`Values of struct ps: <d>, <lf>, <s>\n",ps.int_value, ps.double_value ,ps.a_string);
  printf("`Values of struct ps: <d>, <lf>, <s>\n",pps.int_value, pps.double_value ,pps.a_string);
}
