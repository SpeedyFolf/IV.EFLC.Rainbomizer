#pragma once

class CBaseModelInfo;

struct CModelLookup
{
    char* m_szName;
    int m_nIndex;
    CModelLookup* m_pNext;
};

class CModelInfoStore
{
public:

    static CModelLookup* CModelLookup__superlod;
    
    static CBaseModelInfo** m_aModelPointers;
    
    static int &m_nTotalModelPointers;

    static int GetMaximumNumberOfPassengers(int index);
    static void InitialisePatterns();
};
