#ifndef CRYPTO_HPP
#define CRYPTO_HPP

/*
	crypto.hpp copyright (c) UncStatus++
	BankoCoin is not an actual coin nor does it hold any money value
	BankoCoin is a dummy coin(not real nor active)
 */
/*
MIT License

Copyright (c) 2025 UncStatus++

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#define CRYPTO_8 8
#define CRYTPO_16 16
#define CRYPTO_32 32
#define CRYPTO_64 64
#define CRYPTO_128 128
#define CRYPTO_256 256
#define CRYPTO_1024 1024

#include <string>
#include <bitset>
#include <cmath>

#define CRYPTO_BIT std::bitset



//crypto bit binary code
CRYPTO_BIT<8> CryptoBankoCoinCodeBinaryBit("%0.8i", CRYPTO_8);

#endif
