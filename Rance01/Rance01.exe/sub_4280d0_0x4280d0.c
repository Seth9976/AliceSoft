// 函数: sub_4280d0
// 地址: 0x4280d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edx = sub_428170(arg1)
int32_t* eax = *(arg1 + 0xc)

if (eax != 0)
    int32_t* edi_1 = *(arg1 + 8)
    
    if (edi_1 == 0xffffffff)
        int32_t* ecx_1 = data_797d2c
        int32_t var_c_1 = *eax
        edi_1 = sub_40d040(ecx_1[0xc] + 0x28c, edx, ecx_1)
    
    char eax_5
    struct IDrawD3DPlugin::sealengine::CPlugin::VTable** ecx_3
    eax_5, ecx_3 = sub_4092a0(edi_1, 1, 1)
    
    if (eax_5 == 1)
        *(arg1 + 8) = edi_1
        int32_t eax_6 = sub_4afc90(ecx_3)
        
        if (eax_6 == 0xffffffff)
            sub_40da60(0x756aa4)
            void* eax_7
            eax_7.b = 0
            return eax_7
        
        if (sub_4afed0(eax_6, *(arg1 + 8)) != 0)
            *(arg1 + 0x1c) = eax_6
            return 1
        
        sub_40da60(0x756adc)
        void* eax_12
        eax_12.b = 0
        return eax_12

sub_40da60(0x756a6c)
void* eax_8
eax_8.b = 0
return eax_8
