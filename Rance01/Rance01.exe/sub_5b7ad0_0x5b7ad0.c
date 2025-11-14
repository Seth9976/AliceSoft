// 函数: sub_5b7ad0
// 地址: 0x5b7ad0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi_1 = arg6 - arg5
int32_t edi = arg7
int32_t ecx = arg3 - edi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx)
int32_t temp0 = divs.dp.d(sx.q(ecx), esi_1)
int32_t ebp = arg4
int32_t var_8

if (ecx s>= 0)
    var_8 = temp0 + 1
else
    var_8 = temp0 - 1

int32_t eax_6
int32_t edx_4
edx_4:eax_6 = sx.q(temp0 * esi_1)
int32_t ebx_3 = (eax_1 ^ edx) - edx - ((eax_6 ^ edx_4) - edx_4)
void* ecx_2 = nullptr

if (ebp s> arg6)
    ebp = arg6
    arg4 = ebp

void* result = arg5

if (result s< ebp)
    *(arg8 + (result << 2)) =
        fconvert.s(fconvert.t(*((edi << 2) + &data_7459c8)) * fconvert.t(*(arg8 + (result << 2))))

void* edx_7 = result + 1

if (edx_7 s< ebp)
    result = ebp - edx_7
    
    if (result s>= 4)
        result = arg8 + (edx_7 << 2) + 8
        arg6 = ((ebp - edx_7 - 4) u>> 2) + 1
        edx_7 += (((ebp - edx_7 - 4) u>> 2) + 1) << 2
        int32_t i
        
        do
            void* ecx_3 = ecx_2 + ebx_3
            int32_t edi_1
            
            if (ecx_3 s< esi_1)
                edi_1 = edi + temp0
            else
                ecx_3 -= esi_1
                edi_1 = edi + var_8
            
            void* ecx_4 = ecx_3 + ebx_3
            *(result - 8) =
                fconvert.s(fconvert.t(*((edi_1 << 2) + &data_7459c8)) * fconvert.t(*(result - 8)))
            int32_t edi_2
            
            if (ecx_4 s< esi_1)
                edi_2 = edi_1 + temp0
            else
                ecx_4 -= esi_1
                edi_2 = edi_1 + var_8
            
            void* ecx_5 = ecx_4 + ebx_3
            *(result - 4) =
                fconvert.s(fconvert.t(*((edi_2 << 2) + &data_7459c8)) * fconvert.t(*(result - 4)))
            int32_t edi_3
            
            if (ecx_5 s< esi_1)
                edi_3 = edi_2 + temp0
            else
                ecx_5 -= esi_1
                edi_3 = edi_2 + var_8
            
            ecx_2 = ecx_5 + ebx_3
            *result = fconvert.s(fconvert.t(*((edi_3 << 2) + &data_7459c8)) * fconvert.t(*result))
            
            if (ecx_2 s< esi_1)
                edi = edi_3 + temp0
            else
                ecx_2 -= esi_1
                edi = edi_3 + var_8
            
            result += 0x10
            i = arg6
            arg6 -= 1
            *(result - 0xc) =
                fconvert.s(fconvert.t(*((edi << 2) + &data_7459c8)) * fconvert.t(*(result - 0xc)))
        while (i != 1)
        ebp = arg4
    
    if (edx_7 s< ebp)
        float* edi_4 = (edi << 2) + &data_7459c8
        
        do
            ecx_2 += ebx_3
            
            if (ecx_2 s< esi_1)
                edi_4 = &edi_4[temp0]
            else
                ecx_2 -= esi_1
                edi_4 = &edi_4[var_8]
            
            result = arg8
            long double x87_r7_12 = fconvert.t(*edi_4) * fconvert.t(*(result + (edx_7 << 2)))
            edx_7 += 1
            *(result + (edx_7 << 2) - 4) = fconvert.s(x87_r7_12)
        while (edx_7 s< ebp)

return result
