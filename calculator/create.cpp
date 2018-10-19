#include "create.h"

 CreatePush _push;
 CreatePop _pop;

static map<string, Create*> Create::operations = { { "PUSH", &_push },{ "POP", &_pop } };
