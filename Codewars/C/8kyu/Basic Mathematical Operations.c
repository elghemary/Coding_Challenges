int basic_op(char op, int value1, int value2) 
{
  switch(op)
    {
      case '+':
        return value1+value2;
      break;
      case '-':
        return value1-value2;
      break;
      case '*':
        return value1*value2;
      break;
      case '/':
        return value1/value2;
      break;
      default :
      return 0;
  }
}
