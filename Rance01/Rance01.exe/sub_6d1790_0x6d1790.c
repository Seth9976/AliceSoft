// 函数: sub_6d1790
// 地址: 0x6d1790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg1
int32_t ebx = arg4
int32_t* esi = arg8
void* edi = *esi
void* var_134 = edi
int32_t var_20 = 0
int32_t eax = ebx
int32_t var_130[0x40]

if (ebx s<= arg5)
    int32_t edi_1 = 0
    
    do
        int32_t esi_3 = sx.d(*(arg3 + (*((eax << 2) + &data_79aee0) << 1)))
        
        if (esi_3 s< 0)
            esi_3 = neg.d(esi_3)
        
        int32_t esi_4 = esi_3 s>> arg6
        var_130[eax] = esi_4
        
        if (esi_4 == 1)
            edi_1 = eax
        
        eax += 1
    while (eax s<= arg5)
    
    var_20 = edi_1
    esi = arg8
    ebp = arg1

int32_t ecx_1 = 0
int32_t edx_2 = 0
int32_t var_30 = 0
int32_t var_1c = 0
int32_t* result = arg5
int32_t var_2c

if (ebx s<= result)
    char* esi_5 = edi + arg7
    int32_t edi_2 = 0
    
    do
        int32_t eax_4 = var_130[ebx]
        
        if (eax_4 != 0)
            var_2c = edi_2
            
            if (ecx_1 s> 0xf && ebx s<= var_20)
                bool cond:1_1
                
                do
                    sub_6d0f30(ebp, arg2)
                    sub_6d1170(ebp, arg7, &var_134)
                    var_134 = nullptr
                    sub_6d10b0(ebp, arg2, &var_30)
                    sub_6d1170(ebp, esi_5, &var_2c)
                    esi_5 = arg7
                    cond:1_1 = var_30 s> 0xf
                    var_2c = 0
                while (cond:1_1)
                edx_2 = 0
            
            if (eax_4 s<= 1)
                sub_6d0f30(ebp, arg2)
                sub_6d1170(ebp, arg7, &var_134)
                var_134 = nullptr
                int32_t edx_6 = var_30 << 4
                uint32_t eax_6 = zx.d(*(arg2 + (edx_6 << 1) + 0x40a))
                int32_t edx_7 = *(arg2 + (edx_6 << 2) + 0xc)
                
                if (ebp[0xf] != 0)
                    result = sub_6d0080(ebp, eax_6, edx_7)
                else
                    result = sub_6cffa0(ebp, eax_6, edx_7)
                
                if (result != 0)
                    esi = arg8
                    edi = var_134
                    goto label_6d1b20
                
                int32_t eax_8
                
                if (sx.d(*(arg3 + (*((ebx << 2) + &data_79aee0) << 1))) s< 0)
                    eax_8 = 0
                else
                    eax_8 = 1
                
                if (ebp[0xf] != 0)
                    result = sub_6d0080(ebp, eax_8, 1)
                else
                    result = sub_6cffa0(ebp, eax_8, 1)
                
                if (result != 0)
                    esi = arg8
                    edi = var_134
                    goto label_6d1b20
                
                sub_6d1170(ebp, esi_5, &var_2c)
                esi_5 = arg7
                edx_2 = 0
                edi_2 = 0
                ecx_1 = 0
                var_30 = 0
            else
                eax_4.b &= 1
                esi_5[edx_2] = eax_4.b
                edx_2 = var_2c + 1
                edi_2 = edx_2
                ecx_1 = var_30
        else
            ecx_1 += 1
            var_30 = ecx_1
        
        ebx += 1
        result = arg5
    while (ebx s<= result)
    
    var_1c = edi_2
    esi = arg8
    edi = var_134

if (ecx_1 s> 0 || edx_2 s> 0)
    int32_t eax_10 = ebp[0xa] + 1
    edi += edx_2
    ebp[0xa] = eax_10
    
    if (eax_10 == 0x7fff)
        var_2c = var_1c
        var_134 = edi
    label_6d1af1:
        sub_6d0f30(ebp, arg2)
        result = sub_6d1170(ebp, arg7, &var_134)
        edi = nullptr
    else
        result = data_78d5e0 - 0x3f
        
        if (edi s> result)
            var_2c = var_1c
            var_134 = edi
            goto label_6d1af1

label_6d1b20:
*esi = edi
return result
