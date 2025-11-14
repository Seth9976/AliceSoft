// 函数: sub_416590
// 地址: 0x416590
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_4 = arg1
int32_t* ebx = arg3
sub_4152d0(arg2)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_1 = *ebx

if (&eax_1[1] u> ebx[1])
label_416687:
    eax_1.b = 0
    return eax_1

uint32_t ebp_7 =
    ((zx.d(*(eax_1 + 3)) << 8 | zx.d(*(eax_1 + 2))) << 8 | zx.d(*(eax_1 + 1))) << 8 | zx.d(*eax_1)
*ebx = &eax_1[1]
arg3 = 0
uint32_t eax_2

if (ebp_7 s> 0)
    do
        eax_1 = *ebx
        int32_t esi_1 = ebx[1]
        void* ecx_1 = &eax_1[1]
        
        if (ecx_1 u> esi_1)
            goto label_416687
        
        bool cond:0_1 = (
            ((zx.d(*(eax_1 + 3)) << 8 | zx.d(*(eax_1 + 2))) << 8 | zx.d(*(eax_1 + 1))) << 8
            | zx.d(*eax_1)) == 0
        *ebx = ecx_1
        
        if (not(cond:0_1))
            if (ecx_1 + 4 u> esi_1)
                goto label_416687
            
            uint32_t ecx_2 = zx.d(*ecx_1)
            uint32_t eax_9 =
                ((zx.d(*(ecx_1 + 3)) << 8 | zx.d(*(ecx_1 + 2))) << 8 | zx.d(*(ecx_1 + 1))) << 8
                | ecx_2
            uint32_t var_18_1 = eax_9
            var_4 = eax_9
            *ebx = ecx_1 + 4
            eax_1 = sub_415530(ecx_2, arg2)
            
            if (eax_1 == 0)
                goto label_416687
            
            struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable*** eax_12
            uint32_t ecx_3
            eax_12, ecx_3 = sub_4ccf80(&arg2[2], &var_4)
            *eax_12 = eax_1
            
            if (sub_413db0(ecx_3, ebx, eax_1).b == 0)
                goto label_416687
        
        eax_2 = arg3 + 1
        arg3 = eax_2
    while (eax_2 s< ebp_7)

eax_2.b = 1
return eax_2
