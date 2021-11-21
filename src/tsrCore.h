#include <tsrType.h>

//vector (e.g. dim=3): {x1,x2,...,xn,y1,y2,...,yn,z1,z2,...,zn}

tsrDec tsrSqrt(tsrDec in1);

tsrDec tsrSin(tsrDec in1);

tsrDec tsrCos(tsrDec in1);

tsrDec tsrTan(tsrDec in1);

void tsrVecNorm(tsrDec* in1, tsrUint num, tsrUint dim, tsrDec* out);

void tsrVecUnitize(tsrDec* in1, tsrUint num, tsrUint dim, tsrDec* out);

void tsrVecNeg(tsrDec* in1, tsrUint num, tsrUint dim, tsrDec* out);

void tsrVecAdd(tsrDec* in1, tsrDec* in2, tsrUint num, tsrUint dim, tsrDec* out);

void tsrVecSub(tsrDec* in1, tsrDec* in2, tsrUint num, tsrUint dim, tsrDec* out);

void tsrVecDot(tsrDec* in1, tsrDec* in2, tsrUint num, tsrUint dim, tsrDec* out);