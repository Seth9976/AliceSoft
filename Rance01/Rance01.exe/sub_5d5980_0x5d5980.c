// 函数: sub_5d5980
// 地址: 0x5d5980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct ISoundData::decodeogg::CSoundDataOgg::VTable** eax

if (arg2 != 0)
    eax = (**arg2)(0x736950)
    
    if (eax != 0)
        data_797d98 = eax
        struct IXXILoader::xxi::CApp::VTable** ecx_2
        eax, ecx_2 = sub_5b4a00(0x7369c0)
        *(arg1 + 8) = eax
        
        if (eax != 0)
            struct IXXILoader::xxi::CApp::VTable** eax_2
            struct IXXILoader::xxi::CApp::VTable** ecx_3
            eax_2, ecx_3 = sub_59df40(ecx_2, 0x736990)
            *(arg1 + 0x10) = eax_2
            
            if (eax_2 != 0)
                eax_2 = sub_59df40(ecx_3, 0x7369a0)
                *(arg1 + 0xc) = eax_2
                
                if (eax_2 != 0)
                    eax_2 = sub_5c7d20()
                    *(arg1 + 0x14) = eax_2
                    
                    if (eax_2 != 0)
                        eax_2 = (*eax_2)->vFunc_4(1)
                        *(arg1 + 0x18) = eax_2
                        
                        if (eax_2 != 0)
                            eax_2 = (*(**(arg1 + 0x14) + 0x10))(4)
                            *(arg1 + 0x1c) = eax_2
                            
                            if (eax_2 != 0)
                                eax_2 = (**arg2)(0x736980)
                                *(arg1 + 0x28) = eax_2
                                
                                if (eax_2 != 0)
                                    if (*(arg1 + 0x30) == 0)
                                        *(arg1 + 0x2c) = eax_2
                                        (*eax_2)->vFunc_0()
                                        *(arg1 + 0x30) = 1
                                    
                                    eax_2.b = 1
                                    return eax_2
            
            eax_2.b = 0
            return eax_2

eax.b = 0
return eax
