// 函数: sub_684110
// 地址: 0x684110
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_1 == 0)
    return 0

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(eax_1)
int32_t* ecx = eax_1[0xe]

if (ecx != 0 && eax_2[2] == 0)
    eax_2[8] = ecx
    eax_2[2] = (**ecx)(1)

eax_2[3] = eax_1[0xc]
eax_2[4] = eax_1
return sub_41b900(eax_2, arg2)
