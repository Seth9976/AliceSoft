// 函数: sub_562420
// 地址: 0x562420
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *arg2
int32_t esi = arg2[4]
int32_t* edi = arg1

if (esi s>= (arg2[1] - ebx) s>> 3)
    int32_t var_14 = esi
    sub_604c90(0x74bfd0)
    enum MESSAGEBOX_RESULT eax_3
    eax_3.b = 0
    return eax_3

arg2[4] = esi + 1
int32_t* eax_6

if (sub_402680("DPAnalysis", edi) == 0)
    if (sub_402680("DPVariable", edi) == 0)
        if (sub_402680("DPLogViewer", edi) == 0)
            if (sub_402680("DPParts", edi) == 0)
                if (sub_402680("DPSound", edi) == 0)
                    if (edi[5] u>= 0x10)
                        edi = *edi
                    
                    int32_t* var_14_8 = edi
                    sub_604c90(0x74c114)
                    enum MESSAGEBOX_RESULT eax_25
                    eax_25.b = 0
                    return eax_25
                
                int32_t* ecx_7 = data_797de0
                
                if (ecx_7 != 0)
                    (**ecx_7)()
                    eax_6 = data_797de0
                
                if (ecx_7 == 0 || eax_6 == 0)
                    if (edi[5] u>= 0x10)
                        edi = *edi
                    
                    int32_t* var_14_5 = edi
                    sub_604c90(0x74c0e8)
                    enum MESSAGEBOX_RESULT eax_21
                    eax_21.b = 0
                    return eax_21
            else
                int32_t* ecx_6 = data_797dd4
                
                if (ecx_6 != 0)
                    (**ecx_6)()
                    eax_6 = data_797dd4
                
                if (ecx_6 == 0 || eax_6 == 0)
                    if (edi[5] u>= 0x10)
                        edi = *edi
                    
                    int32_t* var_14_4 = edi
                    sub_604c90(0x74c0b4)
                    enum MESSAGEBOX_RESULT eax_18
                    eax_18.b = 0
                    return eax_18
        else
            void* ecx_4 = data_797dcc
            
            if (ecx_4 == 0)
            label_562536:
                
                if (edi[5] u>= 0x10)
                    edi = *edi
                
                int32_t* var_14_3 = edi
                sub_604c90(0x74c080)
                enum MESSAGEBOX_RESULT eax_15
                eax_15.b = 0
                return eax_15
            
            (**(ecx_4 + 4))()
            void* eax_14 = data_797dcc
            
            if (eax_14 == 0)
                goto label_562536
            
            eax_6 = eax_14 + 4
            
            if (eax_14 == 0xfffffffc)
                goto label_562536
    else
        void* ecx_2 = data_797dc8
        
        if (ecx_2 == 0)
        label_5624e3:
            
            if (edi[5] u>= 0x10)
                edi = *edi
            
            int32_t* var_14_2 = edi
            sub_604c90(0x74c048)
            enum MESSAGEBOX_RESULT eax_11
            eax_11.b = 0
            return eax_11
        
        (**(ecx_2 + 0xb0))()
        void* eax_10 = data_797dc8
        
        if (eax_10 == 0)
            goto label_5624e3
        
        eax_6 = eax_10 + 0xb0
        
        if (eax_10 == 0xffffff50)
            goto label_5624e3
else
    int32_t* ecx_1 = data_797da8
    
    if (ecx_1 != 0)
        (**ecx_1)()
        eax_6 = data_797da8
    
    if (ecx_1 == 0 || eax_6 == 0)
        if (edi[5] u>= 0x10)
            edi = *edi
        
        int32_t* var_14_1 = edi
        sub_604c90(0x74c010)
        enum MESSAGEBOX_RESULT eax_7
        eax_7.b = 0
        return eax_7

*(ebx + (esi << 3)) = eax_6

if ((*(*eax_6 + 8))(arg2[5]) != 0)
    *(ebx + (esi << 3) + 4) = 0
    return 1

if (edi[5] u>= 0x10)
    edi = *edi

int32_t* var_14_7 = edi
sub_604c90(0x74c13c)
enum MESSAGEBOX_RESULT eax_24
eax_24.b = 0
return eax_24
