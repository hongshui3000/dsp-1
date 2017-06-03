/* 24 kesleltetovonalas, kis szobat szimulalo FDN parameterei. */

#ifndef _FDNPARAMSSMALLROOM_H_
#define _FDNPARAMSSMALLROOM_H_

	/* kesleltetovonalak hossza (relativ primek!) */
	#define M2_1 181
	#define M2_2 193
	#define M2_3 199
	#define M2_4 223
	#define M2_5 229
	#define M2_6 239
	#define M2_7 251
	#define M2_8 263
	#define M2_9 271
	#define M2_10 281
	#define M2_11 293
	#define M2_12 311
	#define M2_13 317
	#define M2_14 337
	#define M2_15 349
	#define M2_16 359
	#define M2_17 373
	#define M2_18 379
	#define M2_19 383
	#define M2_20 397
	#define M2_21 409
	#define M2_22 421
	#define M2_23 433
	#define M2_24 439
	/* kesleltetok utani szurok parameterei: Hi(z)=gi*(1-pi)/(1-pi*z^-1) */
	const float pm G2[24]={0.9717187500, 0.9698437500, 0.9689062500, 0.9651562500, 0.9642187500, 0.9626562500, 0.9607812500, 0.9589062500, 0.9576562500, 0.9560937500, 0.9542187500, 0.9514062500, 0.9504687500, 0.9473437500, 0.9454687500, 0.9439062500, 0.9417187500, 0.9407812500, 0.9401562500, 0.9379687500, 0.9360937500, 0.9342187500, 0.9323437500, 0.9314062500};
	const float pm P2[24]={0.0509460374, 0.0539772207, 0.0554787382, 0.0613934508, 0.0628498011, 0.0652576937, 0.0681157697, 0.0709402991, 0.0728050389, 0.0751157651, 0.0778595344, 0.0819170421, 0.0832543606, 0.0876586267, 0.0902625494, 0.0924108670, 0.0953861498, 0.0966499030, 0.0974886655, 0.1004010790, 0.1028691039, 0.1053115057, 0.1077287694, 0.1089281222};
	/* visszacsatolo matrix (Hadamard) */
	const float pm A2[24][24]={
		{0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667, -0.0833333333},
		{-0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, -0.0833333333, 0.9166666667}
	};
	/* csillapitas a bemenettol a kesleltetovonalak elejeig */
	const float pm B2L[24]={0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5};
	const float pm B2R[24]={0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5};
	/* csillapitas a kesleltetovonalak vegetol a kimenetig */
	const float pm C2L[24]={-1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0};
	const float pm C2R[24]={1.0, 1.0, -1.0, -1.0, -1.0, 1.0, -1.0, 1.0, 1.0, 1.0, -1.0, 1.0, -1.0, -1.0, 1.0, 1.0, 1.0, -1.0, 1.0, -1.0, -1.0, -1.0, 1.0, -1.0};
	/* a kimenetre kozvetlenul juto bemenet csillapodasa */
	#define D2L 1.0
	#define D2R 1.0
	/* a kozvetlen jelut kesleltetese */
	#define M2_L 97
	#define M2_R 127

#endif
