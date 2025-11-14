// 函数: sub_552060
// 地址: 0x552060
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = arg2
int32_t eax = ecx[1]
uint32_t ebx_1 = eax u>> 2

if (ebx_1 s< 3)
    eax.b = 1
    return eax

int32_t ebp

if (eax != 0)
    ebp = *ecx
else
    ebp = 0

int32_t esi = 0
uint32_t eax_2

if (ebx_1 s> 0)
    do
        eax_2, ecx = sub_551d60(ecx, *(ebp + (esi << 2) + 4), arg1, *(ebp + (esi << 2)))
        
        if (eax_2.b == 0)
            goto label_552105
        
        esi += 3
    while (esi s< ebx_1)
    
    ecx = arg2

int32_t ebx_2 = arg1[1]
int32_t eax_3 = arg1[2]
int32_t esi_2 = ecx[1] + ebx_2

if (esi_2 u< eax_3)
    goto label_5520f4

uint32_t dwBytes = eax_3 + esi_2
arg1[2] = dwBytes

if (eax_3 == neg.d(esi_2))
    goto label_5520f4

int32_t lpMem = *arg1

if (lpMem == 0)
    eax_2 = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
else
    eax_2 = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)

*arg1 = eax_2

if (eax_2 == 0)
label_552105:
    eax_2.b = 0
    return eax_2

ecx = arg2
label_5520f4:
arg1[1] = esi_2
void* eax_5 = ecx[1]
int128_t* ecx_2

if (eax_5 != 0)
    ecx_2 = *ecx
else
    ecx_2 = nullptr

void* edi_1

if (esi_2 != 0)
    edi_1 = *arg1
else
    edi_1 = nullptr

sub_6c02a0(edi_1 + ebx_2, ecx_2, eax_5)
int128_t* eax_6
eax_6.b = 1
return eax_6
