// 函数: sub_582830
// 地址: 0x582830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* esi = arg2
int32_t eax_1 = (*(*esi + 0x10))()
int32_t eax_3 = (*(*esi + 0x14))()
int32_t* ebp_1 = *(arg1 + 4)
(*(**ebp_1 + 0x10))(esi, 0, 0, arg4, 0, 0, eax_1, eax_3)
int32_t* ebp_2 = *ebp_1
arg2 = ebp_2
(*(*ebp_2 + 0x18))(esi, 0, 0, arg3, 0, 0, eax_1, eax_3, 
    sub_70c710(fconvert.t(arg5) * fconvert.t(255.0)))
int32_t result
result.b = 1
return result
