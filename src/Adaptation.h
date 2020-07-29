
#ifndef ADAPTATION_H
#define ADAPTATION_H

#include "General.h"
#include "Param.h"
#include "Write_txt.h"
#include "Util_CPU.h"
#include "Arrays.h"
#include "Mesh.h"
#include "AdaptCriteria.h"

template <class T> bool refinesanitycheck(Param XParam, BlockP<T> XBlock, bool*& refine, bool*& coarsen);

int checkneighbourrefine(int neighbourib, int levelib, int levelneighbour, bool*& refine, bool*& coarsen);


// End of global definition
#endif