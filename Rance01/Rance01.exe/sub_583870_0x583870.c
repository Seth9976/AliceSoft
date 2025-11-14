// 函数: sub_583870
// 地址: 0x583870
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sub_70c710(fconvert.t(arg5) * fconvert.t(255.0))
int32_t* esi = arg2
int32_t eax_2 = (*(*esi + 0x10))()
int32_t edi = (*(*esi + 0x14))()
int32_t var_34 = edi
int32_t var_28
long double x87_r7_4

if (*(arg1 + 0x10) == 0)
    x87_r7_4 = fconvert.t(arg5)
    var_28 = 0
else
    long double x87_r6_1 = fconvert.t(arg5)
    x87_r7_4 = x87_r6_1
    var_28 = sub_70c710(float.t(var_34) * x87_r6_1)

float var_1c = fconvert.s(fconvert.t(*(arg1 + 0xc)) * float.t(eax_2))
long double x87_r6_5 = fconvert.t(0.5f)
x87_r6_5 - x87_r7_4
int32_t eax_4
eax_4.w = (x87_r6_5 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_4) ? 1 : 0) << 0xa
    | (x87_r6_5 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800
long double x87_r7_5

if ((eax_4:1.b & 0x41) != 0)
    long double x87_r7_6 = float.t(1) - x87_r7_4
    x87_r7_5 = x87_r7_6 + x87_r7_6
else
    x87_r7_5 = x87_r7_4 + x87_r7_4

float var_18 = fconvert.s(x87_r7_5)
(*(***(arg1 + 4) + 0x2c))(esi, 0, 0, eax_2, edi, 0, 0, 0)
arg2 = 0
int32_t result

if (edi s> 0)
    int32_t var_2c_1 = 0
    long double x87_r7_8 = fconvert.t(arg5) * fconvert.t(1440.0)
    int32_t var_30_1 = 0
    double var_10_1 = fconvert.d(x87_r7_8)
    double var_8_1 = fconvert.d(fconvert.t(90.0) + x87_r7_8)
    
    while (true)
        int32_t var_54_1 = arg2
        arg5 = mods.dp.d(sx.q(var_28 + arg2), edi)
        int32_t eax_13 = sub_70c710(sub_4ed890(fconvert.s(fconvert.t(fconvert.s((x87_r7_8
            + float.t(divs.dp.d(sx.q(var_30_1), edi))) * fconvert.t(3.1415927410125732)
            / fconvert.t(180.0))))) * fconvert.t(var_1c) * fconvert.t(var_18))
        int32_t var_38_1 = eax_2
        int32_t var_24_1 = 0
        int32_t eax_15 = (*(*esi + 0x10))()
        int32_t edi_2 = eax_13 - eax_2
        
        if (eax_13 - eax_2 s< 0)
            var_24_1 = neg.d(edi_2)
            var_38_1 = edi_2 + eax_2
            edi_2 = 0
        else if (edi_2 + eax_2 s> eax_15)
            var_38_1 = eax_15 - edi_2
        
        if (var_38_1 s> 0)
            int32_t* eax_19 = **(arg1 + 4)
            int32_t* var_14_3 = eax_19
            (*(*eax_19 + 0x18))(esi, edi_2, arg2, arg4, var_24_1, arg5, var_38_1, 1, 0xff - eax)
        
        int32_t edi_4 = eax_2
        int32_t var_24_2 = 0
        int32_t var_38_2 = eax_13
        int32_t eax_24 = (*(*esi + 0x10))()
        int32_t var_20_1
        
        if (eax_13 s>= 0)
            int32_t ecx_11 = eax_2 + eax_13
            var_20_1 = ecx_11
            
            if (ecx_11 s> eax_24)
                edi_4 = eax_24 - eax_13
        else
            edi_4 = eax_2 + eax_13
            var_20_1 = edi_4
            var_24_2 = neg.d(eax_13)
            var_38_2 = 0
        
        if (edi_4 s> 0)
            (*(***(arg1 + 4) + 0x18))(esi, var_38_2, arg2, arg4, var_24_2, arg5, edi_4, 1, 
                0xff - eax)
        
        int32_t edi_5 = var_20_1
        int32_t var_38_3 = eax_2
        int32_t ebp_3 = 0
        int32_t eax_35
        int32_t ecx_14
        eax_35, ecx_14 = (*(*esi + 0x10))()
        
        if (edi_5 s>= 0)
            ecx_14 = edi_5 + eax_2
            
            if (ecx_14 s> eax_35)
                var_38_3 = eax_35 - edi_5
        else
            int32_t eax_36 = edi_5 + eax_2
            ebp_3 = neg.d(edi_5)
            edi_5 = 0
            var_38_3 = eax_36
        
        if (var_38_3 s> 0)
            ecx_14 = (*(***(arg1 + 4) + 0x18))(esi, edi_5, arg2, arg4, ebp_3, arg5, var_38_3, 1, 
                0xff - eax)
        
        int32_t var_54_6 = ecx_14
        int32_t eax_43 = sub_70c710(sub_4ed890(fconvert.s(fconvert.t(fconvert.s((
            float.t(divs.dp.d(sx.q(var_2c_1), var_34)) + fconvert.t(var_8_1))
            * fconvert.t(3.1415927410125732) / fconvert.t(180.0))))) * fconvert.t(var_1c)
            * fconvert.t(var_18))
        int32_t var_38_4 = eax_2
        int32_t var_20_2 = 0
        int32_t eax_45 = (*(*esi + 0x10))()
        int32_t edi_7 = eax_43 - eax_2
        
        if (eax_43 - eax_2 s< 0)
            var_20_2 = neg.d(edi_7)
            var_38_4 = edi_7 + eax_2
            edi_7 = 0
        else if (edi_7 + eax_2 s> eax_45)
            var_38_4 = eax_45 - edi_7
        
        if (var_38_4 s> 0)
            (*(***(arg1 + 4) + 0x18))(esi, edi_7, arg2, arg3, var_20_2, arg5, var_38_4, 1, eax)
        
        int32_t edi_9 = eax_2
        int32_t var_20_3 = 0
        int32_t var_24_3 = eax_43
        int32_t eax_56 = (*(*esi + 0x10))()
        int32_t var_14_6
        
        if (eax_43 s>= 0)
            int32_t ecx_20 = eax_2 + eax_43
            var_14_6 = ecx_20
            
            if (ecx_20 s> eax_56)
                edi_9 = eax_56 - eax_43
        else
            edi_9 = eax_2 + eax_43
            var_14_6 = edi_9
            var_20_3 = neg.d(eax_43)
            var_24_3 = 0
        
        if (edi_9 s> 0)
            (*(***(arg1 + 4) + 0x18))(esi, var_24_3, arg2, arg3, var_20_3, arg5, edi_9, 1, eax)
        
        int32_t edi_10 = var_14_6
        int32_t ebp_7 = 0
        int32_t eax_67 = (*(*esi + 0x10))()
        int32_t edx_31
        
        if (edi_10 s< 0)
            edx_31 = edi_10 + eax_2
            ebp_7 = neg.d(edi_10)
            edi_10 = 0
        else if (edi_10 + eax_2 s<= eax_67)
            edx_31 = eax_2
        else
            int32_t eax_68 = eax_67 - edi_10
            int32_t var_38_5 = eax_68
            edx_31 = eax_68
        
        if (edx_31 s> 0)
            (*(***(arg1 + 4) + 0x18))(esi, edi_10, arg2, arg3, ebp_7, arg5, edx_31, 1, eax)
        
        var_30_1 += 0x2d0
        var_2c_1 += 0x168
        result = arg2 + 1
        arg2 = result
        
        if (result s>= var_34)
            break
        
        x87_r7_8 = fconvert.t(var_10_1)
        edi = var_34

result.b = 1
return result
