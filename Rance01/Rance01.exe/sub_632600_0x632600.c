// 函数: sub_632600
// 地址: 0x632600
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1[5] == 0)
    return 0

int32_t* eax_2 = (*(*arg1 + 0x18))(arg2)

if (eax_2 == 0)
    return 0xffffffff

void* ebx = *arg1[5]
int32_t eax_8 = (*(*eax_2 + 0x18))((*(*eax_2 + 0x14))())
arg1[5]
int32_t result = (*(ebx + 0xc))(eax_8)
(*(*eax_2 + 4))()
return result
