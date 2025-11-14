// 函数: sub_40b370
// 地址: 0x40b370
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi

if (arg1[5] u>= 0x10)
    arg1 = *arg1

int32_t* eax_1 = (*(*data_797dd0 + 0xc))(arg1)

if (eax_1 == 0)
    eax_1.b = 0
    return eax_1

int32_t ebp
int32_t var_14_1 = ebp
int32_t edi
int32_t var_18 = edi
int32_t eax_3 = (*(*eax_1 + 0x10))()
int32_t eax_5 = (*(*eax_1 + 0x14))()
void* __return_addr_1 = *arg2
int32_t edx_3 = arg2[1]
void* ebp_1 = arg2[2]
int32_t ebx_3 = arg2[3]
__return_addr = __return_addr_1
int32_t arg_14 = edx_3

if (__return_addr_1 s< 0)
    __return_addr = nullptr
    ebp_1 += __return_addr_1
    __return_addr_1 = nullptr

if (__return_addr_1 + ebp_1 s> eax_3)
    ebp_1 = eax_3 - __return_addr_1

if (edx_3 s< 0)
    arg_14 = 0
    ebx_3 += edx_3
    edx_3 = 0

if (ebx_3 + edx_3 s> eax_5)
    ebx_3 = eax_5 - edx_3

int32_t eax_37

if (ebp_1 s<= 0 || ebx_3 s<= 0)
    eax_37 = *(*eax_1 + 4)
else
    char eax_10 = (*(*eax_1 + 0x24))()
    char eax_12
    
    if (eax_10 != 0)
        eax_12 = (*(*eax_1 + 0x28))()
    
    int32_t* eax_16
    
    if (eax_10 == 0 || eax_12 == 0)
        char eax_18 = (*(*eax_1 + 0x24))()
        char eax_20
        
        if (eax_18 != 0)
            eax_20 = (*(*eax_1 + 0x28))()
        
        if (eax_18 != 0 && eax_20 == 0)
            void* edi_4 = *arg2[2]
            int32_t eax_23 = (*(*eax_1 + 0x18))()
            arg2[2]
            eax_16 = (*(edi_4 + 0xc))(ebp_1, ebx_3, eax_23)
            goto label_40b4c0
        
        if ((*(*eax_1 + 0x24))() != 0)
            eax_37 = *(*eax_1 + 4)
        else
            if ((*(*eax_1 + 0x28))() != 0)
                eax_16 = (*(*arg2[2] + 0x10))(ebp_1, ebx_3)
                goto label_40b4c0
            
            eax_37 = *(*eax_1 + 4)
    else
        void* edi_3 = *arg2[2]
        int32_t eax_14 = (*(*eax_1 + 0x18))()
        arg2[2]
        eax_16 = (*(edi_3 + 8))(ebp_1, ebx_3, eax_14)
    label_40b4c0:
        
        if (eax_16 == 0)
            eax_37 = *(*eax_1 + 4)
        else
            (*(*arg2[1] + 0x5c))(eax_16, 0, 0, eax_1, __return_addr, arg_14, ebp_1, ebx_3)
            (*(*eax_1 + 4))()
            bool eax_36 = sub_40c440(&arg2[0x9d])
            eax_37 = *(*eax_16 + 4)
            
            if (eax_36 != 0)
                eax_37()
                int32_t eax_38
                eax_38.b = 1
                return eax_38

eax_37()
int32_t eax_39
eax_39.b = 0
return eax_39
