// 函数: sub_4bfa90
// 地址: 0x4bfa90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_5 = *(arg1 + 0xc)

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    *(arg1 + 0xc) = 0

int32_t* ecx = *(arg1 + 8)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 8) = 0

*(arg1 + 8) = arg2
(**arg2)()
char eax_5 = sub_4bfef0(arg1, *(arg1 + 8))

if (eax_5 == 0)
    return eax_5

*(arg1 + 0x10) = (*(*arg2 + 0x28))()
*(arg1 + 0x11) = 0
sub_401180(arg1 + 0x14, 0xffffffff, arg3, 0)
sub_4c0520(arg1)
int32_t (* eax_8)[0x101]
eax_8.b = 1
return eax_8
