// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "Utilities/Math.h"
namespace UE4 {
	/*-----------------------------------------------------------------------------
		Definitions.
	-----------------------------------------------------------------------------*/
	/* Use before a function declaration to warn that callers should not ignore the return value */
	#if !defined(UE_NODISCARD) && defined(__has_cpp_attribute)
	#if __has_cpp_attribute(nodiscard)
	#define UE_NODISCARD [[nodiscard]]
	#endif
	#endif
	#ifndef UE_NODISCARD
	#define UE_NODISCARD
	#endif
	#if defined(__clang__) || _MSC_VER >= 1900
	#define CONSTEXPR constexpr
	#else
	#define CONSTEXPR
	#endif
	#define ABSTRACT abstract
	#ifndef FORCEINLINE
	#define FORCEINLINE __forceinline
	#endif
	// Forward declarations.
	struct FVector;
	struct alignas(16) FVector4;
	struct alignas(16) FPlane;
	struct FBox;
	struct FRotator;
	struct FMatrix;
	struct alignas(16) FQuat;
	struct FTwoVectors;
	struct alignas(16) FTransform;
	struct FVector2D;
	struct FLinearColor;
	struct FMath
	{
		static FORCEINLINE void SinCos(float* ScalarSin, float* ScalarCos, float  Value) {
			// Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
			float quotient = (INV_PI * 0.5f) * Value;
			if (Value >= 0.0f)
			{
				quotient = (float)((int)(quotient + 0.5f));
			}
			else
			{
				quotient = (float)((int)(quotient - 0.5f));
			}
			float y = Value - (2.0f * PI) * quotient;

			// Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
			float sign;
			if (y > HALF_PI)
			{
				y = PI - y;
				sign = -1.0f;
			}
			else if (y < -HALF_PI)
			{
				y = -PI - y;
				sign = -1.0f;
			}
			else
			{
				sign = +1.0f;
			}

			float y2 = y * y;

			// 11-degree minimax approximation
			*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

			// 10-degree minimax approximation
			float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
			*ScalarCos = sign * p;
		}

		/** Returns highest of 3 values */
		template< class T >
		static FORCEINLINE T Max3(const T A, const T B, const T C)
		{
			return Max(Max(A, B), C);
		}

		/** Returns lowest of 3 values */
		template< class T >
		static FORCEINLINE T Min3(const T A, const T B, const T C)
		{
			return Min(Min(A, B), C);
		}

		/** Multiples value by itself */
		template< class T >
		static FORCEINLINE T Square(const T A)
		{
			return A * A;
		}

		/** Clamps X to be between Min and Max, inclusive */
		template< class T >
		UE_NODISCARD static FORCEINLINE T Clamp(const T X, const T Min, const T Max)
		{
			return X < Min ? Min : X < Max ? X : Max;
		}

		/** Wraps X to be between Min and Max, inclusive */
		template< class T >
		static FORCEINLINE T Wrap(const T X, const T Min, const T Max)
		{
			T Size = Max - Min;
			T EndVal = X;
			while (EndVal < Min)
			{
				EndVal += Size;
			}

			while (EndVal > Max)
			{
				EndVal -= Size;
			}
			return EndVal;
		}

		/** Snaps a value to the nearest grid multiple */
		template< class T >
		static FORCEINLINE T GridSnap(T Location, T Grid)
		{
			return (Grid == T{}) ? Location : (Floor((Location + (Grid / (T)2)) / Grid) * Grid);
		}

		/** Divides two integers and rounds up */
		template <class T>
		static FORCEINLINE T DivideAndRoundUp(T Dividend, T Divisor)
		{
			return (Dividend + Divisor - 1) / Divisor;
		}

		/** Divides two integers and rounds down */
		template <class T>
		static FORCEINLINE T DivideAndRoundDown(T Dividend, T Divisor)
		{
			return Dividend / Divisor;
		}

		/** Divides two integers and rounds to nearest */
		template <class T>
		static FORCEINLINE T DivideAndRoundNearest(T Dividend, T Divisor)
		{
			return (Dividend >= 0)
				? (Dividend + Divisor / 2) / Divisor
				: (Dividend - Divisor / 2 + 1) / Divisor;
		}

		/**
		* Computes the sine and cosine of a scalar value.
		*
		* @param ScalarSin	Pointer to where the Sin result should be stored
		* @param ScalarCos	Pointer to where the Cos result should be stored
		* @param Value  input angles
		*/

		/**
	 * Converts a float to an integer with truncation towards zero.
	 * @param F		Floating point value to convert
	 * @return		Truncated integer.
	 */
		static CONSTEXPR FORCEINLINE int32 TruncToInt(float F)
		{
			return (int32)F;
		}

		/**
		 * Converts a float to an integer value with truncation towards zero.
		 * @param F		Floating point value to convert
		 * @return		Truncated integer value.
		 */
		static FORCEINLINE float TruncToFloat(float F)
		{
			return truncf(F);
		}

		/**
		 * Converts a double to an integer value with truncation towards zero.
		 * @param F		Floating point value to convert
		 * @return		Truncated integer value.
		 */
		static FORCEINLINE double TruncToDouble(double F)
		{
			return trunc(F);
		}

		/**
		 * Converts a float to a nearest less or equal integer.
		 * @param F		Floating point value to convert
		 * @return		An integer less or equal to 'F'.
		 */
		static FORCEINLINE int32 FloorToInt(float F)
		{
			return TruncToInt(floorf(F));
		}

		/**
		* Converts a float to the nearest less or equal integer.
		* @param F		Floating point value to convert
		* @return		An integer less or equal to 'F'.
		*/
		static FORCEINLINE float FloorToFloat(float F)
		{
			return floorf(F);
		}

		/**
		* Converts a double to a less or equal integer.
		* @param F		Floating point value to convert
		* @return		The nearest integer value to 'F'.
		*/
		static FORCEINLINE double FloorToDouble(double F)
		{
			return floor(F);
		}

		/**
		 * Converts a float to the nearest integer. Rounds up when the fraction is .5
		 * @param F		Floating point value to convert
		 * @return		The nearest integer to 'F'.
		 */
		static FORCEINLINE int32 RoundToInt(float F)
		{
			return FloorToInt(F + 0.5f);
		}

		/**
		* Converts a float to the nearest integer. Rounds up when the fraction is .5
		* @param F		Floating point value to convert
		* @return		The nearest integer to 'F'.
		*/
		static FORCEINLINE float RoundToFloat(float F)
		{
			return FloorToFloat(F + 0.5f);
		}

		/**
		* Converts a double to the nearest integer. Rounds up when the fraction is .5
		* @param F		Floating point value to convert
		* @return		The nearest integer to 'F'.
		*/
		static FORCEINLINE double RoundToDouble(double F)
		{
			return FloorToDouble(F + 0.5);
		}

		/**
		* Converts a float to the nearest greater or equal integer.
		* @param F		Floating point value to convert
		* @return		An integer greater or equal to 'F'.
		*/
		static FORCEINLINE int32 CeilToInt(float F)
		{
			return TruncToInt(ceilf(F));
		}

		/**
		* Converts a float to the nearest greater or equal integer.
		* @param F		Floating point value to convert
		* @return		An integer greater or equal to 'F'.
		*/
		static FORCEINLINE float CeilToFloat(float F)
		{
			return ceilf(F);
		}

		/**
		* Converts a double to the nearest greater or equal integer.
		* @param F		Floating point value to convert
		* @return		An integer greater or equal to 'F'.
		*/
		static FORCEINLINE double CeilToDouble(double F)
		{
			return ceil(F);
		}

		/**
		* Returns signed fractional part of a float.
		* @param Value	Floating point value to convert
		* @return		A float between >=0 and < 1 for nonnegative input. A float between >= -1 and < 0 for negative input.
		*/
		static FORCEINLINE float Fractional(float Value)
		{
			return Value - TruncToFloat(Value);
		}

		/**
		* Returns the fractional part of a float.
		* @param Value	Floating point value to convert
		* @return		A float between >=0 and < 1.
		*/
		static FORCEINLINE float Frac(float Value)
		{
			return Value - FloorToFloat(Value);
		}

		/**
		* Breaks the given value into an integral and a fractional part.
		* @param InValue	Floating point value to convert
		* @param OutIntPart Floating point value that receives the integral part of the number.
		* @return			The fractional part of the number.
		*/
		static FORCEINLINE float Modf(const float InValue, float* OutIntPart)
		{
			return modff(InValue, OutIntPart);
		}

		/**
		* Breaks the given value into an integral and a fractional part.
		* @param InValue	Floating point value to convert
		* @param OutIntPart Floating point value that receives the integral part of the number.
		* @return			The fractional part of the number.
		*/
		static FORCEINLINE double Modf(const double InValue, double* OutIntPart)
		{
			return modf(InValue, OutIntPart);
		}
		/**
		* Returns the floating-point remainder of X / Y
		* Warning: Always returns remainder toward 0, not toward the smaller multiple of Y.
		*			So for example Fmod(2.8f, 2) gives .8f as you would expect, however, Fmod(-2.8f, 2) gives -.8f, NOT 1.2f
		* Use Floor instead when snapping positions that can be negative to a grid
		*
		* This is forced to *NOT* inline so that divisions by constant Y does not get optimized in to an inverse scalar multiply,
		* which is not consistent with the intent nor with the vectorized version.
		*/
		static FORCEINLINE float Fmod(float X, float Y)
		{
			const float AbsY = fabsf(Y);
			if (AbsY <= 1.e-8f)
			{
				if (Y == 0)
				{
					//FMath::FMod(X=%f, Y=%f) : Y is zero, this is invalid and would result in NaN!
				}
				return 0.f;
			}
			const float Div = (X / Y);
			// All floats where abs(f) >= 2^23 (8388608) are whole numbers so do not need truncation, and avoid overflow in TruncToFloat as they get even larger.
			const float Quotient = fabsf(Div) < FLOAT_NON_FRACTIONAL ? TruncToFloat(Div) : Div;
			float IntPortion = Y * Quotient;

			// Rounding and imprecision could cause IntPortion to exceed X and cause the result to be outside the expected range.
			// For example Fmod(55.8, 9.3) would result in a very small negative value!
			if (fabsf(IntPortion) > fabsf(X))
			{
				IntPortion = X;
			}

			const float Result = X - IntPortion;
			// Clamp to [-AbsY, AbsY] because of possible failures for very large numbers (>1e10) due to precision loss.
			// We could instead fall back to stock fmodf() for large values, however this would diverge from the SIMD VectorMod() which has no similar fallback with reasonable performance.
			return FMath::Clamp(Result, -AbsY, AbsY);
		}

		// Returns e^Value
		static FORCEINLINE float Exp(float Value) { return expf(Value); }
		// Returns 2^Value
		static FORCEINLINE float Exp2(float Value) { return powf(2.f, Value); /*exp2f(Value);*/ }
		static FORCEINLINE float Loge(float Value) { return logf(Value); }
		static FORCEINLINE float LogX(float Base, float Value) { return Loge(Value) / Loge(Base); }
		// 1.0 / Loge(2) = 1.4426950f
		static FORCEINLINE float Log2(float Value) { return Loge(Value) * 1.4426950f; }
		static FORCEINLINE float Sin(float Value) { return sinf(Value); }
		static FORCEINLINE float Asin(float Value) { return asinf((Value < -1.f) ? -1.f : ((Value < 1.f) ? Value : 1.f)); }
		static FORCEINLINE float Sinh(float Value) { return sinhf(Value); }
		static FORCEINLINE float Cos(float Value) { return cosf(Value); }
		static FORCEINLINE float Acos(float Value) { return acosf((Value < -1.f) ? -1.f : ((Value < 1.f) ? Value : 1.f)); }
		static FORCEINLINE float Tan(float Value) { return tanf(Value); }
		static FORCEINLINE float Atan(float Value) { return atanf(Value); }
		static FORCEINLINE float Sqrt(float Value) { return sqrtf(Value); }
		static FORCEINLINE float Pow(float A, float B) { return powf(A, B); }
		static FORCEINLINE float Atan2(float Y, float X)
		{
			//return atan2f(Y,X);
			// atan2f occasionally returns NaN with perfectly valid input (possibly due to a compiler or library bug).
			// We are replacing it with a minimax approximation with a max relative error of 7.15255737e-007 compared to the C library function.
			// On PC this has been measured to be 2x faster than the std C version.

			const float absX = FMath::Abs(X);
			const float absY = FMath::Abs(Y);
			const bool yAbsBigger = (absY > absX);
			float t0 = yAbsBigger ? absY : absX; // Max(absY, absX)
			float t1 = yAbsBigger ? absX : absY; // Min(absX, absY)

			if (t0 == 0.f)
				return 0.f;

			float t3 = t1 / t0;
			float t4 = t3 * t3;

			static const float c[7] = {
				+7.2128853633444123e-03f,
				-3.5059680836411644e-02f,
				+8.1675882859940430e-02f,
				-1.3374657325451267e-01f,
				+1.9856563505717162e-01f,
				-3.3324998579202170e-01f,
				+1.0f
			};

			t0 = c[0];
			t0 = t0 * t4 + c[1];
			t0 = t0 * t4 + c[2];
			t0 = t0 * t4 + c[3];
			t0 = t0 * t4 + c[4];
			t0 = t0 * t4 + c[5];
			t0 = t0 * t4 + c[6];
			t3 = t0 * t3;

			t3 = yAbsBigger ? (0.5f * PI) - t3 : t3;
			t3 = (X < 0.0f) ? PI - t3 : t3;
			t3 = (Y < 0.0f) ? -t3 : t3;

			return t3;
		}

		/** Computes a fully accurate inverse square root */
		static FORCEINLINE float InvSqrt(float F)
		{
			return 1.0f / sqrtf(F);
		}

		/** Computes a faster but less accurate inverse square root */
		static FORCEINLINE float InvSqrtEst(float F)
		{
			return InvSqrt(F);
		}

		/** Return true if value is NaN (not a number). */
		static FORCEINLINE bool IsNaN(float A)
		{
			return ((*(uint32*)&A) & 0x7FFFFFFFU) > 0x7F800000U;
		}
		static FORCEINLINE bool IsNaN(double A)
		{
			return ((*(uint64*)&A) & 0x7FFFFFFFFFFFFFFFULL) > 0x7FF0000000000000ULL;
		}

		/** Return true if value is finite (not NaN and not Infinity). */
		static FORCEINLINE bool IsFinite(float A)
		{
			return ((*(uint32*)&A) & 0x7F800000U) != 0x7F800000U;
		}
		static FORCEINLINE bool IsFinite(double A)
		{
			return ((*(uint64*)&A) & 0x7FF0000000000000ULL) != 0x7FF0000000000000ULL;
		}

		static FORCEINLINE bool IsNegativeFloat(float A)
		{
			return ((*(uint32*)&A) >= (uint32)0x80000000); // Detects sign bit.
		}

		static FORCEINLINE bool IsNegativeDouble(double A)
		{
			return ((*(uint64*)&A) >= (uint64)0x8000000000000000); // Detects sign bit.
		}

		/** Returns a random integer between 0 and RAND_MAX, inclusive */
		static FORCEINLINE int32 Rand() { return rand(); }

		/** Seeds global random number functions Rand() and FRand() */
		static FORCEINLINE void RandInit(int32 Seed) { srand(Seed); }

		/** Returns a random float between 0 and 1, inclusive. */
		static FORCEINLINE float FRand()
		{
			// FP32 mantissa can only represent 24 bits before losing precision
			constexpr int32 RandMax = 0x00ffffff < RAND_MAX ? 0x00ffffff : RAND_MAX;
			return (Rand() & RandMax) / (float)RandMax;
		}

		/**
		 * Computes the base 2 logarithm for an integer value that is greater than 0.
		 * The result is rounded down to the nearest integer.
		 *
		 * @param Value		The value to compute the log of
		 * @return			Log2 of Value. 0 if Value is 0.
		 */
		static FORCEINLINE uint32 FloorLog2(uint32 Value)
		{
			/*		// reference implementation
					// 1500ms on test data
					uint32 Bit = 32;
					for (; Bit > 0;)
					{
						Bit--;
						if (Value & (1<<Bit))
						{
							break;
						}
					}
					return Bit;
			*/
			// same output as reference

			// see http://codinggorilla.domemtech.com/?p=81 or http://en.wikipedia.org/wiki/Binary_logarithm but modified to return 0 for a input value of 0
			// 686ms on test data
			uint32 pos = 0;
			if (Value >= 1 << 16) { Value >>= 16; pos += 16; }
			if (Value >= 1 << 8) { Value >>= 8; pos += 8; }
			if (Value >= 1 << 4) { Value >>= 4; pos += 4; }
			if (Value >= 1 << 2) { Value >>= 2; pos += 2; }
			if (Value >= 1 << 1) { pos += 1; }
			return (Value == 0) ? 0 : pos;

			// even faster would be method3 but it can introduce more cache misses and it would need to store the table somewhere
			// 304ms in test data
			/*int LogTable256[256];

			void prep()
			{
				LogTable256[0] = LogTable256[1] = 0;
				for (int i = 2; i < 256; i++)
				{
					LogTable256[i] = 1 + LogTable256[i / 2];
				}
				LogTable256[0] = -1; // if you want log(0) to return -1
			}

			int _forceinline method3(uint32 v)
			{
				int r;     // r will be lg(v)
				uint32 tt; // temporaries

				if ((tt = v >> 24) != 0)
				{
					r = (24 + LogTable256[tt]);
				}
				else if ((tt = v >> 16) != 0)
				{
					r = (16 + LogTable256[tt]);
				}
				else if ((tt = v >> 8 ) != 0)
				{
					r = (8 + LogTable256[tt]);
				}
				else
				{
					r = LogTable256[v];
				}
				return r;
			}*/
		}

		/**
		 * Computes the base 2 logarithm for a 64-bit value that is greater than 0.
		 * The result is rounded down to the nearest integer.
		 *
		 * @param Value		The value to compute the log of
		 * @return			Log2 of Value. 0 if Value is 0.
		 */
		static FORCEINLINE uint64 FloorLog2_64(uint64 Value)
		{
			uint64 pos = 0;
			if (Value >= 1ull << 32) { Value >>= 32; pos += 32; }
			if (Value >= 1ull << 16) { Value >>= 16; pos += 16; }
			if (Value >= 1ull << 8) { Value >>= 8; pos += 8; }
			if (Value >= 1ull << 4) { Value >>= 4; pos += 4; }
			if (Value >= 1ull << 2) { Value >>= 2; pos += 2; }
			if (Value >= 1ull << 1) { pos += 1; }
			return (Value == 0) ? 0 : pos;
		}

		/**
		 * Counts the number of leading zeros in the bit representation of the 8-bit value
		 *
		 * @param Value the value to determine the number of leading zeros for
		 *
		 * @return the number of zeros before the first "on" bit
		 */
		static FORCEINLINE uint8 CountLeadingZeros8(uint8 Value)
		{
			if (Value == 0) return 8;
			return uint8(7 - FloorLog2(uint32(Value)));
		}

		/**
		 * Counts the number of leading zeros in the bit representation of the 32-bit value
		 *
		 * @param Value the value to determine the number of leading zeros for
		 *
		 * @return the number of zeros before the first "on" bit
		 */
		static FORCEINLINE uint32 CountLeadingZeros(uint32 Value)
		{
			if (Value == 0) return 32;
			return 31 - FloorLog2(Value);
		}

		/**
		 * Counts the number of leading zeros in the bit representation of the 64-bit value
		 *
		 * @param Value the value to determine the number of leading zeros for
		 *
		 * @return the number of zeros before the first "on" bit
		 */
		static FORCEINLINE uint64 CountLeadingZeros64(uint64 Value)
		{
			if (Value == 0) return 64;
			return 63 - FloorLog2_64(Value);
		}

		/**
		 * Counts the number of trailing zeros in the bit representation of the value
		 *
		 * @param Value the value to determine the number of trailing zeros for
		 *
		 * @return the number of zeros after the last "on" bit
		 */
		static FORCEINLINE uint32 CountTrailingZeros(uint32 Value)
		{
			if (Value == 0)
			{
				return 32;
			}
			uint32 Result = 0;
			while ((Value & 1) == 0)
			{
				Value >>= 1;
				++Result;
			}
			return Result;
		}

		/**
		 * Counts the number of trailing zeros in the bit representation of the value
		 *
		 * @param Value the value to determine the number of trailing zeros for
		 *
		 * @return the number of zeros after the last "on" bit
		 */
		static FORCEINLINE uint64 CountTrailingZeros64(uint64 Value)
		{
			if (Value == 0)
			{
				return 64;
			}
			uint64 Result = 0;
			while ((Value & 1) == 0)
			{
				Value >>= 1;
				++Result;
			}
			return Result;
		}

		/**
		 * Returns smallest N such that (1<<N)>=Arg.
		 * Note: CeilLogTwo(0)=0 because (1<<0)=1 >= 0.
		 */
		static FORCEINLINE uint32 CeilLogTwo(uint32 Arg)
		{
			int32 Bitmask = ((int32)(CountLeadingZeros(Arg) << 26)) >> 31;
			return (32 - CountLeadingZeros(Arg - 1)) & (~Bitmask);
		}

		static FORCEINLINE uint64 CeilLogTwo64(uint64 Arg)
		{
			int64 Bitmask = ((int64)(CountLeadingZeros64(Arg) << 57)) >> 63;
			return (64 - CountLeadingZeros64(Arg - 1)) & (~Bitmask);
		}

		/** @return Rounds the given number up to the next highest power of two. */
		static FORCEINLINE uint32 RoundUpToPowerOfTwo(uint32 Arg)
		{
			return 1 << CeilLogTwo(Arg);
		}

		static FORCEINLINE uint64 RoundUpToPowerOfTwo64(uint64 V)
		{
			return uint64(1) << CeilLogTwo64(V);
		}

		/** Spreads bits to every other. */
		static FORCEINLINE uint32 MortonCode2(uint32 x)
		{
			x &= 0x0000ffff;
			x = (x ^ (x << 8)) & 0x00ff00ff;
			x = (x ^ (x << 4)) & 0x0f0f0f0f;
			x = (x ^ (x << 2)) & 0x33333333;
			x = (x ^ (x << 1)) & 0x55555555;
			return x;
		}

		static FORCEINLINE uint64 MortonCode2_64(uint64 x)
		{
			x &= 0x00000000ffffffff;
			x = (x ^ (x << 16)) & 0x0000ffff0000ffff;
			x = (x ^ (x << 8)) & 0x00ff00ff00ff00ff;
			x = (x ^ (x << 4)) & 0x0f0f0f0f0f0f0f0f;
			x = (x ^ (x << 2)) & 0x3333333333333333;
			x = (x ^ (x << 1)) & 0x5555555555555555;
			return x;
		}

		/** Reverses MortonCode2. Compacts every other bit to the right. */
		static FORCEINLINE uint32 ReverseMortonCode2(uint32 x)
		{
			x &= 0x55555555;
			x = (x ^ (x >> 1)) & 0x33333333;
			x = (x ^ (x >> 2)) & 0x0f0f0f0f;
			x = (x ^ (x >> 4)) & 0x00ff00ff;
			x = (x ^ (x >> 8)) & 0x0000ffff;
			return x;
		}

		static FORCEINLINE uint64 ReverseMortonCode2_64(uint64 x)
		{
			x &= 0x5555555555555555;
			x = (x ^ (x >> 1)) & 0x3333333333333333;
			x = (x ^ (x >> 2)) & 0x0f0f0f0f0f0f0f0f;
			x = (x ^ (x >> 4)) & 0x00ff00ff00ff00ff;
			x = (x ^ (x >> 8)) & 0x0000ffff0000ffff;
			x = (x ^ (x >> 16)) & 0x00000000ffffffff;
			return x;
		}

		/** Spreads bits to every 3rd. */
		static FORCEINLINE uint32 MortonCode3(uint32 x)
		{
			x &= 0x000003ff;
			x = (x ^ (x << 16)) & 0xff0000ff;
			x = (x ^ (x << 8)) & 0x0300f00f;
			x = (x ^ (x << 4)) & 0x030c30c3;
			x = (x ^ (x << 2)) & 0x09249249;
			return x;
		}

		/** Reverses MortonCode3. Compacts every 3rd bit to the right. */
		static FORCEINLINE uint32 ReverseMortonCode3(uint32 x)
		{
			x &= 0x09249249;
			x = (x ^ (x >> 2)) & 0x030c30c3;
			x = (x ^ (x >> 4)) & 0x0300f00f;
			x = (x ^ (x >> 8)) & 0xff0000ff;
			x = (x ^ (x >> 16)) & 0x000003ff;
			return x;
		}

		/**
		 * Returns value based on comparand. The main purpose of this function is to avoid
		 * branching based on floating point comparison which can be avoided via compiler
		 * intrinsics.
		 *
		 * Please note that we don't define what happens in the case of NaNs as there might
		 * be platform specific differences.
		 *
		 * @param	Comparand		Comparand the results are based on
		 * @param	ValueGEZero		Return value if Comparand >= 0
		 * @param	ValueLTZero		Return value if Comparand < 0
		 *
		 * @return	ValueGEZero if Comparand >= 0, ValueLTZero otherwise
		 */
		static CONSTEXPR FORCEINLINE float FloatSelect(float Comparand, float ValueGEZero, float ValueLTZero)
		{
			return Comparand >= 0.f ? ValueGEZero : ValueLTZero;
		}

		/**
		 * Returns value based on comparand. The main purpose of this function is to avoid
		 * branching based on floating point comparison which can be avoided via compiler
		 * intrinsics.
		 *
		 * Please note that we don't define what happens in the case of NaNs as there might
		 * be platform specific differences.
		 *
		 * @param	Comparand		Comparand the results are based on
		 * @param	ValueGEZero		Return value if Comparand >= 0
		 * @param	ValueLTZero		Return value if Comparand < 0
		 *
		 * @return	ValueGEZero if Comparand >= 0, ValueLTZero otherwise
		 */
		static CONSTEXPR FORCEINLINE double FloatSelect(double Comparand, double ValueGEZero, double ValueLTZero)
		{
			return Comparand >= 0.f ? ValueGEZero : ValueLTZero;
		}
		/** Computes absolute value in a generic way */
		template< class T >
		static CONSTEXPR FORCEINLINE T Abs(const T A)
		{
			return (A >= (T)0) ? A : -A;
		}

		/** Returns 1, 0, or -1 depending on relation of T to 0 */
		template< class T >
		static CONSTEXPR FORCEINLINE T Sign(const T A)
		{
			return (A > (T)0) ? (T)1 : ((A < (T)0) ? (T)-1 : (T)0);
		}

		/** Returns higher value in a generic way */
		template< class T >
		static CONSTEXPR FORCEINLINE T Max(const T A, const T B)
		{
			return (A >= B) ? A : B;
		}

		/** Returns lower value in a generic way */
		template< class T >
		static CONSTEXPR FORCEINLINE T Min(const T A, const T B)
		{
			return (A <= B) ? A : B;
		}

		static FORCEINLINE int32 CountBits(uint64 Bits)
		{
			// https://en.wikipedia.org/wiki/Hamming_weight
			Bits -= (Bits >> 1) & 0x5555555555555555ull;
			Bits = (Bits & 0x3333333333333333ull) + ((Bits >> 2) & 0x3333333333333333ull);
			Bits = (Bits + (Bits >> 4)) & 0x0f0f0f0f0f0f0f0full;
			return (Bits * 0x0101010101010101) >> 56;
		}

		// Note:  We use FASTASIN_HALF_PI instead of HALF_PI inside of FastASin(), since it was the value that accompanied the minimax coefficients below.
		// It is important to use exactly the same value in all places inside this function to ensure that FastASin(0.0f) == 0.0f.
		// For comparison:
		//		HALF_PI				== 1.57079632679f == 0x3fC90FDB
		//		FASTASIN_HALF_PI	== 1.5707963050f  == 0x3fC90FDA
#define FASTASIN_HALF_PI (1.5707963050f)
	/**
	* Computes the ASin of a scalar value.
	*
	* @param Value  input angle
	* @return ASin of Value
	*/
		static FORCEINLINE float FastAsin(float Value)
		{
			// Clamp input to [-1,1].
			bool nonnegative = (Value >= 0.0f);
			float x = FMath::Abs(Value);
			float omx = 1.0f - x;
			if (omx < 0.0f)
			{
				omx = 0.0f;
			}
			float root = FMath::Sqrt(omx);
			// 7-degree minimax approximation
			float result = ((((((-0.0012624911f * x + 0.0066700901f) * x - 0.0170881256f) * x + 0.0308918810f) * x - 0.0501743046f) * x + 0.0889789874f) * x - 0.2145988016f) * x + FASTASIN_HALF_PI;
			result *= root;  // acos(|x|)
			// acos(x) = pi - acos(-x) when x < 0, asin(x) = pi/2 - acos(x)
			return (nonnegative ? FASTASIN_HALF_PI - result : result - FASTASIN_HALF_PI);
		}
#undef FASTASIN_HALF_PI


		// Conversion Functions

		/**
		 * Converts radians to degrees.
		 * @param	RadVal			Value in radians.
		 * @return					Value in degrees.
		 */
		template<class T>
		static FORCEINLINE auto RadiansToDegrees(T const& RadVal) -> decltype(RadVal* (180.f / PI))
		{
			return RadVal * (180.f / PI);
		}

		/**
		 * Converts degrees to radians.
		 * @param	DegVal			Value in degrees.
		 * @return					Value in radians.
		 */
		template<class T>
		static FORCEINLINE auto DegreesToRadians(T const& DegVal) -> decltype(DegVal* (PI / 180.f))
		{
			return DegVal * (PI / 180.f);
		}

		/** Find the smallest angle between two headings (in degrees) */
		static float FindDeltaAngleDegrees(float A1, float A2)
		{
			// Find the difference
			float Delta = A2 - A1;

			// If change is larger than 180
			if (Delta > 180.0f)
			{
				// Flip to negative equivalent
				Delta = Delta - 360.0f;
			}
			else if (Delta < -180.0f)
			{
				// Otherwise, if change is smaller than -180
				// Flip to positive equivalent
				Delta = Delta + 360.0f;
			}

			// Return delta in [-180,180] range
			return Delta;
		}

		/** Find the smallest angle between two headings (in radians) */
		static float FindDeltaAngleRadians(float A1, float A2)
		{
			// Find the difference
			float Delta = A2 - A1;

			// If change is larger than PI
			if (Delta > PI)
			{
				// Flip to negative equivalent
				Delta = Delta - (PI * 2.0f);
			}
			else if (Delta < -PI)
			{
				// Otherwise, if change is smaller than -PI
				// Flip to positive equivalent
				Delta = Delta + (PI * 2.0f);
			}

			// Return delta in [-PI,PI] range
			return Delta;
		}


		static float FindDeltaAngle(float A1, float A2)
		{
			return FindDeltaAngleRadians(A1, A2);
		}

		/** Given a heading which may be outside the +/- PI range, 'unwind' it back into that range. */
		static float UnwindRadians(float A)
		{
			while (A > PI)
			{
				A -= ((float)PI * 2.0f);
			}

			while (A < -PI)
			{
				A += ((float)PI * 2.0f);
			}

			return A;
		}

		/** Utility to ensure angle is between +/- 180 degrees by unwinding. */
		static float UnwindDegrees(float A)
		{
			while (A > 180.f)
			{
				A -= 360.f;
			}

			while (A < -180.f)
			{
				A += 360.f;
			}

			return A;
		}
	};
}