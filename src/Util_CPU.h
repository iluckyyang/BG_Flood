
#ifndef UTILCPU_H
#define UTILCPU_H

#include "General.h"
#include "Param.h"

namespace utils {
	template <class T> T sq(T a);
	template <class T> const T& max(const T& a, const T& b);
	template <class T> const T& min(const T& a, const T& b);

	
}


unsigned int nextPow2(unsigned int x);

double interptime(double next, double prev, double timenext, double time);

template <class T> T BilinearInterpolation(T q11, T q12, T q21, T q22, T x1, T x2, T y1, T y2, T x, T y);
template <class T> T BarycentricInterpolation(T q1, T x1, T y1, T q2, T x2, T y2, T q3, T x3, T y3, T x, T y);

template <class T> __host__ __device__ double calcres(T dx, int level);
// End of global definition
#endif
