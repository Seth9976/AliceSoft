// 函数: sub_587150
// 地址: 0x587150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_20
int32_t eax_1 = data_78c474 ^ &var_20
int32_t edi = arg1[4]
char* result

if (edi != 3)
label_5871d0:
    result = nullptr
    
    if (edi s> 0)
        int32_t esi_1 = arg1[5]
        char* edx_3
        
        do
            char* edx_2
            
            if (esi_1 u< 0x10)
                edx_2 = arg1
            else
                edx_2 = *arg1
            
            if (*(edx_2 + result) u>= 0x81)
                if (esi_1 u< 0x10)
                    edx_3 = arg1
                else
                    edx_3 = *arg1
            
            if (*(edx_2 + result) u>= 0x81 && *(edx_3 + result) u<= 0x9f)
                result = &result[2]
                edx_3.b = 0
            else
                if (esi_1 u< 0x10)
                    edx_3 = arg1
                else
                    edx_3 = *arg1
                
                if (*(edx_3 + result) u< 0xe0)
                    if (esi_1 u< 0x10)
                        edx_3 = arg1
                    else
                        edx_3 = *arg1
                    
                    edx_3.b = *(edx_3 + result) == 0x5c
                    result = &result[1]
                else
                    result = &result[2]
                    edx_3.b = 0
        while (result s< edi)
        
        if (edx_3.b != 0)
            result = sub_401ec0(arg1, &var_20, 0, edi - 1)
            int32_t var_c
            
            if (var_c u>= 0x10)
                int32_t var_2c_2 = var_20
                result = sub_6b4d5b()
else
    int32_t edx_1 = arg1[5]
    char* eax_2
    
    if (edx_1 u< 0x10)
        eax_2 = arg1
    else
        eax_2 = *arg1
    
    char* eax_3
    
    if (*eax_2 u>= 0x61)
        if (edx_1 u< 0x10)
            eax_3 = arg1
        else
            eax_3 = *arg1
    
    if (*eax_2 u< 0x61 || *eax_3 u> 0x7a)
        char* eax_4
        
        if (edx_1 u< 0x10)
            eax_4 = arg1
        else
            eax_4 = *arg1
        
        if (*eax_4 u< 0x41)
            goto label_5871d0
        
        char* eax_5
        
        if (edx_1 u< 0x10)
            eax_5 = arg1
        else
            eax_5 = *arg1
        
        if (*eax_5 u> 0x5a)
            goto label_5871d0
    
    int32_t* eax_6
    
    if (edx_1 u< 0x10)
        eax_6 = arg1
    else
        eax_6 = *arg1
    
    if (*(eax_6 + 1) != 0x3a)
        goto label_5871d0
    
    if (edx_1 u< 0x10)
        result = arg1
    else
        result = *arg1
    
    if (result[2] != 0x5c)
        goto label_5871d0

sub_6b4885(eax_1 ^ &var_20)
return result
