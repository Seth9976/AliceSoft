// 函数: sub_67f6e0
// 地址: 0x67f6e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
void* ebp = data_797ddc
int32_t* eax_1 = sub_418bd0(ebp + 0xa8, arg2)

if (eax_1 == 0)
    arg1[5] = 0xf
    arg1[4] = 0
    *arg1 = 0
    sub_401180(arg1, 0xffffffff, ebp + 0x110, 0)
    return arg1

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2
int32_t edx
eax_2, edx = sub_414e30(eax_1)
int32_t* ecx = eax_1[0xe]

if (ecx != 0 && eax_2[2] == 0)
    eax_2[8] = ecx
    int32_t eax_4
    eax_4, edx = (**ecx)(1)
    eax_2[2] = eax_4

eax_2[3] = eax_1[0xc]
eax_2[4] = eax_1
sub_41b020(arg3, edx, eax_2, arg1)
return arg1
