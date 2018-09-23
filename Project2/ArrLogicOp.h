#ifndef _ARRLOGICOP_
#define _ARRLOGICOP_
#include"OneTrit.h"
#include "TritArr.h"

TritArr operator&(TritArr &first, TritArr &second);

TritArr operator|(TritArr &first, TritArr &second);

TritArr operator~(TritArr &first);

#endif
