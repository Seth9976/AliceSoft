// 函数: ___acrt_getptd_noexit
// 地址: 0x100068af
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t edi
int32_t var_c = edi
enum WIN32_ERROR dwErrCode = GetLastError()
int32_t ebx = 0
void* eax = data_10016044
int32_t edi_1

if (eax != 0xffffffff)
    edi_1 = ___acrt_FlsGetValue@4(eax)

if (eax == 0xffffffff || edi_1 == 0)
    edi_1 = __calloc_base(1, 0x364)
    int32_t var_10_2
    
    if (edi_1 == 0)
        var_10_2 = 0
    label_100068e9:
        __free_base(var_10_2)
        SetLastError(dwErrCode)
        return ebx
    
    BOOL eax_3
    int32_t** ecx_3
    eax_3, ecx_3 = ___acrt_FlsSetValue@8(data_10016044, edi_1)
    
    if (eax_3 == 0)
        var_10_2 = edi_1
        goto label_100068e9
    
    int32_t* var_10_4 = &data_10017240
    int32_t var_14_2 = edi_1
    construct_ptd(ecx_3)
    __free_base(0)
    
    if (edi_1 == 0)
        SetLastError(dwErrCode)
        return ebx

SetLastError(dwErrCode)
return edi_1
