// 函数: sub_550740
// 地址: 0x550740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* eax

if (arg1[1] != 0)
    eax = *arg1

void* ebp

if (arg1[1] != 0 && eax != 0)
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    ebp = eax - &eax[1]
else
    ebp = nullptr

int32_t* ecx = arg2
char* eax_2

if (ecx[1] != 0)
    eax_2 = *ecx

void* ebx

if (ecx[1] != 0 && eax_2 != 0)
    do
        ecx.b = *eax_2
        eax_2 = &eax_2[1]
    while (ecx.b != 0)
    
    ecx = arg2
    ebx = eax_2 - &eax_2[1]
else
    ebx = nullptr

void* eax_4 = arg1[2]

if (ebx + ebp + 1 u>= eax_4)
    void* dwBytes = eax_4 + ebx + ebp + 1
    arg1[2] = dwBytes
    
    if (eax_4 != neg.d(ebx + ebp + 1))
        int32_t lpMem = *arg1
        int32_t eax_6
        
        if (lpMem == 0)
            eax_6 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
        else
            eax_6 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
        
        *arg1 = eax_6
        
        if (eax_6 == 0)
            eax_6.b = 0
            return eax_6
        
        ecx = arg2

arg1[1] = ebx + ebp + 1
int128_t* eax_7

if (ecx[1] != 0)
    eax_7 = *ecx
else
    eax_7 = nullptr

void* esi_1

if (ebx + ebp != 0xffffffff)
    esi_1 = *arg1
else
    esi_1 = nullptr

sub_6c02a0(esi_1 + ebp, eax_7, ebx + 1)
int128_t* eax_8
eax_8.b = 1
return eax_8
