// 函数: sub_681140
// 地址: 0x681140
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t* eax_2 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_2 != 0)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_3 = sub_414e30(eax_2)
    int32_t* ecx = eax_2[0xe]
    
    if (ecx != 0 && eax_3[2] == 0)
        eax_3[8] = ecx
        eax_3[2] = (**ecx)(1)
    
    int32_t* eax_6 = data_797da0
    eax_3[3] = eax_2[0xc]
    eax_3[4] = eax_2
    struct partsengine::CSprite::partsengine::CNumeralSprite::VTable** ecx_3
    eax_2, ecx_3 = sub_5f7370(*eax_6, eax_3[2]->vFunc_1)
    
    if (eax_2 != 0)
        eax_2 = sub_5f3610(ecx_3, eax_2, arg3)
        
        if (eax_2 != 0 && eax_2[0xb] != 0)
            sub_4b55f0(arg2, &eax_2[0xc])
            int32_t* eax_8
            eax_8.b = 1
            return eax_8

eax_2.b = 0
return eax_2
