// 函数: sub_58e570
// 地址: 0x58e570
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0x18))()
int32_t* ecx = arg1[9]

if (ecx != 0)
    (*(*ecx + 4))()
    arg1[9] = 0

int32_t* eax_2 = arg1[7]

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    arg1[7] = 0

int32_t* eax_3 = arg1[5]

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)
    arg1[5] = 0

int32_t* result = arg1[4]

if (result != 0)
    result = (*(*result + 8))(result)
    arg1[4] = 0

__builtin_memset(&arg1[0xa], 0, 0x16)
arg1[0x10] = 0
return result
