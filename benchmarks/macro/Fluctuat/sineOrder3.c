int main(void)
{
  double x;
  double res;

  x = __BUILTIN_DAED_DBETWEEN_WITH_ULP(-2.0, 2.0);

  res = 0.954929658551372 * x -  0.12900613773279798*(x*x*x);
  DSENSITIVITY(res);

  return 0;
}
