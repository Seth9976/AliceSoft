// 函数: sub_680cf0
// 地址: 0x680cf0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(eax_1)
int32_t* ecx = eax_1[0xe]

if (ecx != 0 && eax_2[2] == 0)
    eax_2[8] = ecx
    eax_2[2] = (**ecx)(1)

int32_t* eax_5 = data_797da0
eax_2[3] = eax_1[0xc]
eax_2[4] = eax_1
void* eax_6
struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** ecx_3
eax_6, ecx_3 = sub_5f7370(*eax_5, eax_2[2]->vFunc_1)

if (eax_6 != 0)
    eax_6 = sub_5f3610(ecx_3, eax_6, arg3)
    
    if (eax_6 != 0)
        if (*(eax_6 + 0x31c) != arg2)
            *(eax_6 + 0x31c) = arg2
            *(eax_6 + 0x350) = 1
        
        eax_6.b = 1
        return eax_6

eax_6.b = 0
return eax_6
