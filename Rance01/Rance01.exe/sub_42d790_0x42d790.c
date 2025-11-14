// 函数: sub_42d790
// 地址: 0x42d790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax = arg3
int32_t* var_c = eax

if (arg1[7] != 0)
    void* edi_1 = arg1[8]
    
    if (edi_1 != 0)
        eax = arg7
        
        if (arg1[0xe] != eax)
            arg1[0xe] = eax
        
        arg1[0xd] = arg2
        
        if (*(edi_1 + 8) == 3)
            int32_t var_8 = arg2
            int32_t* var_4
            sub_42e070(edi_1 + 0x4c, &var_4, &var_8)
            eax = var_4
        
        if (*(edi_1 + 8) != 3 || eax == *(edi_1 + 0x50) || eax[4] == 0)
            void* edi_2 = arg1[9]
            
            if (edi_2 != 0 && arg1[0xc].b != 0)
                return sub_42f3e0(edi_2)
            
            int32_t* ecx_1 = arg1[0xa]
            
            if (ecx_1 != 0 && *(arg1 + 0x31) != 0)
                int32_t eax_4 = (*(*ecx_1 + 4))()
                arg1[0xa] = 0
                return eax_4
            
            int32_t* ecx_2 = arg1[0xb]
            
            if (ecx_2 != 0 && *(arg1 + 0x32) != 0)
                int32_t eax_6 = (*(*ecx_2 + 4))()
                arg1[0xb] = 0
                return eax_6
        else
            eax = arg1[9]
            
            if (eax != 0 && arg1[0xc].b != 0)
                return sub_42e900(eax, arg2, var_c, arg4, arg5, arg1)
            
            if (*(arg1 + 0x31) != 0)
                if (arg1[0xa] == 0)
                    struct IInterface::partsengine::CFlatLayerView::VTable** eax_8 =
                        operator new(0x60)
                    
                    if (eax_8 == 0)
                        eax_8 = nullptr
                    else
                        sub_42fa10(arg1[2], eax_8, arg1[3], arg1[4], arg1[5], arg1[6])
                    
                    void* edx_6 = arg1[7]
                    arg1[0xa] = eax_8
                    int32_t* eax_11 = sub_4296a0(edx_6, arg1[8] + 0x28)
                    sub_42fe90(arg1[0xa], arg1[7], eax_11)
                
                if (arg6 == 0)
                    struct _EXCEPTION_REGISTRATION_RECORD** edx_8
                    edx_8.b = arg4.b
                    return sub_4301d0(arg5, edx_8, arg1[0xa], var_c, arg1)
                
                arg1[0xa]
                return sub_430150(var_c, arg4, arg5, arg1)
            
            if (*(arg1 + 0x32) != 0)
                if (arg1[0xb] == 0)
                    struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable** 
                        eax_16 = operator new(0x54)
                    
                    if (eax_16 == 0)
                        eax_16 = nullptr
                    else
                        sub_42a8a0(arg1[2], eax_16, arg1[3], arg1[4], arg1[5], arg1[6])
                    
                    arg1[0xb] = eax_16
                    int32_t* eax_20 = sub_429860(arg1[7], arg1[8] + 0x28)
                    sub_42ac00(arg1[0xb], arg1[7], eax_20)
                
                eax = arg1[0xb]
                
                if (eax[7] != 0)
                    return sub_42ac30(arg1, eax, arg2, var_c, arg4.b, arg5)

return eax
