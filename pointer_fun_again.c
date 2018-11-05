#include <stdio.h>

struct Playstruct{
  int int_value=20;
  double double_value=10.5;
  char a_string[64]="Martin";
}

//Implement
void print_struct(struct Playstruct ps, struct Playstruct* pps);
void change_struct(struct Playstruct ps, struct Playstruct* pps);
void print_string(char string_to_print[]);
void change_string(char string1[],char* p_string);

int main(int argc, char const *argv[]) {
  struct Playstruct play_struct;
  struct Playstruct* play_struct_pointer=&play_struct;

  print_struct(play_struct,play_struct_pointer);
  change_struct(play_struct,play_struct_pointer);

  return 0;
}
void print_struct(struct Playstruct ps, struct Playstruct* pps){
  printf("`Values of struct ps: <d>, <lf>, <s>\n",ps.int_value, ps.double_value ,ps.a_string);
  printf("`Values of struct ps: <d>, <lf>, <s>\n",pps.int_value, pps.double_value ,pps.a_string);
}

void change_struct(struct Playstruct ps, struct Playstruct* pps){
  ps.int_value=10;
  ps.double_value=20.5;
  ps.a_string="Bernd_das_Brot";

  pps-> int_value=6;
  pps->double_value=7.5;
  pps->a_string="Gregor";
}

void print_string(char string_to_print[])

{

  printf("%s\n",string_to_print);

}

void change_string(char string1[],char* p_string)

{

  string1[2]='\0';

  p_string[1]='\0';

}
