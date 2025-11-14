// 函数: sub_650430
// 地址: 0x650430
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4 = ecx

if (arg1 s> 0)
    void* esi_1 = data_797ddc
    int32_t* var_10_1 = arg1
    int32_t edx
    
    if (sub_418b70(esi_1 + 0xa8, edx, ecx) != 0)
        int32_t* eax_4 = sub_418bd0(esi_1 + 0xa8, arg1)
        
        if (eax_4 != 0)
            struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_5 =
                sub_414e30(eax_4)
            int32_t* ecx_2 = eax_4[0xe]
            
            if (ecx_2 != 0 && eax_5[2] == 0)
                eax_5[8] = ecx_2
                eax_5[2] = (**ecx_2)(1)
            
            int32_t* edx_2 = data_797da0
            eax_5[3] = eax_4[0xc]
            eax_5[4] = eax_4
            void* eax_9 = sub_5f7370(*edx_2, eax_5[2]->vFunc_1)
            
            if (eax_9 != 0)
                return *(*(*(eax_9 + 0xc) + 0x21c) + 0xc)

return 0
