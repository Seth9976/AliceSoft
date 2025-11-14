// 函数: sub_67f010
// 地址: 0x67f010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = data_797ddc
int32_t eax = *esi

if (eax == 1)
    void** eax_10 = data_797da0
    void* eax_11 = *eax_10
    
    if (eax_11 != 0)
        sub_5f76f0(eax_11, arg1, arg2)
    
    void* eax_12 = *eax_10
    
    if (eax_12 != 0)
        sub_5f7840(eax_12, arg3)
    
    return sub_5f7910(*eax_10, arg3)

if (eax != 3)
    return eax - 3

sub_684f40(esi, esi[1], esi[2].b)
int32_t* edi = data_797da0
char ecx_2 = esi[2].b
void* eax_5 = *edi
int32_t esi_1 = esi[1]

if (eax_5 != 0)
    sub_5f76f0(eax_5, arg1, arg2)

void* eax_6 = *edi

if (eax_6 != 0)
    sub_5f77c0(eax_6, esi_1, ecx_2)
    void* eax_7 = *edi
    
    if (eax_7 != 0)
        sub_5f7840(eax_7, arg3)

return sub_5f7910(*edi, arg3)
