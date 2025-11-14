// 函数: sub_5d3e70
// 地址: 0x5d3e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4c
int32_t eax_1 = data_78c474 ^ &var_4c
int32_t* eax_2 = *(arg1 + 0xc)

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    *(arg1 + 0xc) = 0

void* ebx = data_797d60
void** eax_3 = *(ebx + 4)
void** esi = eax_3[1]
void** ebp = eax_3

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x736df4) == 0)
        ebp = esi
        esi = *esi
    else
        esi = esi[2]

void* esi_1 = *(ebx + 4)
void** var_44 = ebp
char eax_5

if (ebp != esi_1)
    eax_5 = sub_40f4a0(0x736df4, &ebp[3])

void** eax_6

if (ebp == esi_1 || eax_5 != 0)
    void* var_40 = esi_1
    eax_6 = &var_40
else
    eax_6 = &var_44

int32_t* eax_8 = *eax_6

if (eax_8 != esi_1)
    int32_t* ecx_2 = eax_8[7]
    
    if (ecx_2 != 0)
        eax_8 = (**ecx_2)(0x736e9c)
        
        if (eax_8 != 0)
            eax_8 = (**eax_8)()
            
            if (eax_8 != 0)
                if (CoCreateInstance(&data_72cb38, 0, CLSCTX_INPROC_SERVER, &data_72cb28, 
                        arg1 + 0xc) s>= 0)
                    int32_t* eax_11 = *(arg1 + 0xc)
                    
                    if ((*(*eax_11 + 0x28))(eax_11, 0) s>= 0)
                        int32_t* eax_13 = *(arg1 + 0xc)
                        (*(*eax_13 + 0x18))(eax_13, eax_8, 2)
                        int32_t var_3c
                        __builtin_memset(&var_3c, 0, 0x24)
                        int32_t var_28 = 0
                        int32_t var_20 = 0
                        int32_t var_1c = 0
                        int32_t* eax_14 = *(arg1 + 0xc)
                        var_3c = 0x24
                        int32_t var_38 = 9
                        int32_t var_34
                        __builtin_memset(&var_34, 0, 0x1c)
                        var_4c = nullptr
                        
                        if ((*(*eax_14 + 0xc))(eax_14, &var_3c, &var_4c, 0) s< 0)
                            sub_40da60("DirectSound")
                        
                        int32_t var_18
                        __builtin_memset(&var_18, 0, 0x12)
                        int32_t* eax_17 = var_4c
                        var_18.w = 1
                        var_18:2.w = 2
                        int32_t var_14 = 0xac44
                        int32_t var_c = 0x100004
                        int32_t var_10 = 0x2b110
                        
                        if (eax_17 != 0)
                            (*(*eax_17 + 0x38))(eax_17, &var_18)
                            int32_t* eax_18 = var_4c
                            (*(*eax_18 + 8))(eax_18)
                        
                        eax_17.b = 1
                        sub_6b4885(eax_1 ^ &var_4c)
                        return eax_17
                    
                    if (*(arg1 + 8) == 0)
                        sub_604c90("DirectSound")
                        *(arg1 + 8) = 1
                else if (*(arg1 + 8) == 0)
                    sub_604c90("DirectSound")
                    *(arg1 + 8) = 1
                
                eax_8 = *(arg1 + 0xc)
                
                if (eax_8 != 0)
                    (*(*eax_8 + 8))(eax_8)
                    *(arg1 + 0xc) = 0

eax_8.b = 0
sub_6b4885(eax_1 ^ &var_4c)
return eax_8
