// 函数: sub_5cbca0
// 地址: 0x5cbca0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
char* esi = data_797d80

if (sub_5cadb0(esi) == 0)
    return 0

if (*(esi + 0x10) == 0)
    return 0

int32_t* ecx_1 = *(esi + 0x10)
var_4 = 0
uint32_t eax_5 = zx.d((*(*ecx_1 + 4))(0, &var_4))
int32_t eax_6 = neg.d(eax_5)
return sbb.d(eax_6, eax_6, eax_5 != 0) & var_4
