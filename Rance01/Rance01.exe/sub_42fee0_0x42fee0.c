// 函数: sub_42fee0
// 地址: 0x42fee0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg1
void* edi = *(ebp + 0x20)
void* edi_1 = edi + 8
int32_t result = (*(edi + 0xc) - *(edi + 8)) s>> 2
int32_t esi = 0
void* var_c = edi_1
int32_t result_1 = result
arg1 = 0

if (result s> 0)
    while (true)
        int32_t eax_3 = *(*(*edi_1 + (esi << 2)) + 8)
        struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** var_10
        
        if (eax_3 == 3)
            struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** 
                eax_4 = operator new(0x3c)
            struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** 
                esi_2
            
            if (eax_4 == 0)
                esi_2 = nullptr
            else
                int32_t esi_1 = *(ebp + 0x10)
                int32_t ecx_2 = *(ebp + 0x18)
                int32_t edx_1 = *(ebp + 0x14)
                var_10 = *(ebp + 0xc)
                eax_4[2] = *(ebp + 8)
                struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** 
                    edi_4 = var_10
                eax_4[4] = esi_1
                *eax_4 = &partsengine::CFlatLayerGraphicView::`vftable'{for `partsengine::IFlatGraphicLayer'}
                eax_4[1] = 1
                eax_4[3] = edi_4
                eax_4[5] = edx_1
                eax_4[6] = ecx_2
                __builtin_memset(&eax_4[7], 0, 0x17)
                eax_4[0xd] = 0xffffffff
                eax_4[0xe] = 0
                esi_2 = eax_4
            
            int32_t* edx_3 = *(*var_c + (arg1 << 2))
            int32_t* eax_6 = *(ebp + 0x1c)
            var_10 = esi_2
            sub_42d5e0(esi_2, eax_6, edx_3)
            int32_t eax_7 = *(ebp + 0x28)
            int32_t ecx_5
            
            if (&var_10 u< eax_7)
                ecx_5 = *(ebp + 0x24)
            
            if (&var_10 u>= eax_7 || ecx_5 u> &var_10)
                if (eax_7 == *(ebp + 0x2c))
                    sub_4307a0(ebp + 0x24)
                
                void** eax_11 = *(ebp + 0x28)
                
                if (eax_11 != 0)
                    *eax_11 = esi_2
                
                *(ebp + 0x28) += 4
            else
                if (eax_7 == *(ebp + 0x2c))
                    sub_4307a0(ebp + 0x24)
                
                int32_t* eax_9 = *(ebp + 0x28)
                
                if (eax_9 != 0)
                    *eax_9 = *(*(ebp + 0x24) + ((&var_10 - ecx_5) s>> 2 << 2))
                
                *(ebp + 0x28) += 4
        else
            int32_t* var_8
            
            if (eax_3 == 5)
                struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** 
                    eax_12 = operator new(0x14)
                struct partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable** 
                    esi_5
                
                if (eax_12 == 0)
                    esi_5 = nullptr
                else
                    *eax_12 = &partsengine::CFlatLayerScriptView::`vftable'{for `IInterface'}
                    eax_12[1] = 1
                    eax_12[2] = 0
                    eax_12[3] = 0
                    eax_12[4] = 0
                    esi_5 = eax_12
                
                int32_t* edi_5 = *(ebp + 0x1c)
                int32_t* eax_14 = *(*edi_1 + (arg1 << 2))
                var_10 = esi_5
                var_8 = eax_14
                
                if (edi_5 != 0 && eax_14 != 0)
                    sub_431940(esi_5)
                    esi_5[2] = edi_5
                    (**edi_5)()
                    int32_t* ecx_9 = var_8
                    esi_5[3] = ecx_9
                    (**ecx_9)()
                
                int32_t eax_17 = *(ebp + 0x38)
                int32_t ecx_10
                
                if (&var_10 u< eax_17)
                    ecx_10 = *(ebp + 0x34)
                
                if (&var_10 u>= eax_17 || ecx_10 u> &var_10)
                    if (eax_17 == *(ebp + 0x3c))
                        sub_4307a0(ebp + 0x34)
                    
                    struct 
                        partsengine::IFlatGraphicLayer::partsengine::CFlatLayerGraphicView::VTable**
                        * eax_21 = *(ebp + 0x38)
                    
                    if (eax_21 != 0)
                        *eax_21 = esi_5
                    
                    *(ebp + 0x38) += 4
                else
                    if (eax_17 == *(ebp + 0x3c))
                        sub_4307a0(ebp + 0x34)
                    
                    int32_t* eax_19 = *(ebp + 0x38)
                    
                    if (eax_19 != 0)
                        *eax_19 = *(*(ebp + 0x34) + ((&var_10 - ecx_10) s>> 2 << 2))
                    
                    *(ebp + 0x38) += 4
            else if (eax_3 == 4)
                int32_t* eax_22 = operator new(0x1c)
                int32_t* ecx_13
                
                if (eax_22 == 0)
                    ecx_13 = nullptr
                else
                    eax_22[4] = *(ebp + 0x18)
                    *eax_22 = &partsengine::CFlatLayerSoundView::`vftable'{for `IInterface'}
                    eax_22[1] = 1
                    eax_22[2] = 0
                    eax_22[3] = 0
                    eax_22[5] = 0
                    eax_22[6] = 0
                    ecx_13 = eax_22
                
                int32_t* edx_8 = *(*edi_1 + (esi << 2))
                int32_t* eax_24 = *(ebp + 0x1c)
                var_8 = ecx_13
                sub_42f910(ecx_13, eax_24, edx_8)
                sub_61b5a0(&var_8, ebp + 0x44)
        result = arg1 + 1
        arg1 = result
        
        if (result s>= result_1)
            break
        
        edi_1 = var_c
        esi = arg1

return result
