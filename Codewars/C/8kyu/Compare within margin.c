int close_compare(int a, int b, int margin)
  {
  if(margin >= abs(a-b))
    return 0;
  else if(a < b)
    return -1;
  else if(a > b)
    return 1;
}
