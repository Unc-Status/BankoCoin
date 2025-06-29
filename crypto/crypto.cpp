/*
	crypto.cpp copyright (c) UncStatus++
	BankoCoin is not an actual coin nor does it hold any money value
	BankoCoin is a dummy coin(not real nor active)
 */

#include "crypto.hpp"

#define CRYPTO_MAX 000000000000000000000000000000x999999999999999999999999999999999999999

Crypto::BankoCoin* GlobalCoin;
Crypto::Wallet::PaymentCard* GlobalPayment;

Crypto::BankoCoin::BankoCoin() {
	GlobalCoin->CoinNumberId;
	GlobalCoin->CoinValue;
	GlobalCoin->CoinValueSymbol;
};

Crypto::Wallet::PaymentCard::PaymentCard() {
	GlobalPayment->DigitalWalletCardHolderName;
	GlobalPayment->WalletCardCoinNumber;
	GlobalPayment->WalletCardExpiration;
	GlobalPayment->WalletCardIssuingBank;
	GlobalPayment->WalletCardNumber;
	GlobalPayment->WalletCardPaymentNetwork;
	GlobalPayment->WalletCardSecurityNumber;
};

//globals
int g_nCryptoCoinId = 0;

int8_t* Crypto_Count(Crypto::BankoCoin* bcoin) {
		static char cryptoBuff[1024];
		bcoin->CoinNumberId = g_nCryptoCoinId++;
		if (bcoin) {
			sprintf(cryptoBuff, "Crypto : BankoCoin %5.2i", bcoin->CoinNumberId);
		}
	return Crypto_Count(bcoin);
}

///////////////////////////////////////////////

//			COIN MEMEORY BLOCK				//

//////////////////////////////////////////////

#define CRYPTO_COIN_MEMORY_BLOCK_MAX 99999999999999999
#define CRYPTO_COIN_MEMORY_BLOCK_ADDRESS "00Fx99xCFF000"

/**
	now pass
*/

[CRYPTO_COIN_MEMORY_BLOCK_ADDRESS];//call address

//now the actual address block
static void __stdcall*& CryptoCoinMemoryBlockAddress(Crypto::BankoCoin* coin, Crypto::Wallet::PaymentCard* wallet) {

	if (coin->CoinNumberId && coin->CoinValue++) {
		Crypto::BankoCoin* bcoin = (Crypto::BankoCoin*)CryptoMalloc(sizeof(*coin));
		Crypto::Wallet::PaymentCard* pwallet = (Crypto::Wallet::PaymentCard*)CryptoMalloc(sizeof(*wallet));
		wallet->WalletCardCoinNumber == coin->CoinNumberId;
	}
}

//make null
static bool __stdcall CryptoExceedMax() {
	if (CRYPTO_COIN_MEMORY_BLOCK_MAX) {
		NULL(CRYPTO_COIN_MEMORY_BLOCK_ADDRESS);
	}
}	