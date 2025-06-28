#ifndef CRYPTO_HPP
#define CRYPTO_HPP

/*
	crypto.hpp copyright (c) UncStatus++
	BankoCoin is not an actual coin nor does it hold any money value
	BankoCoin is a dummy coin(not real nor active)
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