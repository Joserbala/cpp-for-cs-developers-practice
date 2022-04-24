#pragma once

struct Flags
{
	// Unnamed struct with bit fields
	// The data member Bits is static
	static struct
	{
		bool IsStarted : 1;
		bool WonGame : 1;
		bool GotHighScore : 1;
		bool FoundSecret : 1;
		bool PlayedMultiplayer : 1;
		bool IsLoggedIn : 1;
		bool RatedGame : 1;
		bool RanBenchmark : 1;
	} Bits;
};
