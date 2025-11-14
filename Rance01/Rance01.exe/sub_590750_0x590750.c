// 函数: sub_590750
// 地址: 0x590750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_28
int32_t eax_1 = data_78c474 ^ &var_28
int32_t ebx
int32_t var_2c = ebx
int32_t ebp
int32_t var_30 = ebp
int32_t edx = *(*arg2 + 0x18)
int32_t edi
int32_t var_34 = edi
int32_t* edi_1 = arg1
int32_t* var_24 = edi_1

if (edx() != 0x20)
    int32_t eax_3
    eax_3.b = 0
    sub_6b4885(eax_1 ^ &var_28)
    return eax_3

int32_t esi
int32_t var_38 = esi
char* esi_1 = (*(*arg2 + 8))(0, 0)
int32_t eax_8 = (*(*arg2 + 0x1c))() - (arg3 << 2)
void* ecx_6 = *edi_1
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_8 = arg3
int32_t var_18

if ((*(ecx_6 + 0x4c))(edi_1, 0, &var_18, &var_10, 0) s< 0)
    int32_t eax_10
    eax_10.b = 0
    sub_6b4885(__return_addr ^ &var_24)
    return eax_10

var_24 = nullptr

if (arg4 s> 0)
    void* eax_27
    
    do
        int32_t var_14
        void* edi_6 = var_18 * var_24 + var_14
        char eax_12 = (*(*arg2 + 0x24))()
        char eax_14
        
        if (eax_12 != 0)
            eax_14 = (*(*arg2 + 0x28))()
        
        if (eax_12 == 0 || eax_14 == 0)
            char eax_17 = (*(*arg2 + 0x24))()
            char eax_19
            
            if (eax_17 != 0)
                eax_19 = (*(*arg2 + 0x28))()
            
            if (eax_17 == 0 || eax_19 != 0)
                if ((*(*arg2 + 0x24))() == 0 && (*(*arg2 + 0x28))() != 0 && arg3 s> 0)
                    void* eax_25 = edi_6 + 2
                    char* edi_8 = edi_6 - esi_1
                    int32_t i_5 = arg3
                    int32_t i
                    
                    do
                        *(edi_8 + esi_1) = esi_1[3]
                        *(eax_25 - 1) = esi_1[3]
                        *eax_25 = esi_1[3]
                        *(eax_25 + 1) = 0xff
                        eax_25 += 4
                        esi_1 = &esi_1[4]
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
            else if (arg3 s> 0)
                void* eax_20 = edi_6 + 2
                char* edi_7 = edi_6 - esi_1
                int32_t i_4 = arg3
                int32_t i_1
                
                do
                    *(edi_7 + esi_1) = *esi_1
                    *(eax_20 - 1) = esi_1[1]
                    *eax_20 = esi_1[2]
                    *(eax_20 + 1) = 0xff
                    eax_20 += 4
                    esi_1 = &esi_1[4]
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
        else if (arg3 s> 0)
            void* eax_15 = edi_6 + 2
            int32_t i_3 = arg3
            int32_t i_2
            
            do
                *(eax_15 - 2) = *esi_1
                *(eax_15 - 1) = esi_1[1]
                *eax_15 = esi_1[2]
                *(eax_15 + 1) = esi_1[3]
                esi_1 = &esi_1[4]
                eax_15 += 4
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
        
        esi_1 = &esi_1[eax_8]
        eax_27 = var_24 + 1
        var_24 = eax_27
    while (eax_27 s< arg4)
    int32_t* var_20
    edi_1 = var_20

int32_t eax_29
eax_29.b = (*(*edi_1 + 0x50))(edi_1) s>= 0
sub_6b4885(arg4 ^ &var_28)
return eax_29
