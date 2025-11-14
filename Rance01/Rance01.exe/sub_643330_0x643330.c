// 函数: sub_643330
// 地址: 0x643330
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg1[0xc]
int32_t esi = arg2[0xc]
int32_t edi = arg2[0xe]
void var_98

if (ecx s< esi)
label_643377:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx s<= esi)
    int32_t ecx_1 = arg1[0xd]
    int32_t esi_1 = arg2[0xd]
    
    if (ecx_1 s< esi_1)
        goto label_643377
    
    if (ecx_1 s<= esi_1)
        int32_t ecx_2 = arg1[0xe]
        
        if (ecx_2 s< edi)
            goto label_643377
        
        if (ecx_2 s<= edi && *arg1 s< *arg2)
            goto label_643377

int32_t ecx_4 = arg3[0xc]
int32_t esi_4 = arg1[0xc]
int32_t edi_3 = arg1[0xe]

if (ecx_4 s< esi_4)
label_6433c6:
    __builtin_memcpy(&var_98, arg3, 0x8c)
    __builtin_memcpy(arg3, arg1, 0x8c)
    __builtin_memcpy(arg1, &var_98, 0x8c)
else if (ecx_4 s<= esi_4)
    int32_t ecx_5 = arg3[0xd]
    int32_t esi_5 = arg1[0xd]
    
    if (ecx_5 s< esi_5)
        goto label_6433c6
    
    if (ecx_5 s<= esi_5)
        int32_t ecx_6 = arg3[0xe]
        
        if (ecx_6 s< edi_3)
            goto label_6433c6
        
        if (ecx_6 s<= edi_3 && *arg3 s< *arg1)
            goto label_6433c6

int32_t ecx_8 = arg1[0xc]
int32_t esi_8 = arg2[0xc]
int32_t edi_6 = arg1[0xd]
int32_t ebx_1 = arg2[0xe]

if (ecx_8 s< esi_8)
label_643415:
    __builtin_memcpy(&var_98, arg1, 0x8c)
    __builtin_memcpy(arg1, arg2, 0x8c)
    __builtin_memcpy(arg2, &var_98, 0x8c)
else if (ecx_8 s<= esi_8)
    int32_t ecx_9 = arg2[0xd]
    
    if (edi_6 s< ecx_9)
        goto label_643415
    
    if (edi_6 s<= ecx_9)
        int32_t ecx_10 = arg1[0xe]
        
        if (ecx_10 s< ebx_1)
            goto label_643415
        
        if (ecx_10 s<= ebx_1 && *arg1 s< *arg2)
            goto label_643415
