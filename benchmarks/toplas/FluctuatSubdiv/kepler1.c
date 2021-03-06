#include "daed_builtins.h"
int main(void)
{
  double x1, x2, x3, x4;
  double res;

  x1 = DBETWEEN_WITH_ULP(4.0, 6.36);
  x2 = DBETWEEN_WITH_ULP(4.0, 6.36);
  x3 = DBETWEEN_WITH_ULP(4.0, 6.36);
  x4 = DBETWEEN_WITH_ULP(4.0, 6.36);

  SUBDIV_BEGIN(x1, 20)
  SUBDIV_BEGIN(x2, 20)
  SUBDIV_BEGIN(x3, 20)
  SUBDIV_BEGIN(x4, 20)

  res = x1 * x4 * (-x1 + x2 + x3 - x4)
    + x2 * (x1 - x2 + x3 + x4)
    + x3 * (x1 + x2 - x3 + x4)
    - x2 * x3 * x4 - x1 * x3 - x1 * x2 - x4;

  SUBDIV_END
  SUBDIV_END
  SUBDIV_END
  SUBDIV_END

  DSENSITIVITY(res);

  return 0;
}
