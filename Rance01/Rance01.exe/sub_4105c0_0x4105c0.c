// 函数: sub_4105c0
// 地址: 0x4105c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char eax = sub_4130c0(&arg1[1], 0x100)

if (eax == 0)
    return eax

int32_t* edi = nullptr
int32_t ebp = 0
int32_t var_8 = 1
int32_t i_2 = 1
int32_t i

do
    int32_t i_3 = i_2
    char* j = nullptr
    int32_t ebx_1 = 1
    void* var_14_1 = edi + 1
    int32_t var_18_1 = var_8
    
    do
        j[*(edi + arg1[1])] = (ebx_1 s/ 0x1fe).b
        int32_t eax_7
        int32_t edx_7
        edx_7:eax_7 = muls.dp.d(0x80808081, var_18_1)
        int32_t edx_8 = edx_7 + var_18_1
        var_18_1 += ebp
        int32_t edx_9 = edx_8 s>> 8
        j[*(edi + arg1[1]) + 1] = (edx_9 u>> 0x1f).b + edx_9.b
        int32_t eax_11
        void* edx_12
        edx_12:eax_11 = muls.dp.d(0x80808081, var_14_1)
        void* edx_13 = edx_12 + var_14_1
        var_14_1 += ebp
        int32_t edx_14 = edx_13 s>> 8
        j[*(edi + arg1[1]) + 2] = (edx_14 u>> 0x1f).b + edx_14.b
        int32_t eax_15
        int32_t edx_17
        edx_17:eax_15 = muls.dp.d(0x80808081, i_3)
        int32_t edx_18 = edx_17 + i_3
        i_3 += ebp
        int32_t edx_19 = edx_18 s>> 8
        j[*(edi + arg1[1]) + 3] = (edx_19 u>> 0x1f).b + edx_19.b
        j = &j[4]
        ebx_1 += ebp
    while (j s< 0x100)
    
    var_8 += 2
    i = i_2 + 6
    ebp += 8
    edi = &edi[1]
    i_2 = i
while (i s< 0x601)
int128_t* eax_20 = arg1[5]
void* ecx = arg1[4]
void* edx_23 = eax_20 - ecx

if (edx_23 u<= 0x1ff)
    if (edx_23 u< 0x1ff)
        sub_4247b0(&arg1[4], edx_23, ecx - eax_20 + 0x1ff)
        int128_t* ecx_3 = arg1[5]
        void* eax_23 = arg1[4] - ecx_3
        
        if (eax_23 != 0xfffffe01)
            sub_6bc670(ecx_3, 0, eax_23 + 0x1ff)
        
        arg1[5] = arg1[4] + 0x1ff
else if (ecx + 0x1ff != eax_20)
    void* edi_2 = 0
    sub_6b49d0(ecx + 0x1ff, eax_20, edi_2)
    arg1[5] = edi_2 + ecx + 0x1ff

for (char* i_1 = nullptr; i_1 s< 0x1ff; i_1 = &i_1[1])
    char ecx_4 = i_1.b
    
    if (i_1 s>= 0xff)
        ecx_4 = -1
    
    i_1[arg1[4]] = ecx_4

(*(*arg1 + 0xc))(1)
int32_t eax_28
eax_28.b = 1
return eax_28
