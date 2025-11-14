// 函数: sub_681a60
// 地址: 0x681a60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_1 = sub_418bd0(data_797ddc + 0xa8, arg1)

if (eax_1 != 0)
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_2 = sub_414e30(eax_1)
    int32_t* ecx = eax_1[0xe]
    
    if (ecx != 0 && eax_2[2] == 0)
        eax_2[8] = ecx
        eax_2[2] = (**ecx)(1)
    
    int32_t* eax_5 = data_797da0
    eax_2[3] = eax_1[0xc]
    eax_2[4] = eax_1
    eax_1 = sub_5f7370(*eax_5, eax_2[2]->vFunc_1)
    
    if (eax_1 != 0)
        int32_t arg_4
        eax_1 = sub_5f3790(eax_1, arg_4)
        
        if (eax_1 != 0)
            sub_5e6030(&eax_1[0xa], &arg_4, eax_1[0xa], eax_1[0xb])
            void** eax_7
            eax_7.b = 1
            return eax_7

eax_1.b = 0
return eax_1
