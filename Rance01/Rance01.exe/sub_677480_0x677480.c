// 函数: sub_677480
// 地址: 0x677480
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg11
int32_t* esi = arg3

if (esi s<= 0 || arg4 s<= 0)
    return 

int32_t var_18 = 0
arg11 = 0
int32_t* __saved_ebp_1 = &arg11
sub_677150(arg8, arg4, esi, arg2, &var_18)

if (ebx == 3 && arg9.b != 0)
    var_18 += 1
    arg11 += 1

void* edi_2 = *(arg1 + 0x10)
struct guiengine::CGUIModel::guiengine::CGUIPartsModel::VTable** eax_6 = sub_414e30(edi_2)
int32_t* ecx_6 = *(edi_2 + 0x38)

if (ecx_6 != 0 && eax_6[2] == 0)
    eax_6[8] = ecx_6
    eax_6[2] = (**ecx_6)(1)

int32_t var_2c_2 = ebx
eax_6[3] = *(edi_2 + 0x30)
eax_6[4] = edi_2
sub_41b340(eax_6)
void* eax_11 = sub_5f7370(*data_797da0, eax_6[2]->vFunc_1)

if (eax_11 != 0)
    void* eax_12 = sub_5f3790(eax_11, ebx)
    
    if (eax_12 != 0)
        sub_5e2de0(eax_12, esi, arg4)

if (arg10 == 0)
    void* eax_17 = sub_5f7370(*data_797da0, eax_6[2]->vFunc_1)
    
    if (eax_17 != 0)
        void* eax_18 = sub_5f3790(eax_17, ebx)
        
        if (eax_18 != 0)
            sub_5e3420(eax_18, 0, 0, esi, arg4, arg5, arg6, arg7, arg5 - 0x28, arg6 - 0x28, 
                arg7 - 0x28)
            esi = arg3
    
    sub_41b5d0(eax_6, 0, 0, esi, 2, arg5 + 0x1e, arg6 + 0x1e, arg7 + 0x1e, ebx)
    sub_41b5d0(eax_6, 0, arg4 - 2, esi, 2, arg5 - 0x64, arg6 - 0x64, arg7 - 0x64, ebx)
    sub_41b5d0(eax_6, 0, 2, 1, arg4 - 3, arg5 + 0x1e, arg6 + 0x1e, arg7 + 0x1e, ebx)
    sub_41b5d0(eax_6, 1, 2, 1, arg4 - 4, arg5 + 0x1e, arg6 + 0x1e, arg7 + 0x1e, ebx)
    sub_41b5d0(eax_6, esi - 2, 2, 1, arg4 - 4, arg5 - 0x64, arg6 - 0x64, arg7 - 0x64, ebx)
    sub_41b5d0(eax_6, esi - 1, 1, 1, arg4 - 3, arg5 - 0x64, arg6 - 0x64, arg7 - 0x64, ebx)
else
    (**arg10)(eax_6[2]->vFunc_1, esi, arg4, ebx)

sub_698870(arg8, eax_6[2]->vFunc_1, var_18, arg11, arg2, 0, 0, ebx)
void* eax = sub_5f7370(*data_797da0, eax_6[2]->vFunc_1)

if (eax == 0)
    return 

eax = sub_5f3790(eax, ebx)

if (eax != 0)
    sub_5e4050(eax)
