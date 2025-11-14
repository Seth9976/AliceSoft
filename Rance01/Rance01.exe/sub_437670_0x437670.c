// 函数: sub_437670
// 地址: 0x437670
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg3
void* esi = arg1
(*(**(esi + 0x10) + 0x2c))(arg2, *ebp, ebp[1], ebp[2], ebp[3], 0, 0, 0)
*arg8 += ebp[2] * ebp[3]
int32_t* result = *arg7
char edx_5 = *(esi + 0x14)
int32_t* result_1 = result

if (result != arg7[1])
    while (true)
        void* ebx_1 = *result
        
        if (*(ebx_1 + 0x2c) != 1)
            int32_t* esi_1 = *(ebx_1 + 0xcc)
            
            if (esi_1 != 0)
                int32_t* ecx_5 = *(ebx_1 + 0xc) + arg5
                void* edx_7 = *esi_1
                int32_t* var_5c = *(ebx_1 + 8) + arg4
                int32_t eax_5 = *(edx_7 + 0x10)
                int32_t* var_68 = ecx_5
                int32_t* eax_6 = eax_5()
                void* eax_8 = (*(*esi_1 + 0x14))()
                int32_t* eax_9 = *(ebx_1 + 0xc4)
                int32_t* var_70
                int32_t* var_6c
                int32_t* var_54
                int32_t* var_50
                int32_t* ecx_8
                int32_t* edx_9
                
                if (eax_9 s> 0 || *(ebx_1 + 0xc8) s> 0)
                    ecx_8 = *(ebx_1 + 0xbc)
                    edx_9 = *(ebx_1 + 0xc0)
                    int32_t* ebp_1 = *(ebx_1 + 0xc8)
                    var_6c = ecx_8
                    var_70 = edx_9
                    var_50 = eax_9
                    var_54 = ebp_1
                    
                    if (ecx_8 s< 0)
                        ecx_8 = nullptr
                        var_6c = nullptr
                    
                    if (eax_9 + ecx_8 s> eax_6)
                        eax_9 = eax_6 - ecx_8
                        var_50 = eax_9
                    
                    if (edx_9 s< 0)
                        edx_9 = nullptr
                        var_70 = nullptr
                    
                    ebp = arg3
                    
                    if (var_54 + edx_9 s> eax_8)
                        var_54 = eax_8 - edx_9
                else
                    ecx_8 = nullptr
                    eax_9 = eax_6
                    edx_9 = nullptr
                    var_6c = nullptr
                    var_70 = nullptr
                    var_50 = eax_9
                    var_54 = eax_8
                
                if (*(ebx_1 + 0xc4) s<= 0 || *(ebx_1 + 0xc8) s<= 0)
                label_437849:
                    int32_t var_3c = *(ebx_1 + 0x24)
                    int32_t* var_34
                    sub_42e070(arg6 + 8, &var_34, &var_3c)
                    int32_t* eax_14 = var_34
                    void* var_44_2
                    void* edi_8
                    
                    if (eax_14 != *(arg6 + 0xc))
                        void* ecx_12 = eax_14[4]
                        var_44_2 = ecx_12
                        edi_8 = ecx_12
                    else
                        edi_8 = nullptr
                        var_44_2 = nullptr
                    
                    int32_t* var_58_1 = nullptr
                    void* var_60 = nullptr
                    int32_t* var_64 = nullptr
                    int32_t* edi_10
                    
                    if (edi_8 == 0)
                        if (sub_408880(ebp, &var_5c, &var_68, &var_6c, &var_70, &var_50, &var_54)
                                != 0)
                            edi_10 = var_5c
                        label_437994:
                            int32_t edx_15 = *(ebx_1 + 0xa8)
                            char eax_30 = (*(ebx_1 + 0xac)).b
                            int32_t ebp_5 = *(ebx_1 + 0x98)
                            var_5c = *(ebx_1 + 0x1c)
                            char ecx_22 = (*(ebx_1 + 0xb0)).b
                            int32_t var_30 = edx_15
                            int32_t edx_16 = *(ebx_1 + 0xb4)
                            char eax_31 = (*(ebx_1 + 0x9c)).b
                            char ecx_23 = (*(ebx_1 + 0xa0)).b
                            int32_t var_14_1 = *(ebx_1 + 0xa4)
                            int32_t edx_18 = *(*esi_1 + 0x28)
                            int32_t var_20 = ebp_5
                            char eax_33 = edx_18()
                            bool cond:4_1 = var_5c != 0xff
                            int32_t ecx_30 =
                                ((zx.d(var_30.b) | edx_16 << 8) << 8 | zx.d(eax_30)) << 8
                                | zx.d(ecx_22)
                            int32_t ecx_31 = neg.d(ecx_30)
                            int32_t eax_38
                            eax_38.b = (((ebp_5 | 0xffffff00) << 8 | zx.d(eax_31)) << 8
                                | zx.d(ecx_23)) != 0xffffffff
                            int32_t* ebp_11 = var_50
                            int32_t ecx_34 = neg.d(sbb.d(ecx_31, ecx_31, ecx_30 != 0)) | eax_38
                            uint32_t eax_39 = zx.d(cond:4_1)
                            int32_t ecx_35 = neg.d(ecx_34)
                            int32_t edx_22
                            edx_22.b = (edx_5 & ebp_11 s>= 4) != 0
                            uint32_t edx_23 = zx.d(eax_33)
                            int32_t eax_40 = neg.d(eax_39)
                            int32_t edx_24 = neg.d(edx_23)
                            int32_t eax_44 = neg.d(var_44_2)
                            int32_t ecx_41 = (sbb.d(ecx_35, ecx_35, ecx_34 != 0) & 2) | edx_22
                                | (sbb.d(eax_40, eax_40, eax_39 != 0) & 8)
                                | (sbb.d(edx_24, edx_24, edx_23 != 0) & 0x10)
                                | (sbb.d(eax_44, eax_44, var_44_2 != 0) & 4)
                            int32_t* ebx_2 = var_54
                            int32_t ecx_42 = ecx_41 | *(ebx_1 + 0x20) << 0x18
                            
                            if (ecx_42 s> 0x1000000)
                                if (ecx_42 s> 0x2000000)
                                    if (ecx_42 s> 0x3000000)
                                        if (ecx_42 - 0x3000001 u<= 0x1e)
                                            switch (ecx_42)
                                                case 0x3000001
                                                    int32_t* var_8c_103 = ebx_2
                                                    int32_t* var_90_102 = ebp_11
                                                    int32_t* ecx_261 = var_68
                                                    sub_44a860(arg1 + 0x18, arg2, ecx_261, arg2, 
                                                        edi_10, ecx_261, esi_1, var_6c, var_70)
                                                case 0x3000002
                                                    void* var_8c_104 = arg1 + 0x18
                                                    int32_t* eax_259 = var_70
                                                    int32_t* ecx_262 = var_6c
                                                    sub_44aa80(eax_259, var_68, ecx_262, arg2, 
                                                        edi_10, esi_1, ecx_262, eax_259, ebp_11, 
                                                        ebx_2, &var_30, &var_20)
                                                case 0x3000003
                                                    sub_44ac50(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, &var_30, &var_20, 
                                                        arg1 + 0x18)
                                                case 0x3000004
                                                    sub_44afc0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, arg1 + 0x18)
                                                case 0x3000005
                                                    sub_44b140(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, arg1 + 0x18)
                                                case 0x3000006
                                                    void* var_8c_108 = arg1 + 0x18
                                                    int32_t* eax_271 = var_6c
                                                    sub_44b490(eax_271, var_68, arg2, arg2, edi_10, 
                                                        esi_1, eax_271, var_70, ebp_11, ebx_2, 
                                                        var_58_1, var_60, var_64, &var_30, &var_20)
                                                case 0x3000007
                                                    sub_44b6d0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, &var_30, &var_20, arg1 + 0x18)
                                                case 0x3000008
                                                    int32_t* var_8c_110 = var_5c
                                                    int32_t* var_90_109 = ebx_2
                                                    int32_t* edx_304 = var_68
                                                    sub_44bb70(arg1 + 0x18, edx_304, arg2, arg2, 
                                                        edi_10, edx_304, esi_1, var_6c, var_70, 
                                                        ebp_11)
                                                case 0x3000009
                                                    int32_t* var_8c_111 = var_5c
                                                    int32_t* var_90_110 = ebx_2
                                                    int32_t* ecx_279 = var_68
                                                    sub_44bca0(arg1 + 0x18, arg2, ecx_279, arg2, 
                                                        edi_10, ecx_279, esi_1, var_6c, var_70, 
                                                        ebp_11)
                                                case 0x300000a
                                                    void* var_8c_112 = arg1 + 0x18
                                                    int32_t* ecx_280 = var_70
                                                    sub_44bfc0(arg2, var_68, ecx_280, arg2, edi_10, 
                                                        esi_1, var_6c, ecx_280, ebp_11, ebx_2, 
                                                        var_5c, &var_30, &var_20)
                                                case 0x300000b
                                                    sub_44c1b0(var_5c, arg2, edi_10, var_68, esi_1, 
                                                        var_6c, var_70, ebp_11, ebx_2, &var_30, 
                                                        &var_20, arg1 + 0x18)
                                                case 0x300000c
                                                    sub_44c610(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, var_5c, arg1 + 0x18)
                                                case 0x300000d
                                                    sub_44c790(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, var_5c, arg1 + 0x18)
                                                case 0x300000e
                                                    void* var_8c_116 = arg1 + 0x18
                                                    int32_t* eax_290 = var_70
                                                    int32_t* ecx_292 = var_6c
                                                    sub_44cb10(eax_290, var_68, ecx_292, arg2, 
                                                        edi_10, esi_1, ecx_292, eax_290, ebp_11, 
                                                        ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                        &var_30, &var_20)
                                                case 0x300000f
                                                    sub_44cd50(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, var_5c, &var_30, &var_20, 
                                                        arg1 + 0x18)
                                                case 0x3000010
                                                    int32_t* var_8c_118 = ebx_2
                                                    int32_t* var_90_117 = ebp_11
                                                    int32_t* edx_328 = var_68
                                                    sub_44d230(arg1 + 0x18, edx_328, arg2, arg2, 
                                                        edi_10, edx_328, esi_1, var_6c, var_70)
                                                case 0x3000011
                                                    int32_t* var_8c_119 = ebx_2
                                                    int32_t* var_90_118 = ebp_11
                                                    int32_t* edx_330 = var_68
                                                    sub_44d370(arg1 + 0x18, edx_330, arg2, arg2, 
                                                        edi_10, edx_330, esi_1, var_6c, var_70)
                                                case 0x3000012
                                                    void* var_8c_120 = arg1 + 0x18
                                                    int32_t* eax_300 = var_6c
                                                    sub_44d680(eax_300, var_68, arg2, arg2, edi_10, 
                                                        esi_1, eax_300, var_70, ebp_11, ebx_2, 
                                                        &var_30, &var_20)
                                                case 0x3000013
                                                    sub_44d8b0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, &var_30, &var_20, 
                                                        arg1 + 0x18)
                                                case 0x3000014
                                                    sub_44dd00(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, arg1 + 0x18)
                                                case 0x3000015
                                                    sub_44de80(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, arg1 + 0x18)
                                                case 0x3000016
                                                    void* var_8c_124 = arg1 + 0x18
                                                    int32_t* ecx_310 = var_70
                                                    sub_44e220(arg2, var_68, ecx_310, arg2, edi_10, 
                                                        esi_1, var_6c, ecx_310, ebp_11, ebx_2, 
                                                        var_58_1, var_60, var_64, &var_30, &var_20)
                                                case 0x3000017
                                                    sub_44e4b0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, &var_30, &var_20, arg1 + 0x18)
                                                case 0x3000018
                                                    int32_t* var_8c_126 = var_5c
                                                    int32_t* var_90_125 = ebx_2
                                                    int32_t* ecx_317 = var_68
                                                    sub_44e980(arg1 + 0x18, arg2, ecx_317, arg2, 
                                                        edi_10, ecx_317, esi_1, var_6c, var_70, 
                                                        ebp_11)
                                                case 0x3000019
                                                    int32_t* var_8c_127 = var_5c
                                                    int32_t* var_90_126 = ebx_2
                                                    int32_t* edx_354 = var_68
                                                    sub_44eac0(arg1 + 0x18, edx_354, arg2, arg2, 
                                                        edi_10, edx_354, esi_1, var_6c, var_70, 
                                                        ebp_11)
                                                case 0x300001a
                                                    void* var_8c_128 = arg1 + 0x18
                                                    int32_t* eax_317 = var_70
                                                    int32_t* ecx_321 = var_6c
                                                    sub_44ee00(eax_317, var_68, ecx_321, arg2, 
                                                        edi_10, esi_1, ecx_321, eax_317, ebp_11, 
                                                        ebx_2, var_5c, &var_30, &var_20)
                                                case 0x300001b
                                                    sub_44f030(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_5c, &var_30, 
                                                        &var_20, arg1 + 0x18)
                                                case 0x300001c
                                                    sub_44f4b0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, var_5c, arg1 + 0x18)
                                                case 0x300001d
                                                    sub_44f640(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, var_5c, arg1 + 0x18)
                                                case 0x300001e
                                                    void* var_8c_132 = arg1 + 0x18
                                                    int32_t* eax_329 = var_70
                                                    int32_t* ecx_331 = var_6c
                                                    sub_44f9f0(eax_329, var_68, ecx_331, arg2, 
                                                        edi_10, esi_1, ecx_331, eax_329, ebp_11, 
                                                        ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                        &var_30, &var_20)
                                                case 0x300001f
                                                    sub_44fc90(arg2, edi_10, var_68, esi_1, var_6c, 
                                                        var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                        var_64, var_5c, &var_30, &var_20, 
                                                        arg1 + 0x18)
                                    else if (ecx_42 == 0x3000000)
                                        int32_t* var_8c_102 = ebx_2
                                        int32_t* var_90_101 = ebp_11
                                        int32_t* ecx_258 = var_68
                                        sub_44a780(arg1 + 0x18, arg2, ecx_258, arg2, edi_10, 
                                            ecx_258, esi_1, var_6c, var_70)
                                    else if (ecx_42 - 0x2000001 u<= 0x1e)
                                        switch (ecx_42)
                                            case 0x2000001
                                                int32_t* ecx_195 = var_70
                                                int32_t* var_8c_71 = ebx_2
                                                sub_445930(arg2, var_68, ecx_195, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_195, ebp_11)
                                            case 0x2000002
                                                sub_445b10(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, &var_30, &var_20, 
                                                    arg1 + 0x18)
                                            case 0x2000003
                                                int32_t* ecx_200 = var_70
                                                int32_t* var_8c_73 = &var_20
                                                sub_445cc0(arg2, var_68, ecx_200, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_200, ebp_11, ebx_2, &var_30)
                                            case 0x2000004
                                                int32_t* var_8c_74 = var_64
                                                int32_t* ecx_202 = var_70
                                                sub_445fd0(arg2, var_68, ecx_202, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_202, ebp_11, ebx_2, 
                                                    var_58_1, var_60)
                                            case 0x2000005
                                                int32_t* var_8c_75 = var_64
                                                int32_t* ecx_204 = var_70
                                                sub_446120(arg2, var_68, ecx_204, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_204, ebp_11, ebx_2, 
                                                    var_58_1, var_60)
                                            case 0x2000006
                                                sub_4463f0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                    var_64, &var_30, &var_20, arg1 + 0x18)
                                            case 0x2000007
                                                int32_t* var_8c_77 = &var_20
                                                int32_t* ecx_211 = var_70
                                                sub_446610(arg2, var_68, ecx_211, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_211, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64, &var_30)
                                            case 0x2000008
                                                int32_t* eax_207 = var_6c
                                                int32_t* var_8c_78 = var_5c
                                                sub_446a10(eax_207, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_207, var_70, ebp_11, ebx_2)
                                            case 0x2000009
                                                int32_t* eax_208 = var_70
                                                int32_t* ecx_214 = var_6c
                                                int32_t* var_8c_79 = var_5c
                                                sub_446b20(eax_208, var_68, ecx_214, arg2, edi_10, 
                                                    esi_1, ecx_214, eax_208, ebp_11, ebx_2)
                                            case 0x200000a
                                                sub_446da0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, var_5c, &var_30, 
                                                    &var_20, arg1 + 0x18)
                                            case 0x200000b
                                                int32_t* ecx_217 = var_70
                                                int32_t* var_8c_81 = &var_20
                                                sub_446f80(arg2, var_68, var_5c, ecx_217, arg2, 
                                                    edi_10, esi_1, var_6c, ecx_217, ebp_11, ebx_2, 
                                                    &var_30)
                                            case 0x200000c
                                                int32_t* var_8c_82 = var_5c
                                                int32_t* eax_215 = var_6c
                                                sub_447350(eax_215, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_215, var_70, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64)
                                            case 0x200000d
                                                int32_t* var_8c_83 = var_5c
                                                int32_t* eax_217 = var_70
                                                int32_t* ecx_222 = var_6c
                                                sub_4474b0(eax_217, var_68, ecx_222, arg2, edi_10, 
                                                    esi_1, ecx_222, eax_217, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64)
                                            case 0x200000e
                                                sub_447790(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                    var_64, var_5c, &var_30, &var_20, arg1 + 0x18)
                                            case 0x200000f
                                                int32_t* var_8c_85 = &var_20
                                                int32_t* eax_224 = var_6c
                                                sub_4479c0(eax_224, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_224, var_70, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64, var_5c, &var_30)
                                            case 0x2000010
                                                int32_t* eax_225 = var_6c
                                                int32_t* var_8c_86 = ebx_2
                                                sub_447df0(eax_225, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_225, var_70, ebp_11)
                                            case 0x2000011
                                                int32_t* eax_226 = var_6c
                                                int32_t* var_8c_87 = ebx_2
                                                sub_447f00(eax_226, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_226, var_70, ebp_11)
                                            case 0x2000012
                                                sub_4481a0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, &var_30, &var_20, 
                                                    arg1 + 0x18)
                                            case 0x2000013
                                                int32_t* var_8c_89 = &var_20
                                                int32_t* eax_228 = var_6c
                                                sub_4483b0(eax_228, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_228, var_70, ebp_11, ebx_2, &var_30)
                                            case 0x2000014
                                                int32_t* var_8c_90 = var_64
                                                int32_t* eax_230 = var_6c
                                                sub_448780(eax_230, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_230, var_70, ebp_11, ebx_2, 
                                                    var_58_1, var_60)
                                            case 0x2000015
                                                int32_t* var_8c_91 = var_64
                                                int32_t* eax_232 = var_6c
                                                sub_4488e0(eax_232, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_232, var_70, ebp_11, ebx_2, 
                                                    var_58_1, var_60)
                                            case 0x2000016
                                                sub_448bd0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                    var_64, &var_30, &var_20, arg1 + 0x18)
                                            case 0x2000017
                                                int32_t* var_8c_93 = &var_20
                                                int32_t* eax_236 = var_6c
                                                sub_448e40(eax_236, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_236, var_70, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64, &var_30)
                                            case 0x2000018
                                                int32_t* eax_237 = var_70
                                                int32_t* ecx_241 = var_6c
                                                int32_t* var_8c_94 = var_5c
                                                sub_449270(eax_237, var_68, ecx_241, arg2, edi_10, 
                                                    esi_1, ecx_241, eax_237, ebp_11, ebx_2)
                                            case 0x2000019
                                                int32_t* ecx_242 = var_70
                                                int32_t* var_8c_95 = var_5c
                                                sub_449380(arg2, var_68, ecx_242, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_242, ebp_11, ebx_2)
                                            case 0x200001a
                                                sub_449630(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, var_5c, &var_30, 
                                                    &var_20, arg1 + 0x18)
                                            case 0x200001b
                                                int32_t* var_8c_97 = &var_20
                                                int32_t* eax_241 = var_70
                                                int32_t* ecx_247 = var_6c
                                                sub_449850(eax_241, var_68, ecx_247, arg2, edi_10, 
                                                    esi_1, ecx_247, eax_241, ebp_11, ebx_2, var_5c, 
                                                    &var_30)
                                            case 0x200001c
                                                int32_t* var_8c_98 = var_5c
                                                int32_t* ecx_249 = var_70
                                                sub_449c40(arg2, var_68, ecx_249, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_249, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64)
                                            case 0x200001d
                                                int32_t* var_8c_99 = var_5c
                                                int32_t* eax_246 = var_6c
                                                sub_449da0(eax_246, var_68, arg2, arg2, edi_10, 
                                                    esi_1, eax_246, var_70, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64)
                                            case 0x200001e
                                                sub_44a0b0(arg2, edi_10, var_68, esi_1, var_6c, 
                                                    var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                                    var_64, var_5c, &var_30, &var_20, arg1 + 0x18)
                                            case 0x200001f
                                                int32_t* var_8c_101 = &var_20
                                                int32_t* ecx_256 = var_70
                                                sub_44a330(arg2, var_68, ecx_256, arg2, edi_10, 
                                                    esi_1, var_6c, ecx_256, ebp_11, ebx_2, 
                                                    var_58_1, var_60, var_64, var_5c, &var_30)
                                else if (ecx_42 == 0x2000000)
                                    int32_t* ecx_193 = var_70
                                    int32_t* var_8c_70 = ebx_2
                                    sub_445870(arg2, var_68, ecx_193, arg2, edi_10, esi_1, var_6c, 
                                        ecx_193, ebp_11)
                                else if (ecx_42 - 0x1000001 u<= 0x1e)
                                    switch (ecx_42)
                                        case 0x1000001
                                            int32_t* var_8c_39 = ebx_2
                                            int32_t* var_90_38 = ebp_11
                                            int32_t* ecx_110 = var_68
                                            sub_440dc0(arg1 + 0x18, arg2, ecx_110, arg2, edi_10, 
                                                ecx_110, esi_1, var_6c, var_70)
                                        case 0x1000002
                                            sub_440f50(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, &var_30, &var_20, arg1 + 0x18)
                                        case 0x1000003
                                            sub_441100(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, &var_30, &var_20, arg1 + 0x18)
                                        case 0x1000004
                                            sub_4413d0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, 
                                                arg1 + 0x18)
                                        case 0x1000005
                                            sub_441510(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, 
                                                arg1 + 0x18)
                                        case 0x1000006
                                            sub_4417c0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, &var_30, 
                                                &var_20, arg1 + 0x18)
                                        case 0x1000007
                                            sub_4419d0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, &var_30, 
                                                &var_20, arg1 + 0x18)
                                        case 0x1000008
                                            int32_t* var_8c_46 = var_5c
                                            int32_t* var_90_45 = ebx_2
                                            int32_t* ecx_130 = var_68
                                            sub_441dc0(arg1 + 0x18, arg2, ecx_130, arg2, edi_10, 
                                                ecx_130, esi_1, var_6c, var_70, ebp_11)
                                        case 0x1000009
                                            int32_t* var_8c_47 = var_5c
                                            int32_t* var_90_46 = ebx_2
                                            int32_t* edx_134 = var_68
                                            sub_441ec0(arg1 + 0x18, edx_134, arg2, arg2, edi_10, 
                                                edx_134, esi_1, var_6c, var_70, ebp_11)
                                        case 0x100000a
                                            sub_442110(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_5c, &var_30, &var_20, 
                                                arg1 + 0x18)
                                        case 0x100000b
                                            sub_4422f0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_5c, &var_30, &var_20, 
                                                arg1 + 0x18)
                                        case 0x100000c
                                            sub_4426a0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                arg1 + 0x18)
                                        case 0x100000d
                                            sub_4427f0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                arg1 + 0x18)
                                        case 0x100000e
                                            sub_442ac0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                &var_30, &var_20, arg1 + 0x18)
                                        case 0x100000f
                                            sub_442cd0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                &var_30, &var_20, arg1 + 0x18)
                                        case 0x1000010
                                            int32_t* var_8c_54 = ebx_2
                                            int32_t* var_90_53 = ebp_11
                                            int32_t* ecx_151 = var_68
                                            sub_4430e0(arg1 + 0x18, arg2, ecx_151, arg2, edi_10, 
                                                ecx_151, esi_1, var_6c, var_70)
                                        case 0x1000011
                                            int32_t* var_8c_55 = ebx_2
                                            int32_t* var_90_54 = ebp_11
                                            int32_t* ecx_153 = var_68
                                            sub_4431e0(arg1 + 0x18, arg2, ecx_153, arg2, edi_10, 
                                                ecx_153, esi_1, var_6c, var_70)
                                        case 0x1000012
                                            sub_443440(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, &var_30, &var_20, arg1 + 0x18)
                                        case 0x1000013
                                            sub_443640(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, &var_30, &var_20, arg1 + 0x18)
                                        case 0x1000014
                                            sub_4439d0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, 
                                                arg1 + 0x18)
                                        case 0x1000015
                                            sub_443b20(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, 
                                                arg1 + 0x18)
                                        case 0x1000016
                                            sub_443e00(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, &var_30, 
                                                &var_20, arg1 + 0x18)
                                        case 0x1000017
                                            sub_444050(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, &var_30, 
                                                &var_20, arg1 + 0x18)
                                        case 0x1000018
                                            int32_t* var_8c_62 = var_5c
                                            int32_t* var_90_61 = ebx_2
                                            int32_t* ecx_173 = var_68
                                            sub_444460(arg1 + 0x18, arg2, ecx_173, arg2, edi_10, 
                                                ecx_173, esi_1, var_6c, var_70, ebp_11)
                                        case 0x1000019
                                            int32_t* var_8c_63 = var_5c
                                            int32_t* var_90_62 = ebx_2
                                            int32_t* edx_175 = var_68
                                            sub_444560(arg1 + 0x18, edx_175, arg2, arg2, edi_10, 
                                                edx_175, esi_1, var_6c, var_70, ebp_11)
                                        case 0x100001a
                                            sub_4447d0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_5c, &var_30, &var_20, 
                                                arg1 + 0x18)
                                        case 0x100001b
                                            sub_4449d0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_5c, &var_30, &var_20, 
                                                arg1 + 0x18)
                                        case 0x100001c
                                            sub_444d90(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                arg1 + 0x18)
                                        case 0x100001d
                                            sub_444ee0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                arg1 + 0x18)
                                        case 0x100001e
                                            sub_4451d0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                &var_30, &var_20, arg1 + 0x18)
                                        case 0x100001f
                                            sub_445430(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                                ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                                &var_30, &var_20, arg1 + 0x18)
                            else if (ecx_42 == 0x1000000)
                                int32_t* var_8c_38 = ebx_2
                                int32_t* var_90_37 = ebp_11
                                int32_t* ecx_107 = var_68
                                sub_440ce0(arg1 + 0x18, arg2, ecx_107, arg2, edi_10, ecx_107, 
                                    esi_1, var_6c, var_70)
                            else
                                switch (ecx_42)
                                    case 0
                                        int32_t* ecx_43 = var_70
                                        int32_t* var_8c_6 = ebx_2
                                        sub_43c390(arg2, var_68, ecx_43, arg2, edi_10, esi_1, 
                                            var_6c, ecx_43, ebp_11)
                                    case 1
                                        int32_t* ecx_44 = var_70
                                        int32_t* var_8c_7 = ebx_2
                                        sub_43c420(arg2, var_68, ecx_44, arg2, edi_10, esi_1, 
                                            var_6c, ecx_44, ebp_11)
                                    case 2
                                        sub_43c540(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, &var_30, &var_20, arg1 + 0x18)
                                    case 3
                                        int32_t* ecx_49 = var_70
                                        int32_t* var_8c_9 = &var_20
                                        sub_43c6f0(arg2, var_68, ecx_49, arg2, edi_10, esi_1, 
                                            var_6c, ecx_49, ebp_11, ebx_2, &var_30)
                                    case 4
                                        int32_t* var_8c_10 = var_64
                                        int32_t* ecx_51 = var_70
                                        sub_43c930(arg2, var_68, ecx_51, arg2, edi_10, esi_1, 
                                            var_6c, ecx_51, ebp_11, ebx_2, var_58_1, var_60)
                                    case 5
                                        int32_t* var_8c_11 = var_64
                                        int32_t* ecx_53 = var_70
                                        sub_43ca70(arg2, var_68, ecx_53, arg2, edi_10, esi_1, 
                                            var_6c, ecx_53, ebp_11, ebx_2, var_58_1, var_60)
                                    case 6
                                        sub_43cd00(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, var_58_1, var_60, var_64, &var_30, 
                                            &var_20, arg1 + 0x18)
                                    case 7
                                        int32_t* var_8c_13 = &var_20
                                        int32_t* ecx_60 = var_70
                                        sub_43cf10(arg2, var_68, ecx_60, arg2, edi_10, esi_1, 
                                            var_6c, ecx_60, ebp_11, ebx_2, var_58_1, var_60, 
                                            var_64, &var_30)
                                    case 8
                                        int32_t* eax_61 = var_6c
                                        int32_t* var_8c_14 = var_5c
                                        sub_43d2e0(eax_61, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_61, var_70, ebp_11, ebx_2)
                                    case 9
                                        int32_t* eax_62 = var_70
                                        int32_t* ecx_63 = var_6c
                                        int32_t* var_8c_15 = var_5c
                                        sub_43d3d0(eax_62, var_68, ecx_63, arg2, edi_10, esi_1, 
                                            ecx_63, eax_62, ebp_11, ebx_2)
                                    case 0xa
                                        sub_43d620(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, var_5c, &var_30, &var_20, arg1 + 0x18)
                                    case 0xb
                                        int32_t* ecx_66 = var_70
                                        int32_t* var_8c_17 = &var_20
                                        sub_43d7f0(arg2, var_68, var_5c, ecx_66, arg2, edi_10, 
                                            esi_1, var_6c, ecx_66, ebp_11, ebx_2, &var_30)
                                    case 0xc
                                        int32_t* var_8c_18 = var_5c
                                        int32_t* eax_69 = var_6c
                                        sub_43db80(eax_69, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_69, var_70, ebp_11, ebx_2, var_58_1, var_60, var_64)
                                    case 0xd
                                        int32_t* var_8c_19 = var_5c
                                        int32_t* eax_71 = var_70
                                        int32_t* ecx_71 = var_6c
                                        sub_43dcc0(eax_71, var_68, ecx_71, arg2, edi_10, esi_1, 
                                            ecx_71, eax_71, ebp_11, ebx_2, var_58_1, var_60, var_64)
                                    case 0xe
                                        sub_43df70(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                            &var_30, &var_20, arg1 + 0x18)
                                    case 0xf
                                        int32_t* var_8c_21 = &var_20
                                        int32_t* eax_78 = var_6c
                                        sub_43e190(eax_78, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_78, var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                            var_64, var_5c, &var_30)
                                    case 0x10
                                        int32_t* eax_79 = var_6c
                                        int32_t* var_8c_22 = ebx_2
                                        sub_43e590(eax_79, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_79, var_70, ebp_11)
                                    case 0x11
                                        int32_t* eax_80 = var_6c
                                        int32_t* var_8c_23 = ebx_2
                                        sub_43e680(eax_80, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_80, var_70, ebp_11)
                                    case 0x12
                                        sub_43e8f0(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, &var_30, &var_20, arg1 + 0x18)
                                    case 0x13
                                        int32_t* var_8c_25 = &var_20
                                        int32_t* eax_82 = var_6c
                                        sub_43eaf0(eax_82, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_82, var_70, ebp_11, ebx_2, &var_30)
                                    case 0x14
                                        int32_t* var_8c_26 = var_64
                                        int32_t* eax_84 = var_6c
                                        sub_43ee80(eax_84, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_84, var_70, ebp_11, ebx_2, var_58_1, var_60)
                                    case 0x15
                                        int32_t* var_8c_27 = var_64
                                        int32_t* eax_86 = var_6c
                                        sub_43efd0(eax_86, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_86, var_70, ebp_11, ebx_2, var_58_1, var_60)
                                    case 0x16
                                        sub_43f290(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, var_58_1, var_60, var_64, &var_30, 
                                            &var_20, arg1 + 0x18)
                                    case 0x17
                                        int32_t* var_8c_29 = &var_20
                                        int32_t* eax_90 = var_6c
                                        sub_43f4f0(eax_90, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_90, var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                            var_64, &var_30)
                                    case 0x18
                                        int32_t* eax_91 = var_70
                                        int32_t* ecx_90 = var_6c
                                        int32_t* var_8c_30 = var_5c
                                        sub_43f8f0(eax_91, var_68, ecx_90, arg2, edi_10, esi_1, 
                                            ecx_90, eax_91, ebp_11, ebx_2)
                                    case 0x19
                                        int32_t* ecx_91 = var_70
                                        int32_t* var_8c_31 = var_5c
                                        sub_43f9f0(arg2, var_68, ecx_91, arg2, edi_10, esi_1, 
                                            var_6c, ecx_91, ebp_11, ebx_2)
                                    case 0x1a
                                        sub_43fc70(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, var_5c, &var_30, &var_20, arg1 + 0x18)
                                    case 0x1b
                                        int32_t* var_8c_33 = &var_20
                                        int32_t* eax_95 = var_70
                                        int32_t* ecx_96 = var_6c
                                        sub_43fe80(eax_95, var_68, ecx_96, arg2, edi_10, esi_1, 
                                            ecx_96, eax_95, ebp_11, ebx_2, var_5c, &var_30)
                                    case 0x1c
                                        int32_t* var_8c_34 = var_5c
                                        int32_t* ecx_98 = var_70
                                        sub_440230(arg2, var_68, ecx_98, arg2, edi_10, esi_1, 
                                            var_6c, ecx_98, ebp_11, ebx_2, var_58_1, var_60, var_64)
                                    case 0x1d
                                        int32_t* var_8c_35 = var_5c
                                        int32_t* eax_100 = var_6c
                                        sub_440380(eax_100, var_68, arg2, arg2, edi_10, esi_1, 
                                            eax_100, var_70, ebp_11, ebx_2, var_58_1, var_60, 
                                            var_64)
                                    case 0x1e
                                        sub_440650(arg2, edi_10, var_68, esi_1, var_6c, var_70, 
                                            ebp_11, ebx_2, var_58_1, var_60, var_64, var_5c, 
                                            &var_30, &var_20, arg1 + 0x18)
                                    case 0x1f
                                        int32_t* var_8c_37 = &var_20
                                        int32_t* ecx_105 = var_70
                                        sub_4408c0(arg2, var_68, ecx_105, arg2, edi_10, esi_1, 
                                            var_6c, ecx_105, ebp_11, ebx_2, var_58_1, var_60, 
                                            var_64, var_5c, &var_30)
                            
                            int32_t* eax_335
                            
                            if (eax_33 == 0)
                                eax_335 = arg8
                            
                            if (eax_33 != 0 || cond:4_1 != 0)
                                eax_335 = arg9
                            
                            ebp = arg3
                            *eax_335 += ebx_2 * ebp_11
                    else
                        int32_t* ecx_13 = *(edi_8 + 0xcc)
                        var_58_1 = ecx_13
                        
                        if (ecx_13 != 0)
                            int32_t eax_15 = *(edi_8 + 0xc)
                            int32_t var_4c = *(edi_8 + 8)
                            void* edx_12 = *ecx_13
                            int32_t var_48 = eax_15
                            int32_t eax_17 = (*(edx_12 + 0x10))()
                            void* edx_13 = **(edi_8 + 0xcc)
                            int32_t var_40 = eax_17
                            var_3c = (*(edx_13 + 0x14))()
                            
                            if (sub_408880(ebp, &var_4c, &var_48, &var_60, &var_64, &var_40, 
                                    &var_3c) != 0)
                                int32_t edx_14 = var_40
                                int32_t var_c_1 = var_48
                                int32_t var_10 = var_4c
                                int32_t var_8_1 = edx_14
                                int32_t var_4_1 = var_3c
                                
                                if (sub_408880(&var_10, &var_5c, &var_68, &var_6c, &var_70, 
                                        &var_50, &var_54) != 0)
                                    edi_10 = var_5c
                                    void* ecx_19 = var_68 - var_48
                                    var_60 += edi_10 - var_4c
                                    var_64 += ecx_19
                                    goto label_437994
                else
                    int32_t edi_5 = *(ebx_1 + 0xbc)
                    
                    if (edi_5 s< eax_9 + ecx_8 && edi_5 + *(ebx_1 + 0xc4) s> ecx_8)
                        int32_t eax_11 = *(ebx_1 + 0xc0)
                        
                        if (eax_11 s< var_54 + edx_9 && eax_11 + *(ebx_1 + 0xc8) s> edx_9)
                            goto label_437849
        else
            sub_439bf0(esi, arg2, ebp, ebx_1, arg4, arg5)
            int16_t top = top - 1
            unimplemented  {call 0x439bf0}
        
        result = &result_1[1]
        result_1 = result
        
        if (result == arg7[1])
            break
        
        esi = arg1

return result
