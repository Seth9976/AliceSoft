// 函数: sub_582ae0
// 地址: 0x582ae0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
int32_t* eax_1 = (*(*ebx + 0x10))()
int32_t eax_3 = (*(*ebx + 0x14))()
(*(***(arg1 + 4) + 0x10))(ebx, 0, 0, arg4, 0, 0, eax_1, eax_3)
void* ebp_1 = 0xfe
int32_t* result = sub_70c710(float.t(eax_3 + 0xfe) * (float.t(1) - fconvert.t(arg5)))
void* esi_2 = result - 0xfe

if (result - 0xfe s>= 0)
    arg2 = 0xfe
else
    arg2 = esi_2 + 0xfe
    ebp_1 = esi_2 + 0xfe
    esi_2 = nullptr

if (esi_2 + ebp_1 s> eax_3)
    ebp_1 = eax_3 - esi_2

if (ebp_1 s> 0)
    int32_t eax_7 = esi_2 + ebp_1
    
    if (eax_7 s< eax_3)
        (*(***(arg1 + 4) + 0x10))(ebx, 0, eax_7, arg3, 0, eax_7, eax_1, eax_3 - esi_2 - ebp_1)
    
    sub_57e410(arg4, esi_2, *(arg1 + 4), ebx, arg4, esi_2, arg3, esi_2, eax_1, ebp_1, arg2.b)

result.b = 1
return result
