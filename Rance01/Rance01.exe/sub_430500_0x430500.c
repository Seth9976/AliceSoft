// 函数: sub_430500
// 地址: 0x430500
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct _EXCEPTION_REGISTRATION_RECORD** result = arg2
int32_t ebx_2 = (result[0xa] - result[9]) s>> 2
int32_t ebx_3 = ebx_2 - 1
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result

if (ebx_2 - 1 s>= 0)
    while (true)
        int32_t* esi_1 = *(result[9] + (ebx_3 << 2))
        
        if (esi_1[7] != 0)
            void* edi_1 = esi_1[8]
            
            if (edi_1 != 0)
                if (esi_1[0xe] != arg7)
                    esi_1[0xe] = arg7
                
                result = arg3
                esi_1[0xd] = result
                
                if (*(edi_1 + 8) == 3)
                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                    int32_t* result_3
                    sub_42e070(edi_1 + 0x4c, &result_3, &result_2)
                    result = result_3
                
                if (*(edi_1 + 8) != 3 || result == *(edi_1 + 0x50) || result[4] == 0)
                    void* edi_2 = esi_1[9]
                    
                    if (edi_2 == 0 || esi_1[0xc].b == 0)
                        int32_t* ecx_1 = esi_1[0xa]
                        
                        if (ecx_1 == 0 || *(esi_1 + 0x31) == 0)
                            int32_t* ecx_2 = esi_1[0xb]
                            
                            if (ecx_2 != 0 && *(esi_1 + 0x32) != 0)
                                result = (*(*ecx_2 + 4))()
                                esi_1[0xb] = 0
                        else
                            result = (*(*ecx_1 + 4))()
                            esi_1[0xa] = 0
                    else
                        result = sub_42f3e0(edi_2)
                else
                    result = esi_1[9]
                    
                    if (result != 0 && esi_1[0xc].b != 0)
                        result = sub_42e900(result, arg3, arg1, arg4, arg5, esi_1)
                    else if (*(esi_1 + 0x31) != 0)
                        if (esi_1[0xa] == 0)
                            struct IInterface::partsengine::CFlatLayerView::VTable** eax_4 =
                                operator new(0x60)
                            
                            if (eax_4 == 0)
                                eax_4 = nullptr
                            else
                                sub_42fa10(esi_1[2], eax_4, esi_1[3], esi_1[4], esi_1[5], esi_1[6])
                            
                            esi_1[0xa] = eax_4
                            int32_t* eax_8 = sub_4296a0(esi_1[7], esi_1[8] + 0x28)
                            sub_42fe90(esi_1[0xa], esi_1[7], eax_8)
                        
                        if (arg6 == 0)
                            int32_t* edx_9
                            edx_9.b = arg4.b
                            result = sub_4301d0(arg5, edx_9, esi_1[0xa], arg1, esi_1)
                        else
                            esi_1[0xa]
                            result = sub_430150(arg1, arg4, arg5, esi_1)
                    else if (*(esi_1 + 0x32) != 0)
                        if (esi_1[0xb] == 0)
                            struct partsengine::IFlatGraphicLayer::partsengine::CFlatEmitterView::VTable
                                ** eax_11 = operator new(0x54)
                            
                            if (eax_11 == 0)
                                eax_11 = nullptr
                            else
                                sub_42a8a0(esi_1[2], eax_11, esi_1[3], esi_1[4], esi_1[5], esi_1[6])
                            
                            esi_1[0xb] = eax_11
                            int32_t* eax_15 = sub_429860(esi_1[7], esi_1[8] + 0x28)
                            sub_42ac00(esi_1[0xb], esi_1[7], eax_15)
                        
                        result = esi_1[0xb]
                        
                        if (result[7] != 0)
                            result = sub_42ac30(esi_1, result, arg3, arg1, arg4.b, arg5)
        
        int32_t temp2_1 = ebx_3
        ebx_3 -= 1
        
        if (temp2_1 - 1 s< 0)
            break
        
        result = result_1

return result
