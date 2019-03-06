#include "pch.h"
#include "soundex.h"

TEST(SoundexEncoding, RetainSoleLetterOfOneLetterWord) {
	Soundex sndex;
	std::string encoded = sndex.encode("A");
	ASSERT_EQ(encoded, std::string("A000"));
}

TEST(SoundexEncoding, PadWithZerosToEnsureThreeDigits) {
	Soundex sndex;
	std::string encoded = sndex.encode("I");
	ASSERT_EQ(encoded, std::string("I000"));
}

TEST(SoundexEncoding, ReplacesConsonantsWithAppropriateDigits) {
	Soundex sndex;
	std::string encoded = sndex.encode("Ab");
	ASSERT_EQ(encoded, std::string("A100"));
}