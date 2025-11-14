// 函数: sub_5698b0
// 地址: 0x5698b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_3c
int32_t eax_1 = data_78c474 ^ &var_3c
int32_t ebx = arg3
int32_t var_38
int32_t var_28
sub_56e980(arg1 + 0x128, &var_28, &var_38)
int32_t eax_4 = (*(*(arg1 + 0x128) + 0x10))()
int32_t eax_6 = (*(*(arg1 + 0x128) + 0x14))()
int32_t edx_2 = arg4
int32_t ecx_2 = arg5
int32_t ebp_1 = *(arg1 + 0xdc)
int32_t eax_7 = arg6
int32_t esi_1 = ebx

if (ebx s< 0)
    ecx_2 += ebx
    esi_1 = 0

if (ecx_2 + esi_1 s> ebp_1)
    ecx_2 = ebp_1 - esi_1

int32_t ebp_3 = var_38
RECT lprc

if (ecx_2 s> 0)
    if (edx_2 s< 0)
        eax_7 += edx_2
        edx_2 = 0
    
    if (eax_7 + edx_2 s> ebp_3)
        eax_7 = ebp_3 - edx_2
    
    if (eax_7 s> 0)
        lprc.left = esi_1
        lprc.top = edx_2
        lprc.right = ecx_2 + esi_1
        lprc.bottom = eax_7 + edx_2
        FillRect(arg2, &lprc, GetStockObject(BLACK_BRUSH))

int32_t ebp_4 = var_38
int32_t edx_4 = arg4
int32_t ecx_5 = arg6
var_3c = arg5
int32_t edi_5 = *(arg1 + 0xdc)
int32_t edi_7 = eax_6 + ebp_4
int32_t eax_14 = *(arg1 + 0xe0) - eax_6 - ebp_4
int32_t esi_2 = ebx

if (ebx s< 0)
    var_3c = arg5 + ebx
    esi_2 = 0

if (var_3c + esi_2 s> edi_5)
    var_3c = edi_5 - esi_2

if (var_3c s> 0)
    if (edx_4 s< edi_7)
        ecx_5 += edx_4
        edx_4 = edi_7
    
    if (ecx_5 + edx_4 s> edi_7 + eax_14)
        ecx_5 = edi_7 - edx_4 + eax_14
    
    if (ecx_5 s> 0)
        lprc.left = esi_2
        lprc.top = edx_4
        lprc.right = var_3c + esi_2
        lprc.bottom = ecx_5 + edx_4
        FillRect(arg2, &lprc, GetStockObject(BLACK_BRUSH))

int32_t ecx_9 = arg4
int32_t edx_6 = arg5
int32_t eax_18 = arg6
int32_t edi_12 = ebx

if (ebx s< 0)
    edx_6 += ebx
    edi_12 = 0

int32_t ebp_9 = var_28

if (edx_6 + edi_12 s> ebp_9)
    edx_6 = ebp_9 - edi_12

if (edx_6 s> 0)
    int32_t esi_6 = var_38
    
    if (ecx_9 s< esi_6)
        eax_18 += ecx_9
        ecx_9 = esi_6
    
    if (eax_18 + ecx_9 s> edi_7)
        eax_18 = eax_6 - ecx_9 + var_38
    
    if (eax_18 s> 0)
        lprc.left = edi_12
        lprc.top = ecx_9
        lprc.right = edx_6 + edi_12
        lprc.bottom = eax_18 + ecx_9
        FillRect(arg2, &lprc, GetStockObject(BLACK_BRUSH))
    
    ebp_9 = var_28

int32_t edx_10 = arg4
int32_t esi_8 = arg5
int32_t ecx_12 = eax_4 + ebp_9
int32_t result = *(arg1 + 0xdc) - eax_4 - ebp_9

if (ebx s< ecx_12)
    esi_8 += ebx
    ebx = ecx_12

if (esi_8 + ebx s> ecx_12 + result)
    esi_8 = result + ecx_12 - ebx

if (esi_8 s> 0)
    int32_t ecx_14 = var_38
    
    if (edx_10 s>= ecx_14)
        result = arg6
    else
        result = edx_10 + arg6
        edx_10 = ecx_14
    
    if (result + edx_10 s> edi_7)
        result = eax_6 - edx_10 + ecx_14
    
    if (result s> 0)
        lprc.left = ebx
        lprc.top = edx_10
        lprc.right = esi_8 + ebx
        lprc.bottom = result + edx_10
        result = FillRect(arg2, &lprc, GetStockObject(BLACK_BRUSH))

sub_6b4885(eax_1 ^ &var_3c)
return result
