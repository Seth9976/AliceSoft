// 函数: sub_69c300
// 地址: 0x69c300
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_6 = data_797ddc
int32_t* ecx = *(eax_6 + 0x7c)
int32_t* esi

if (ecx != *(eax_6 + 0x80))
    ecx = *ecx
    esi = *ecx
else
    esi = nullptr

int32_t* var_c = esi
int32_t edx

if (sub_418b70(eax_6 + 0xa8, edx, ecx) != 0)
    int32_t* eax_4 = sub_418bd0(eax_6 + 0xa8, esi)
    
    if (eax_4 != 0)
        return eax_4[4]

return 0xffffffff
