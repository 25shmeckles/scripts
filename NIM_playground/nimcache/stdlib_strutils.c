/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/amarcozzi/homebrew/Cellar/nim/0.17.0/nim/lib -o /Users/amarcozzi/scripts/NIM_playground/nimcache/stdlib_strutils.o /Users/amarcozzi/scripts/NIM_playground/nimcache/stdlib_strutils.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Slice_WC2BEYwxNBO9aTbMc8sJqPg Slice_WC2BEYwxNBO9aTbMc8sJqPg;
typedef struct ValueError_Gi06FkNeykJn7mrqRZYrkA ValueError_Gi06FkNeykJn7mrqRZYrkA;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct TY_sM4lkSb7zS6F7OVMvW9cffQ TY_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Slice_WC2BEYwxNBO9aTbMc8sJqPg  {
NI a;
NI b;
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  ValueError_Gi06FkNeykJn7mrqRZYrkA  {
  Exception Sup;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef NU8 TY_nmiMWKVIe46vacnhAFrQvw_Set[32];
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, reverse_LoixoqZetR6FfezoPedx8w)(NimStringDesc** a, NI aLen_0);
N_NIMCALL(void, reverse_XQiN4wExsmIg8NFBmG3ObA)(NimStringDesc** a, NI aLen_0, NI first, NI last);
static N_INLINE(NIM_BOOL, contains_I9cy9aN2znlBRynMcXN4pBGgstrutils)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
static N_INLINE(NI, find_b3HPX1XboPhUmnxkTjazFQstrutils)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, contains_tKnjuJQDI4zGjoGUKWyD2wstrutils)(Slice_WC2BEYwxNBO9aTbMc8sJqPg s, NI value);
N_NIMCALL(NF, round_FL9bhksfuQsfLDCxRHuknsg)(NF x, NI places);
static N_INLINE(void, stareq__7kHiltrvRlcg6wSYR3CxAwstrutils)(NF* x, NF y);
static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAw_2strutils)(NF* x, NF y);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_yCEN9anxCD6mzBxGjuaRBdg_;
extern TNimType NTI_Gi06FkNeykJn7mrqRZYrkA_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TNimType NTI_sM4lkSb7zS6F7OVMvW9cffQ_;
STRING_LITERAL(TM_JGc9b9bh2D3nTdUR7TGyq8aA_4, "invalid integer: ", 17);
STRING_LITERAL(TM_JGc9b9bh2D3nTdUR7TGyq8aA_11, "", 0);

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NI, find_b3HPX1XboPhUmnxkTjazFQstrutils)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NI result;
	nimfr_("find", "system.nim")
{	result = (NI)0;
	{
		NIM_CHAR i;
		NI i_2;
		i = (NIM_CHAR)0;
		nimln_(2052, "system.nim");
		i_2 = ((NI) 0);
		{
			nimln_(2053, "system.nim");
			while (1) {
				NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_2;
				NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_3;
				if (!(i_2 < aLen_0)) goto LA3;
				nimln_(2054, "system.nim");
				if ((NU)(i_2) >= (NU)(aLen_0)) raiseIndexError();
				i = a[i_2];
				nimln_(2286, "system.nim");
				{
					if (!((NU8)(i) == (NU8)(item))) goto LA6_;
					goto BeforeRet_;
				}
				LA6_: ;
				nimln_(2287, "system.nim");
				TM_JGc9b9bh2D3nTdUR7TGyq8aA_2 = addInt(result, ((NI) 1));
				result = (NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_2);
				nimln_(2055, "system.nim");
				TM_JGc9b9bh2D3nTdUR7TGyq8aA_3 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_3);
			} LA3: ;
		}
	}
	nimln_(2288, "system.nim");
	result = ((NI) -1);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, contains_I9cy9aN2znlBRynMcXN4pBGgstrutils)(NIM_CHAR* a, NI aLen_0, NIM_CHAR item) {
	NIM_BOOL result;
	NI T1_;
	nimfr_("contains", "system.nim")
{	result = (NIM_BOOL)0;
	nimln_(2293, "system.nim");
	T1_ = (NI)0;
	T1_ = find_b3HPX1XboPhUmnxkTjazFQstrutils(a, aLen_0, item);
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, contains_tKnjuJQDI4zGjoGUKWyD2wstrutils)(Slice_WC2BEYwxNBO9aTbMc8sJqPg s, NI value) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("contains", "system.nim")
	result = (NIM_BOOL)0;
	nimln_(1146, "system.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) (s.a)) <= ((NI) (value)));
	if (!(T1_)) goto LA2_;
	T1_ = (((NI) (value)) <= ((NI) (s.b)));
	LA2_: ;
	result = T1_;
	popFrame();
	return result;
}

static N_INLINE(void, stareq__7kHiltrvRlcg6wSYR3CxAwstrutils)(NF* x, NF y) {
	nimfr_("*=", "system.nim")
	nimln_(3485, "system.nim");
	(*x) = ((NF)((*x)) * (NF)(y));
	popFrame();
}

static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAw_2strutils)(NF* x, NF y) {
	nimfr_("+=", "system.nim")
	nimln_(3475, "system.nim");
	(*x) = ((NF)((*x)) + (NF)(y));
	popFrame();
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x, NI minchars) {
	NimStringDesc* result;
	nimfr_("intToStr", "strutils.nim")
	result = (NimStringDesc*)0;
	result = nimIntToStr((x > 0? (x) : -(x)));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(((NI) (minchars)) - (result ? result->Sup.len : 0));
		res = ((NI) 1);
		{
			while (1) {
				NimStringDesc* T4_;
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				T4_ = (NimStringDesc*)0;
				T4_ = rawNewString(result->Sup.len + 1);
appendChar(T4_, 48);
appendString(T4_, result);
				result = T4_;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	{
		NimStringDesc* T9_;
		if (!(x < ((NI) 0))) goto LA7_;
		T9_ = (NimStringDesc*)0;
		T9_ = rawNewString(result->Sup.len + 1);
appendChar(T9_, 45);
appendString(T9_, result);
		result = T9_;
	}
	LA7_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count) {
	NimStringDesc* result;
	nimfr_("repeat", "strutils.nim")
	result = (NimStringDesc*)0;
	result = mnewString(count);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(((NI) (count)) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= ((NI) (colontmp_)))) goto LA3;
				i = ((NI) (res));
				result->data[i] = c;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim")
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim")
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim")
	nimln_(288, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(363, "system.nim");
		nimln_(288, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(289, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(290, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(291, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(363, "system.nim");
		nimln_(291, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(292, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(293, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(294, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(295, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim")
	nimln_(196, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim")
	nimln_(223, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(224, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim")
	nimln_(281, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(363, "system.nim");
		nimln_(281, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(282, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(363, "system.nim");
		nimln_(282, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(283, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s) {
	NI result;
	NI L;
	nimfr_("parseInt", "strutils.nim")
	result = (NI)0;
	L = npuParseInt(s, (&result), ((NI) 0));
	{
		NIM_BOOL T3_;
		ValueError_Gi06FkNeykJn7mrqRZYrkA* e;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((L == (s ? s->Sup.len : 0)));
		if (T3_) goto LA4_;
		T3_ = (L == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		e = (ValueError_Gi06FkNeykJn7mrqRZYrkA*)0;
		e = (ValueError_Gi06FkNeykJn7mrqRZYrkA*) newObj((&NTI_yCEN9anxCD6mzBxGjuaRBdg_), sizeof(ValueError_Gi06FkNeykJn7mrqRZYrkA));
		(*e).Sup.Sup.m_type = (&NTI_Gi06FkNeykJn7mrqRZYrkA_);
		T7_ = (NimStringDesc*)0;
		T7_ = rawNewString(s->Sup.len + 17);
appendString(T7_, ((NimStringDesc*) &TM_JGc9b9bh2D3nTdUR7TGyq8aA_4));
appendString(T7_, s);
		asgnRefNoCycle((void**) (&(*e).Sup.message), T7_);
		asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
		raiseException((Exception*)e, "ValueError");
	}
	LA5_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr_("toLowerAscii", "strutils.nim")
	result = (NIM_CHAR)0;
	nimln_(209, "strutils.nim");
	{
		NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_6;
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		nimln_(210, "strutils.nim");
		TM_JGc9b9bh2D3nTdUR7TGyq8aA_6 = addInt(((NI) (((NU8)(c)))), ((NI) 32));
		result = ((NIM_CHAR) (((NI)chckRange((NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_6), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA3_: ;
	{
		nimln_(212, "strutils.nim");
		result = c;
	}
	LA1_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuToLowerAsciiStr)(NimStringDesc* s) {
	NimStringDesc* result;
	nimfr_("toLowerAscii", "strutils.nim")
	result = (NimStringDesc*)0;
	nimln_(221, "strutils.nim");
	result = mnewString(((NI)chckRange((s ? s->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	{
		NI i;
		NI colontmp_;
		NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_5;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(222, "strutils.nim");
		TM_JGc9b9bh2D3nTdUR7TGyq8aA_5 = subInt((s ? s->Sup.len : 0), ((NI) 1));
		colontmp_ = (NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_5);
		nimln_(1955, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1956, "system.nim");
			while (1) {
				NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_7;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(1957, "system.nim");
				i = res;
				if ((NU)(i) > (NU)(result->Sup.len)) raiseIndexError();
				nimln_(223, "strutils.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				result->data[i] = nsuToLowerAsciiChar(s->data[i]);
				nimln_(1976, "system.nim");
				TM_JGc9b9bh2D3nTdUR7TGyq8aA_7 = addInt(res, ((NI) 1));
				res = (NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_7);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	NI i;
	NI m;
	NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_10;
	nimfr_("cmpIgnoreCase", "strutils.nim")
{	result = (NI)0;
	nimln_(410, "strutils.nim");
	i = ((NI) 0);
	nimln_(411, "strutils.nim");
	m = (((a ? a->Sup.len : 0) <= (b ? b->Sup.len : 0)) ? (a ? a->Sup.len : 0) : (b ? b->Sup.len : 0));
	{
		nimln_(412, "strutils.nim");
		while (1) {
			NIM_CHAR T3_;
			NIM_CHAR T4_;
			NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_8;
			NI TM_JGc9b9bh2D3nTdUR7TGyq8aA_9;
			if (!(i < m)) goto LA2;
			nimln_(413, "strutils.nim");
			if ((NU)(i) > (NU)(a->Sup.len)) raiseIndexError();
			T3_ = (NIM_CHAR)0;
			T3_ = nsuToLowerAsciiChar(a->data[i]);
			if ((NU)(i) > (NU)(b->Sup.len)) raiseIndexError();
			T4_ = (NIM_CHAR)0;
			T4_ = nsuToLowerAsciiChar(b->data[i]);
			TM_JGc9b9bh2D3nTdUR7TGyq8aA_8 = subInt(((NI) (((NU8)(T3_)))), ((NI) (((NU8)(T4_)))));
			result = (NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_8);
			nimln_(414, "strutils.nim");
			{
				nimln_(363, "system.nim");
				nimln_(414, "strutils.nim");
				if (!!((result == ((NI) 0)))) goto LA7_;
				goto BeforeRet_;
			}
			LA7_: ;
			nimln_(415, "strutils.nim");
			TM_JGc9b9bh2D3nTdUR7TGyq8aA_9 = addInt(i, ((NI) 1));
			i = (NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_9);
		} LA2: ;
	}
	nimln_(416, "strutils.nim");
	TM_JGc9b9bh2D3nTdUR7TGyq8aA_10 = subInt((a ? a->Sup.len : 0), (b ? b->Sup.len : 0));
	result = (NI)(TM_JGc9b9bh2D3nTdUR7TGyq8aA_10);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim")
	nimln_(270, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(272, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(273, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

N_NIMCALL(TY_sM4lkSb7zS6F7OVMvW9cffQ*, nsuSplitCharSet)(NimStringDesc* s, TY_nmiMWKVIe46vacnhAFrQvw_Set seps, NI maxsplit) {
	TY_sM4lkSb7zS6F7OVMvW9cffQ* result;
	nimfr_("split", "strutils.nim")
	result = (TY_sM4lkSb7zS6F7OVMvW9cffQ*)0;
	result = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTI_sM4lkSb7zS6F7OVMvW9cffQ_), 0);
	{
		NimStringDesc* x;
		NI last;
		NI splits;
		x = (NimStringDesc*)0;
		last = ((NI) 0);
		splits = maxsplit;
		{
			if (!(((NI) 0) < (s ? s->Sup.len : 0))) goto LA4_;
			{
				while (1) {
					NI first;
					NimStringDesc* T16_;
					if (!(last <= (s ? s->Sup.len : 0))) goto LA7;
					first = last;
					{
						while (1) {
							NIM_BOOL T10_;
							T10_ = (NIM_BOOL)0;
							T10_ = (last < (s ? s->Sup.len : 0));
							if (!(T10_)) goto LA11_;
							T10_ = !(((seps[(NU)(((NU8)(s->data[last])))>>3] &(1U<<((NU)(((NU8)(s->data[last])))&7U)))!=0));
							LA11_: ;
							if (!T10_) goto LA9;
							last += ((NI) 1);
						} LA9: ;
					}
					{
						if (!(splits == ((NI) 0))) goto LA14_;
						last = (s ? s->Sup.len : 0);
					}
					LA14_: ;
					x = copyStrLast(s, first, (NI)(last - ((NI) 1)));
					result = (TY_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&(result)->Sup, sizeof(NimStringDesc*));
					T16_ = (NimStringDesc*)0;
					T16_ = result->data[result->Sup.len]; result->data[result->Sup.len] = copyStringRC1(x);
					if (T16_) nimGCunrefNoCycle(T16_);
					++result->Sup.len;
					{
						if (!(splits == ((NI) 0))) goto LA19_;
						goto LA6;
					}
					LA19_: ;
					splits -= ((NI) 1);
					last += ((NI) 1);
				} LA7: ;
			} LA6: ;
		}
		LA4_: ;
	}
	popFrame();
	return result;
}

N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last) {
	NI result;
	NI last_2;
	void* found;
	nimfr_("find", "strutils.nim")
{	result = (NI)0;
	{
		if (!(((NI) (last)) == ((NI) 0))) goto LA3_;
		last_2 = (s ? (s->Sup.len-1) : -1);
	}
	goto LA1_;
	LA3_: ;
	{
		last_2 = ((NI) (last));
	}
	LA1_: ;
	found = memchr(((void*) ((&s->data[start]))), sub, (NI)((NI)(last_2 - ((NI) (start))) + ((NI) 1)));
	{
		if (!!((found == 0))) goto LA8_;
		result = (NI)((NU64)(((NI) (found))) - (NU64)(((NI) (s->data))));
		goto BeforeRet_;
	}
	LA8_: ;
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, contains_6e5MGL10HDAJ205lBYpWxw)(NimStringDesc* s, NIM_CHAR c) {
	NIM_BOOL result;
	NI T1_;
	nimfr_("contains", "strutils.nim")
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = nsuFindChar(s, c, ((NI) 0), ((NI) 0));
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix) {
	NIM_BOOL result;
	NI i;
	nimfr_("startsWith", "strutils.nim")
{	result = (NIM_BOOL)0;
	i = ((NI) 0);
	{
		while (1) {
			{
				if (!((NU8)(prefix->data[i]) == (NU8)(0))) goto LA5_;
				result = NIM_TRUE;
				goto BeforeRet_;
			}
			LA5_: ;
			{
				if (!!(((NU8)(s->data[i]) == (NU8)(prefix->data[i])))) goto LA9_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			LA9_: ;
			i += ((NI) 1);
		}
	}
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen_0, NimStringDesc* sep) {
	NimStringDesc* result;
	nimfr_("join", "strutils.nim")
	result = (NimStringDesc*)0;
	{
		NI L;
		if (!(((NI) 0) < aLen_0)) goto LA3_;
		L = (NI)((sep ? sep->Sup.len : 0) * (NI)(aLen_0 - ((NI) 1)));
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (aLen_0-1);
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA7;
					i = res;
					L += (a[i] ? a[i]->Sup.len : 0);
					res += ((NI) 1);
				} LA7: ;
			}
		}
		result = rawNewString(((NI) (L)));
		result = resizeString(result, a[((NI) 0)]->Sup.len + 0);
appendString(result, a[((NI) 0)]);
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (aLen_0-1);
			res_2 = ((NI) 1);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA10;
					i_2 = res_2;
					result = resizeString(result, sep->Sup.len + 0);
appendString(result, sep);
					result = resizeString(result, a[i_2]->Sup.len + 0);
appendString(result, a[i_2]);
					res_2 += ((NI) 1);
				} LA10: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		result = copyString(((NimStringDesc*) &TM_JGc9b9bh2D3nTdUR7TGyq8aA_11));
	}
	LA1_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void) {
	nimfr_("strutils", "strutils.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void) {
}

