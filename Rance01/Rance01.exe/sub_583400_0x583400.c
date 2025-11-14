// 函数: sub_583400
// 地址: 0x583400
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edi = arg2
int32_t* eax_1 = (*(*edi + 0x10))()
int32_t eax_3 = (*(*edi + 0x14))()
(*(***(arg1 + 4) + 0x10))(edi, 0, 0, arg4, 0, 0, eax_1, eax_3)
arg2 = 0xfe
int32_t eax_7 = sub_70c710(float.t(eax_3 + 0xfe) * fconvert.t(arg5))
void* esi_2 = eax_7 - 0xfe
float eax_8

if (eax_7 - 0xfe s>= 0)
    arg5 = 1.40129846e-45f
    eax_8 = 1.40129846e-45f
else
    eax_8 = 1 - esi_2
    arg2 = esi_2 + 0xfe
    arg5 = eax_8
    esi_2 = nullptr

if (esi_2 + arg2 s> eax_3)
    arg2 = eax_3 - esi_2

if (esi_2 s> 0)
    (*(***(arg1 + 4) + 0x10))(edi, 0, 0, arg3, 0, 0, eax_1, esi_2)
    eax_8 = arg5

sub_57e2d0(eax_1, esi_2, *(arg1 + 4), edi, arg4, esi_2, arg3, esi_2, eax_1, arg2, eax_8.b)
int32_t* result
result.b = 1
return result
