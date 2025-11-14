// 函数: sub_694ec0
// 地址: 0x694ec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2

if (arg1 == 0 || (*(*arg1 + 0x18))().b == 0)
    return 

void* eax_1 = arg1[7]
int32_t esi_1 = arg1[8]
arg2 = eax_1
int32_t var_18 = esi_1

if (eax_1 s> 0 && esi_1 s> 0)
    int32_t eax_2 = arg1[0x1e]
    int32_t ecx_2 = arg1[0x1f]
    int32_t edx_2 = arg1[0x20]
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_3 =
        sub_413650(*(ebp + 0x14))
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_4 =
        sub_413650(*(ebp + 0x18))
    struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_5 =
        sub_413650(*(ebp + 0x1c))
    int32_t var_38_1 = 1
    sub_41b340(eax_3)
    void* edi_6
    
    if (arg1[0x25] != 0)
        void* var_24 = sub_699840(&arg1[0x21])
        int32_t eax_13 = sub_699900(&arg1[0x21])
        void* edx_3 = var_24
        int32_t var_1c = eax_13
        void** eax_14 = &var_24
        
        if (arg2 s>= edx_3)
            eax_14 = &arg2
        
        int32_t* ecx_4 = &var_1c
        
        if (esi_1 s>= eax_13)
            ecx_4 = &var_18
        
        sub_41b390(eax_3, *eax_14, *ecx_4, 1)
        void* eax_17 = var_24
        sub_41b630(eax_3, &arg1[0x21], 0, 0, eax_17, eax_13, 0, 0, eax_17, eax_13, 1, 1)
        edi_6 = arg2
    else
        edi_6 = arg2
        sub_41b3e0(eax_3, edi_6, esi_1, 1)
        sub_41b430(eax_3, 0, 0, edi_6, esi_1, 0xff, 0xff, 0xff, 1)
        sub_41b5d0(eax_3, 1, 1, edi_6 - 2, esi_1 - 2, 0x96, 0x96, 0x96, 1)
        sub_41b5d0(eax_3, 0, 0, edi_6, esi_1, 0x64, 0x64, 0x64, 1)
    
    sub_41b7d0(eax_3, 1)
    int32_t var_38_4 = 1
    sub_41b340(eax_5)
    sub_41b3e0(eax_5, 1, esi_1 - *(ebp + 0xc), 1)
    sub_41b430(eax_5, 0, 0, 1, esi_1 - *(ebp + 0xc), 0, 0, 0, 1)
    sub_41b7d0(eax_5, 1)
    int32_t var_38_5 = 1
    sub_41b340(eax_4)
    sub_41b3e0(eax_4, edi_6, esi_1 - *(ebp + 0xc), 1)
    sub_41b430(eax_4, 0, 0, edi_6, esi_1 - *(ebp + 0xc), eax_2, ecx_2, edx_2, 1)
    sub_41b7d0(eax_4, 1)

void* esi_3 = *(ebp + 0x14)

if (*(esi_3 + 0x28) != 0)
    (*(**(esi_3 + 0x28) + 0x20))()

sub_413500(esi_3)

if (*(esi_3 + 0x2c) != 0)
    (*(**(esi_3 + 0x2c) + 0xc))(arg3, *(esi_3 + 0x28))

void* esi_4 = *(ebp + 0x18)

if (*(esi_4 + 0x28) != 0)
    (*(**(esi_4 + 0x28) + 0x20))()

sub_413500(esi_4)

if (*(esi_4 + 0x2c) != 0)
    (*(**(esi_4 + 0x2c) + 0xc))(arg3, *(esi_4 + 0x28))

void* esi_5 = *(ebp + 0x1c)

if (*(esi_5 + 0x28) != 0)
    (*(**(esi_5 + 0x28) + 0x20))()

sub_413500(esi_5)

if (*(esi_5 + 0x2c) != 0)
    (*(**(esi_5 + 0x2c) + 0xc))(arg3, *(esi_5 + 0x28))

void* esi_6 = *(ebp + 0x20)

if (*(esi_6 + 0x28) != 0)
    (*(**(esi_6 + 0x28) + 0x20))()

sub_413500(esi_6)

if (*(esi_6 + 0x2c) != 0)
    (*(**(esi_6 + 0x2c) + 0xc))(arg3, *(esi_6 + 0x28))

if (*(ebp + 0x10) == 0)
    sub_41d750(ebp + 0x78)
