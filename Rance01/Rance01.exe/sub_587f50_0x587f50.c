// 函数: sub_587f50
// 地址: 0x587f50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx = arg1[1]
int32_t* ebx = *arg1
int32_t* eax = ebx

if (eax == ecx)
label_587f77:
    eax = ebx
    
    if (eax == ecx)
    label_587f90:
        eax = ebx
        
        if (eax == ecx)
        label_587fab:
            int32_t var_8
            int32_t* var_14 = &var_8
            int32_t var_18 = ecx
            var_8 = 8
            int32_t* var_4
            int32_t ecx_1
            int32_t* edx
            int32_t* edx_1
            ecx_1, edx_1 = sub_416ae0(&var_4, edx, ecx, ebx)
            
            if (var_4 == ecx)
                int32_t* var_14_1 = &var_8
                int32_t var_18_1 = ecx
                var_8 = 9
                int32_t ecx_2
                int32_t* edx_2
                ecx_2, edx_2 = sub_416ae0(&var_4, edx_1, ecx_1, ebx)
                
                if (var_4 == ecx)
                    int32_t* var_14_2 = &var_8
                    int32_t var_18_2 = ecx
                    var_8 = 0xa
                    sub_416ae0(&var_4, edx_2, ecx_2, ebx)
                    int32_t** eax_2
                    eax_2.b = var_4 != ecx
                    return eax_2
            
            int32_t** eax_1
            eax_1.b = 1
            return eax_1
        
        while (*eax != 7)
            eax = &eax[1]
            
            if (eax == ecx)
                break
        
        if (eax == ecx)
            goto label_587fab
    else
        while (*eax != 5)
            eax = &eax[1]
            
            if (eax == ecx)
                break
        
        if (eax == ecx)
            goto label_587f90
else
    while (*eax != 3)
        eax = &eax[1]
        
        if (eax == ecx)
            break
    
    if (eax == ecx)
        goto label_587f77

eax.b = 1
return eax
