; ModuleID = 'blackscholes-llfi_index.ll'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%struct.FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct.FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct.OptionData = type { float, float, float, float, float, float, i8, float, float }
%struct._IO_marker = type { %struct._IO_marker*, %struct.FILE*, i32 }

@numError = unnamed_addr global i32 0
@.str = private unnamed_addr constant [8 x i8] c"%s: %f\0A\00", align 1
@numOptions = common unnamed_addr global i32 0
@nThreads = common unnamed_addr global i32 0
@otype = common unnamed_addr global i32* null
@otime = common unnamed_addr global float* null
@volatility = common unnamed_addr global float* null
@rate = common unnamed_addr global float* null
@strike = common unnamed_addr global float* null
@sptprice = common unnamed_addr global float* null
@prices = common unnamed_addr global float* null
@.str1 = private unnamed_addr constant [23 x i8] c"PARSEC Benchmark Suite\00", align 1
@.str2 = private unnamed_addr constant [48 x i8] c"Usage:\0A\09%s <nthreads> <inputFile> <outputFile>\0A\00", align 8
@.str3 = private unnamed_addr constant [2 x i8] c"r\00", align 1
@.str4 = private unnamed_addr constant [34 x i8] c"ERROR: Unable to open file `%s'.\0A\00", align 8
@.str5 = private unnamed_addr constant [3 x i8] c"%i\00", align 1
@.str6 = private unnamed_addr constant [39 x i8] c"ERROR: Unable to read from file `%s'.\0A\00", align 8
@.str7 = private unnamed_addr constant [81 x i8] c"WARNING: Not enough work, reducing number of threads to match number of options.\00", align 8
@.str8 = private unnamed_addr constant [45 x i8] c"Error: <nthreads> must be 1 (serial version)\00", align 8
@data = common unnamed_addr global %struct.OptionData* null
@.str9 = private unnamed_addr constant [27 x i8] c"%f %f %f %f %f %f %c %f %f\00", align 1
@.str10 = private unnamed_addr constant [35 x i8] c"ERROR: Unable to close file `%s'.\0A\00", align 8
@.str11 = private unnamed_addr constant [20 x i8] c"Num of Options: %d\0A\00", align 1
@.str12 = private unnamed_addr constant [17 x i8] c"Num of Runs: %d\0A\00", align 1
@.str13 = private unnamed_addr constant [18 x i8] c"Size of data: %d\0A\00", align 1
@.str14 = private unnamed_addr constant [2 x i8] c"w\00", align 1
@.str15 = private unnamed_addr constant [4 x i8] c"%i\0A\00", align 1
@.str16 = private unnamed_addr constant [38 x i8] c"ERROR: Unable to write to file `%s'.\0A\00", align 8
@.str17 = private unnamed_addr constant [7 x i8] c"%.18f\0A\00", align 1

define float @CNDF(float %InputX) nounwind readonly {
entry:
  %0 = fcmp olt float %InputX, 0.000000e+00, !llfi_index !0
  br i1 %0, label %bb, label %bb2, !llfi_index !1

bb:                                               ; preds = %entry
  %1 = fsub float -0.000000e+00, %InputX, !llfi_index !2
  br label %bb2, !llfi_index !3

bb2:                                              ; preds = %bb, %entry
  %sign.0 = phi i1 [ true, %bb ], [ false, %entry ], !llfi_index !4
  %InputX_addr.0 = phi float [ %1, %bb ], [ %InputX, %entry ], !llfi_index !5
  %2 = fmul float %InputX_addr.0, -5.000000e-01, !llfi_index !6
  %3 = fmul float %2, %InputX_addr.0, !llfi_index !7
  %4 = fpext float %3 to double, !llfi_index !8
  %5 = tail call double @llvm.exp.f64(double %4), !llfi_index !9
  %6 = fptrunc double %5 to float, !llfi_index !10
  %7 = fpext float %6 to double, !llfi_index !11
  %8 = fmul double %7, 0x3FD9884533D43651, !llfi_index !12
  %9 = fptrunc double %8 to float, !llfi_index !13
  %10 = fpext float %InputX_addr.0 to double, !llfi_index !14
  %11 = fmul double %10, 2.316419e-01, !llfi_index !15
  %12 = fptrunc double %11 to float, !llfi_index !16
  %13 = fadd float %12, 1.000000e+00, !llfi_index !17
  %14 = fdiv float 1.000000e+00, %13, !llfi_index !18
  %15 = fmul float %14, %14, !llfi_index !19
  %16 = fmul float %15, %14, !llfi_index !20
  %17 = fmul float %16, %14, !llfi_index !21
  %18 = fmul float %17, %14, !llfi_index !22
  %19 = fpext float %14 to double, !llfi_index !23
  %20 = fmul double %19, 0x3FD470BF3A92F8EC, !llfi_index !24
  %21 = fptrunc double %20 to float, !llfi_index !25
  %22 = fpext float %15 to double, !llfi_index !26
  %23 = fmul double %22, 0xBFD6D1F0E5A8325B, !llfi_index !27
  %24 = fptrunc double %23 to float, !llfi_index !28
  %25 = fpext float %16 to double, !llfi_index !29
  %26 = fmul double %25, 0x3FFC80EF025F5E68, !llfi_index !30
  %27 = fptrunc double %26 to float, !llfi_index !31
  %28 = fadd float %24, %27, !llfi_index !32
  %29 = fpext float %17 to double, !llfi_index !33
  %30 = fmul double %29, 0xBFFD23DD4EF278D0, !llfi_index !34
  %31 = fptrunc double %30 to float, !llfi_index !35
  %32 = fadd float %28, %31, !llfi_index !36
  %33 = fpext float %18 to double, !llfi_index !37
  %34 = fmul double %33, 0x3FF548CDD6F42943, !llfi_index !38
  %35 = fptrunc double %34 to float, !llfi_index !39
  %36 = fadd float %32, %35, !llfi_index !40
  %37 = fadd float %36, %21, !llfi_index !41
  %38 = fmul float %37, %9, !llfi_index !42
  %39 = fsub float 1.000000e+00, %38, !llfi_index !43
  br i1 %sign.0, label %bb3, label %bb4, !llfi_index !44

bb3:                                              ; preds = %bb2
  %40 = fsub float 1.000000e+00, %39, !llfi_index !45
  br label %bb4, !llfi_index !46

bb4:                                              ; preds = %bb3, %bb2
  %OutputX.0 = phi float [ %40, %bb3 ], [ %39, %bb2 ], !llfi_index !47
  ret float %OutputX.0, !llfi_index !48
}

declare double @llvm.exp.f64(double) nounwind readonly

define void @print_xmm(float %in, i8* %s) nounwind {
entry:
  %0 = fpext float %in to double, !llfi_index !49
  %1 = tail call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([8 x i8]* @.str, i64 0, i64 0), i8* %s, double %0) nounwind, !llfi_index !50
  ret void, !llfi_index !51
}

declare i32 @printf(i8* noalias nocapture, ...) nounwind

define float @BlkSchlsEqEuroNoDiv(float %sptprice, float %strike, float %rate, float %volatility, float %time, i32 %otype, float %timet) nounwind readonly {
entry:
  %0 = tail call float @sqrtf(float %time) nounwind readonly, !llfi_index !52
  %1 = fdiv float %sptprice, %strike, !llfi_index !53
  %2 = fpext float %1 to double, !llfi_index !54
  %3 = tail call double @llvm.log.f64(double %2), !llfi_index !55
  %4 = fptrunc double %3 to float, !llfi_index !56
  %5 = fmul float %volatility, %volatility, !llfi_index !57
  %6 = fmul float %5, 5.000000e-01, !llfi_index !58
  %7 = fadd float %6, %rate, !llfi_index !59
  %8 = fmul float %7, %time, !llfi_index !60
  %9 = fadd float %8, %4, !llfi_index !61
  %10 = fmul float %0, %volatility, !llfi_index !62
  %11 = fdiv float %9, %10, !llfi_index !63
  %12 = fsub float %11, %10, !llfi_index !64
  %13 = fcmp olt float %11, 0.000000e+00, !llfi_index !65
  br i1 %13, label %bb.i, label %bb2.i, !llfi_index !66

bb.i:                                             ; preds = %entry
  %14 = fsub float -0.000000e+00, %11, !llfi_index !67
  br label %bb2.i, !llfi_index !68

bb2.i:                                            ; preds = %bb.i, %entry
  %sign.0.i = phi i1 [ true, %bb.i ], [ false, %entry ], !llfi_index !69
  %InputX_addr.0.i = phi float [ %14, %bb.i ], [ %11, %entry ], !llfi_index !70
  %15 = fmul float %InputX_addr.0.i, -5.000000e-01, !llfi_index !71
  %16 = fmul float %15, %InputX_addr.0.i, !llfi_index !72
  %17 = fpext float %16 to double, !llfi_index !73
  %18 = tail call double @llvm.exp.f64(double %17) nounwind, !llfi_index !74
  %19 = fptrunc double %18 to float, !llfi_index !75
  %20 = fpext float %19 to double, !llfi_index !76
  %21 = fmul double %20, 0x3FD9884533D43651, !llfi_index !77
  %22 = fptrunc double %21 to float, !llfi_index !78
  %23 = fpext float %InputX_addr.0.i to double, !llfi_index !79
  %24 = fmul double %23, 2.316419e-01, !llfi_index !80
  %25 = fptrunc double %24 to float, !llfi_index !81
  %26 = fadd float %25, 1.000000e+00, !llfi_index !82
  %27 = fdiv float 1.000000e+00, %26, !llfi_index !83
  %28 = fmul float %27, %27, !llfi_index !84
  %29 = fmul float %28, %27, !llfi_index !85
  %30 = fmul float %29, %27, !llfi_index !86
  %31 = fmul float %30, %27, !llfi_index !87
  %32 = fpext float %27 to double, !llfi_index !88
  %33 = fmul double %32, 0x3FD470BF3A92F8EC, !llfi_index !89
  %34 = fptrunc double %33 to float, !llfi_index !90
  %35 = fpext float %28 to double, !llfi_index !91
  %36 = fmul double %35, 0xBFD6D1F0E5A8325B, !llfi_index !92
  %37 = fptrunc double %36 to float, !llfi_index !93
  %38 = fpext float %29 to double, !llfi_index !94
  %39 = fmul double %38, 0x3FFC80EF025F5E68, !llfi_index !95
  %40 = fptrunc double %39 to float, !llfi_index !96
  %41 = fadd float %37, %40, !llfi_index !97
  %42 = fpext float %30 to double, !llfi_index !98
  %43 = fmul double %42, 0xBFFD23DD4EF278D0, !llfi_index !99
  %44 = fptrunc double %43 to float, !llfi_index !100
  %45 = fadd float %41, %44, !llfi_index !101
  %46 = fpext float %31 to double, !llfi_index !102
  %47 = fmul double %46, 0x3FF548CDD6F42943, !llfi_index !103
  %48 = fptrunc double %47 to float, !llfi_index !104
  %49 = fadd float %45, %48, !llfi_index !105
  %50 = fadd float %49, %34, !llfi_index !106
  %51 = fmul float %50, %22, !llfi_index !107
  %52 = fsub float 1.000000e+00, %51, !llfi_index !108
  br i1 %sign.0.i, label %bb3.i, label %CNDF.exit, !llfi_index !109

bb3.i:                                            ; preds = %bb2.i
  %53 = fsub float 1.000000e+00, %52, !llfi_index !110
  br label %CNDF.exit, !llfi_index !111

CNDF.exit:                                        ; preds = %bb3.i, %bb2.i
  %OutputX.0.i = phi float [ %53, %bb3.i ], [ %52, %bb2.i ], !llfi_index !112
  %54 = fcmp olt float %12, 0.000000e+00, !llfi_index !113
  br i1 %54, label %bb.i1, label %bb2.i4, !llfi_index !114

bb.i1:                                            ; preds = %CNDF.exit
  %55 = fsub float -0.000000e+00, %12, !llfi_index !115
  br label %bb2.i4, !llfi_index !116

bb2.i4:                                           ; preds = %bb.i1, %CNDF.exit
  %sign.0.i2 = phi i1 [ true, %bb.i1 ], [ false, %CNDF.exit ], !llfi_index !117
  %InputX_addr.0.i3 = phi float [ %55, %bb.i1 ], [ %12, %CNDF.exit ], !llfi_index !118
  %56 = fmul float %InputX_addr.0.i3, -5.000000e-01, !llfi_index !119
  %57 = fmul float %56, %InputX_addr.0.i3, !llfi_index !120
  %58 = fpext float %57 to double, !llfi_index !121
  %59 = tail call double @llvm.exp.f64(double %58) nounwind, !llfi_index !122
  %60 = fptrunc double %59 to float, !llfi_index !123
  %61 = fpext float %60 to double, !llfi_index !124
  %62 = fmul double %61, 0x3FD9884533D43651, !llfi_index !125
  %63 = fptrunc double %62 to float, !llfi_index !126
  %64 = fpext float %InputX_addr.0.i3 to double, !llfi_index !127
  %65 = fmul double %64, 2.316419e-01, !llfi_index !128
  %66 = fptrunc double %65 to float, !llfi_index !129
  %67 = fadd float %66, 1.000000e+00, !llfi_index !130
  %68 = fdiv float 1.000000e+00, %67, !llfi_index !131
  %69 = fmul float %68, %68, !llfi_index !132
  %70 = fmul float %69, %68, !llfi_index !133
  %71 = fmul float %70, %68, !llfi_index !134
  %72 = fmul float %71, %68, !llfi_index !135
  %73 = fpext float %68 to double, !llfi_index !136
  %74 = fmul double %73, 0x3FD470BF3A92F8EC, !llfi_index !137
  %75 = fptrunc double %74 to float, !llfi_index !138
  %76 = fpext float %69 to double, !llfi_index !139
  %77 = fmul double %76, 0xBFD6D1F0E5A8325B, !llfi_index !140
  %78 = fptrunc double %77 to float, !llfi_index !141
  %79 = fpext float %70 to double, !llfi_index !142
  %80 = fmul double %79, 0x3FFC80EF025F5E68, !llfi_index !143
  %81 = fptrunc double %80 to float, !llfi_index !144
  %82 = fadd float %78, %81, !llfi_index !145
  %83 = fpext float %71 to double, !llfi_index !146
  %84 = fmul double %83, 0xBFFD23DD4EF278D0, !llfi_index !147
  %85 = fptrunc double %84 to float, !llfi_index !148
  %86 = fadd float %82, %85, !llfi_index !149
  %87 = fpext float %72 to double, !llfi_index !150
  %88 = fmul double %87, 0x3FF548CDD6F42943, !llfi_index !151
  %89 = fptrunc double %88 to float, !llfi_index !152
  %90 = fadd float %86, %89, !llfi_index !153
  %91 = fadd float %90, %75, !llfi_index !154
  %92 = fmul float %91, %63, !llfi_index !155
  %93 = fsub float 1.000000e+00, %92, !llfi_index !156
  br i1 %sign.0.i2, label %bb3.i5, label %CNDF.exit7, !llfi_index !157

bb3.i5:                                           ; preds = %bb2.i4
  %94 = fsub float 1.000000e+00, %93, !llfi_index !158
  br label %CNDF.exit7, !llfi_index !159

CNDF.exit7:                                       ; preds = %bb3.i5, %bb2.i4
  %OutputX.0.i6 = phi float [ %94, %bb3.i5 ], [ %93, %bb2.i4 ], !llfi_index !160
  %95 = fpext float %strike to double, !llfi_index !161
  %96 = fsub float -0.000000e+00, %rate, !llfi_index !162
  %97 = fmul float %96, %time, !llfi_index !163
  %98 = fpext float %97 to double, !llfi_index !164
  %99 = tail call double @llvm.exp.f64(double %98), !llfi_index !165
  %100 = fmul double %95, %99, !llfi_index !166
  %101 = fptrunc double %100 to float, !llfi_index !167
  %102 = icmp eq i32 %otype, 0, !llfi_index !168
  br i1 %102, label %bb, label %bb1, !llfi_index !169

bb:                                               ; preds = %CNDF.exit7
  %103 = fmul float %OutputX.0.i, %sptprice, !llfi_index !170
  %104 = fmul float %101, %OutputX.0.i6, !llfi_index !171
  %105 = fsub float %103, %104, !llfi_index !172
  br label %bb2, !llfi_index !173

bb1:                                              ; preds = %CNDF.exit7
  %106 = fsub float 1.000000e+00, %OutputX.0.i, !llfi_index !174
  %107 = fsub float 1.000000e+00, %OutputX.0.i6, !llfi_index !175
  %108 = fmul float %101, %107, !llfi_index !176
  %109 = fmul float %106, %sptprice, !llfi_index !177
  %110 = fsub float %108, %109, !llfi_index !178
  br label %bb2, !llfi_index !179

bb2:                                              ; preds = %bb1, %bb
  %OptionPrice.0 = phi float [ %105, %bb ], [ %110, %bb1 ], !llfi_index !180
  ret float %OptionPrice.0, !llfi_index !181
}

declare double @llvm.log.f64(double) nounwind readonly

define i32 @bs_thread(i8* nocapture %tid_ptr) nounwind {
entry:
  %0 = bitcast i8* %tid_ptr to i32*, !llfi_index !182
  %1 = load i32* %0, align 4, !llfi_index !183
  %convt = bitcast i32* %0 to i64*
  call void @profileLoad(i64* %convt, i64 183)
  %2 = load i32* @numOptions, align 4, !llfi_index !184
  %convt1 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt1, i64 184)
  %3 = load i32* @nThreads, align 4, !llfi_index !185
  %convt2 = bitcast i32* @nThreads to i64*
  call void @profileLoad(i64* %convt2, i64 185)
  %4 = sdiv i32 %2, %3, !llfi_index !186
  %5 = icmp sgt i32 %4, 0, !llfi_index !187
  %tmp = add i32 %1, 1, !llfi_index !188
  %tmp3 = mul i32 %4, %tmp, !llfi_index !189
  %tmp4 = mul i32 %1, %4, !llfi_index !190
  %tmp5 = add i32 %tmp4, 1, !llfi_index !191
  %tmp6 = icmp sgt i32 %tmp3, %tmp5, !llfi_index !192
  %smax = select i1 %tmp6, i32 %tmp3, i32 %tmp5, !llfi_index !193
  %tmp7 = add i32 %smax, -1, !llfi_index !194
  %tmp8 = sub i32 %tmp7, %tmp4, !llfi_index !195
  %tmp9 = zext i32 %tmp8 to i64, !llfi_index !196
  %tmp10 = add i64 %tmp9, 1, !llfi_index !197
  %tmp11 = sext i32 %tmp4 to i64, !llfi_index !198
  br label %bb2.preheader, !llfi_index !199

bb1:                                              ; preds = %bb2.preheader, %bb1
  %indvar = phi i64 [ %indvar.next, %bb1 ], [ 0, %bb2.preheader ], !llfi_index !200
  %tmp12 = add i64 %tmp11, %indvar, !llfi_index !201
  %6 = load i32** @otype, align 8, !llfi_index !202
  %convt3 = bitcast i32** @otype to i64*
  call void @profileLoad(i64* %convt3, i64 202)
  %scevgep18 = getelementptr i32* %6, i64 %tmp12, !llfi_index !203
  %7 = load i32* %scevgep18, align 1, !llfi_index !204
  %convt4 = bitcast i32* %scevgep18 to i64*
  call void @profileLoad(i64* %convt4, i64 204)
  %8 = load float** @otime, align 8, !llfi_index !205
  %convt5 = bitcast float** @otime to i64*
  call void @profileLoad(i64* %convt5, i64 205)
  %scevgep17 = getelementptr float* %8, i64 %tmp12, !llfi_index !206
  %9 = load float* %scevgep17, align 1, !llfi_index !207
  %convt6 = bitcast float* %scevgep17 to i64*
  call void @profileLoad(i64* %convt6, i64 207)
  %10 = load float** @volatility, align 8, !llfi_index !208
  %convt7 = bitcast float** @volatility to i64*
  call void @profileLoad(i64* %convt7, i64 208)
  %scevgep16 = getelementptr float* %10, i64 %tmp12, !llfi_index !209
  %11 = load float* %scevgep16, align 1, !llfi_index !210
  %convt8 = bitcast float* %scevgep16 to i64*
  call void @profileLoad(i64* %convt8, i64 210)
  %12 = load float** @rate, align 8, !llfi_index !211
  %convt9 = bitcast float** @rate to i64*
  call void @profileLoad(i64* %convt9, i64 211)
  %scevgep15 = getelementptr float* %12, i64 %tmp12, !llfi_index !212
  %13 = load float* %scevgep15, align 1, !llfi_index !213
  %convt10 = bitcast float* %scevgep15 to i64*
  call void @profileLoad(i64* %convt10, i64 213)
  %14 = load float** @strike, align 8, !llfi_index !214
  %convt11 = bitcast float** @strike to i64*
  call void @profileLoad(i64* %convt11, i64 214)
  %scevgep14 = getelementptr float* %14, i64 %tmp12, !llfi_index !215
  %15 = load float* %scevgep14, align 1, !llfi_index !216
  %convt12 = bitcast float* %scevgep14 to i64*
  call void @profileLoad(i64* %convt12, i64 216)
  %16 = load float** @sptprice, align 8, !llfi_index !217
  %convt13 = bitcast float** @sptprice to i64*
  call void @profileLoad(i64* %convt13, i64 217)
  %scevgep13 = getelementptr float* %16, i64 %tmp12, !llfi_index !218
  %17 = load float* %scevgep13, align 1, !llfi_index !219
  %convt14 = bitcast float* %scevgep13 to i64*
  call void @profileLoad(i64* %convt14, i64 219)
  %18 = tail call float @BlkSchlsEqEuroNoDiv(float %17, float %15, float %13, float %11, float %9, i32 %7, float undef) nounwind, !llfi_index !220
  %19 = load float** @prices, align 8, !llfi_index !221
  %convt15 = bitcast float** @prices to i64*
  call void @profileLoad(i64* %convt15, i64 221)
  %scevgep = getelementptr float* %19, i64 %tmp12, !llfi_index !222
  store float %18, float* %scevgep, align 1, !llfi_index !223
  %convt16 = bitcast float* %scevgep to i64*
  call void @profileStore(i64* %convt16, i64 223)
  %indvar.next = add i64 %indvar, 1, !llfi_index !224
  %exitcond = icmp eq i64 %indvar.next, %tmp10, !llfi_index !225
  br i1 %exitcond, label %bb3, label %bb1, !llfi_index !226

bb3:                                              ; preds = %bb2.preheader, %bb1
  %20 = add nsw i32 %j.02, 1, !llfi_index !227
  %exitcond19 = icmp eq i32 %20, 100, !llfi_index !228
  br i1 %exitcond19, label %bb5, label %bb2.preheader, !llfi_index !229

bb2.preheader:                                    ; preds = %bb3, %entry
  %j.02 = phi i32 [ 0, %entry ], [ %20, %bb3 ], !llfi_index !230
  br i1 %5, label %bb1, label %bb3, !llfi_index !231

bb5:                                              ; preds = %bb3
  ret i32 0, !llfi_index !232
}

define i32 @main(i32 %argc, i8** nocapture %argv) nounwind {
entry:
  %tid = alloca i32, align 4, !llfi_index !233
  %0 = call i32 @puts(i8* getelementptr inbounds ([23 x i8]* @.str1, i64 0, i64 0)) nounwind, !llfi_index !234
  %1 = call i32 @fflush(%struct.FILE* null) nounwind, !llfi_index !235
  %2 = icmp eq i32 %argc, 4, !llfi_index !236
  br i1 %2, label %bb1, label %bb, !llfi_index !237

bb:                                               ; preds = %entry
  %3 = load i8** %argv, align 1, !llfi_index !238
  %convt = bitcast i8** %argv to i64*
  call void @profileLoad(i64* %convt, i64 238)
  %4 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([48 x i8]* @.str2, i64 0, i64 0), i8* %3) nounwind, !llfi_index !239
  call void @exit(i32 1) noreturn nounwind, !llfi_index !240
  unreachable, !llfi_index !241

bb1:                                              ; preds = %entry
  %5 = getelementptr inbounds i8** %argv, i64 1, !llfi_index !242
  %6 = load i8** %5, align 1, !llfi_index !243
  %convt1 = bitcast i8** %5 to i64*
  call void @profileLoad(i64* %convt1, i64 243)
  %7 = call i32 @atoi(i8* %6) nounwind readonly, !llfi_index !244
  store i32 %7, i32* @nThreads, align 4, !llfi_index !245
  %convt2 = bitcast i32* @nThreads to i64*
  call void @profileStore(i64* %convt2, i64 245)
  %8 = getelementptr inbounds i8** %argv, i64 2, !llfi_index !246
  %9 = load i8** %8, align 1, !llfi_index !247
  %convt3 = bitcast i8** %8 to i64*
  call void @profileLoad(i64* %convt3, i64 247)
  %10 = getelementptr inbounds i8** %argv, i64 3, !llfi_index !248
  %11 = load i8** %10, align 1, !llfi_index !249
  %convt4 = bitcast i8** %10 to i64*
  call void @profileLoad(i64* %convt4, i64 249)
  %12 = call %struct.FILE* @fopen(i8* noalias %9, i8* noalias getelementptr inbounds ([2 x i8]* @.str3, i64 0, i64 0)) nounwind, !llfi_index !250
  %13 = icmp eq %struct.FILE* %12, null, !llfi_index !251
  br i1 %13, label %bb2, label %bb3, !llfi_index !252

bb2:                                              ; preds = %bb1
  %14 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([34 x i8]* @.str4, i64 0, i64 0), i8* %9) nounwind, !llfi_index !253
  call void @exit(i32 1) noreturn nounwind, !llfi_index !254
  unreachable, !llfi_index !255

bb3:                                              ; preds = %bb1
  %15 = call i32 (%struct.FILE*, i8*, ...)* @"\01__isoc99_fscanf"(%struct.FILE* noalias %12, i8* noalias getelementptr inbounds ([3 x i8]* @.str5, i64 0, i64 0), i32* @numOptions) nounwind, !llfi_index !256
  %16 = icmp eq i32 %15, 1, !llfi_index !257
  br i1 %16, label %bb5, label %bb4, !llfi_index !258

bb4:                                              ; preds = %bb3
  %17 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([39 x i8]* @.str6, i64 0, i64 0), i8* %9) nounwind, !llfi_index !259
  %18 = call i32 @fclose(%struct.FILE* %12) nounwind, !llfi_index !260
  call void @exit(i32 1) noreturn nounwind, !llfi_index !261
  unreachable, !llfi_index !262

bb5:                                              ; preds = %bb3
  %19 = load i32* @nThreads, align 4, !llfi_index !263
  %convt5 = bitcast i32* @nThreads to i64*
  call void @profileLoad(i64* %convt5, i64 263)
  %20 = load i32* @numOptions, align 4, !llfi_index !264
  %convt6 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt6, i64 264)
  %21 = icmp sgt i32 %19, %20, !llfi_index !265
  br i1 %21, label %bb6, label %bb7, !llfi_index !266

bb6:                                              ; preds = %bb5
  %22 = call i32 @puts(i8* getelementptr inbounds ([81 x i8]* @.str7, i64 0, i64 0)) nounwind, !llfi_index !267
  %23 = load i32* @numOptions, align 4, !llfi_index !268
  %convt7 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt7, i64 268)
  store i32 %23, i32* @nThreads, align 4, !llfi_index !269
  %convt8 = bitcast i32* @nThreads to i64*
  call void @profileStore(i64* %convt8, i64 269)
  br label %bb7, !llfi_index !270

bb7:                                              ; preds = %bb6, %bb5
  %24 = phi i32 [ %23, %bb6 ], [ %20, %bb5 ], !llfi_index !271
  %25 = phi i32 [ %23, %bb6 ], [ %19, %bb5 ], !llfi_index !272
  %26 = icmp eq i32 %25, 1, !llfi_index !273
  br i1 %26, label %bb9, label %bb8, !llfi_index !274

bb8:                                              ; preds = %bb7
  %27 = call i32 @puts(i8* getelementptr inbounds ([45 x i8]* @.str8, i64 0, i64 0)) nounwind, !llfi_index !275
  call void @exit(i32 1) noreturn nounwind, !llfi_index !276
  unreachable, !llfi_index !277

bb9:                                              ; preds = %bb7
  %28 = sext i32 %24 to i64, !llfi_index !278
  %29 = mul i64 %28, 36, !llfi_index !279
  %30 = call noalias i8* @malloc(i64 %29) nounwind, !llfi_index !280
  %31 = bitcast i8* %30 to %struct.OptionData*, !llfi_index !281
  store %struct.OptionData* %31, %struct.OptionData** @data, align 8, !llfi_index !282
  %convt9 = bitcast %struct.OptionData** @data to i64*
  call void @profileStore(i64* %convt9, i64 282)
  %32 = shl nsw i64 %28, 2, !llfi_index !283
  %33 = call noalias i8* @malloc(i64 %32) nounwind, !llfi_index !284
  %34 = bitcast i8* %33 to float*, !llfi_index !285
  store float* %34, float** @prices, align 8, !llfi_index !286
  %convt10 = bitcast float** @prices to i64*
  call void @profileStore(i64* %convt10, i64 286)
  br label %bb13, !llfi_index !287

bb10:                                             ; preds = %bb13
  %35 = load %struct.OptionData** @data, align 8, !llfi_index !288
  %convt11 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt11, i64 288)
  %scevgep2324 = getelementptr inbounds %struct.OptionData* %35, i64 %indvar21, i32 0, !llfi_index !289
  %scevgep25 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 1, !llfi_index !290
  %scevgep26 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 2, !llfi_index !291
  %scevgep27 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 3, !llfi_index !292
  %scevgep28 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 4, !llfi_index !293
  %scevgep29 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 5, !llfi_index !294
  %scevgep30 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 6, !llfi_index !295
  %scevgep31 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 7, !llfi_index !296
  %scevgep32 = getelementptr %struct.OptionData* %35, i64 %indvar21, i32 8, !llfi_index !297
  %36 = call i32 (%struct.FILE*, i8*, ...)* @"\01__isoc99_fscanf"(%struct.FILE* noalias %12, i8* noalias getelementptr inbounds ([27 x i8]* @.str9, i64 0, i64 0), float* %scevgep2324, float* %scevgep25, float* %scevgep26, float* %scevgep27, float* %scevgep28, float* %scevgep29, i8* %scevgep30, float* %scevgep31, float* %scevgep32) nounwind, !llfi_index !298
  %37 = icmp eq i32 %36, 9, !llfi_index !299
  br i1 %37, label %bb12, label %bb11, !llfi_index !300

bb11:                                             ; preds = %bb10
  %38 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([39 x i8]* @.str6, i64 0, i64 0), i8* %9) nounwind, !llfi_index !301
  %39 = call i32 @fclose(%struct.FILE* %12) nounwind, !llfi_index !302
  call void @exit(i32 1) noreturn nounwind, !llfi_index !303
  unreachable, !llfi_index !304

bb12:                                             ; preds = %bb10
  %indvar.next22 = add i64 %indvar21, 1, !llfi_index !305
  %.pre = load i32* @numOptions, align 4, !llfi_index !306
  %convt12 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt12, i64 306)
  br label %bb13, !llfi_index !307

bb13:                                             ; preds = %bb12, %bb9
  %40 = phi i32 [ %.pre, %bb12 ], [ %24, %bb9 ], !llfi_index !308
  %indvar21 = phi i64 [ %indvar.next22, %bb12 ], [ 0, %bb9 ], !llfi_index !309
  %loopnum.0 = trunc i64 %indvar21 to i32, !llfi_index !310
  %41 = icmp slt i32 %loopnum.0, %40, !llfi_index !311
  br i1 %41, label %bb10, label %bb14, !llfi_index !312

bb14:                                             ; preds = %bb13
  %42 = call i32 @fclose(%struct.FILE* %12) nounwind, !llfi_index !313
  %43 = icmp eq i32 %42, 0, !llfi_index !314
  br i1 %43, label %bb16, label %bb15, !llfi_index !315

bb15:                                             ; preds = %bb14
  %44 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([35 x i8]* @.str10, i64 0, i64 0), i8* %9) nounwind, !llfi_index !316
  call void @exit(i32 1) noreturn nounwind, !llfi_index !317
  unreachable, !llfi_index !318

bb16:                                             ; preds = %bb14
  %45 = load i32* @numOptions, align 4, !llfi_index !319
  %convt13 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt13, i64 319)
  %46 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([20 x i8]* @.str11, i64 0, i64 0), i32 %45) nounwind, !llfi_index !320
  %47 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([17 x i8]* @.str12, i64 0, i64 0), i32 100) nounwind, !llfi_index !321
  %48 = load i32* @numOptions, align 4, !llfi_index !322
  %convt14 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt14, i64 322)
  %49 = sext i32 %48 to i64, !llfi_index !323
  %50 = mul i64 %49, 20, !llfi_index !324
  %51 = add i64 %50, 256, !llfi_index !325
  %52 = call noalias i8* @malloc(i64 %51) nounwind, !llfi_index !326
  %53 = ptrtoint i8* %52 to i64, !llfi_index !327
  %54 = add i64 %53, 256, !llfi_index !328
  %55 = and i64 %54, -64, !llfi_index !329
  %56 = inttoptr i64 %55 to float*, !llfi_index !330
  store float* %56, float** @sptprice, align 8, !llfi_index !331
  %convt15 = bitcast float** @sptprice to i64*
  call void @profileStore(i64* %convt15, i64 331)
  %57 = getelementptr inbounds float* %56, i64 %49, !llfi_index !332
  store float* %57, float** @strike, align 8, !llfi_index !333
  %convt16 = bitcast float** @strike to i64*
  call void @profileStore(i64* %convt16, i64 333)
  %.sum = shl nsw i64 %49, 1, !llfi_index !334
  %58 = getelementptr inbounds float* %56, i64 %.sum, !llfi_index !335
  store float* %58, float** @rate, align 8, !llfi_index !336
  %convt17 = bitcast float** @rate to i64*
  call void @profileStore(i64* %convt17, i64 336)
  %.sum1 = add i64 %.sum, %49, !llfi_index !337
  %59 = getelementptr inbounds float* %56, i64 %.sum1, !llfi_index !338
  store float* %59, float** @volatility, align 8, !llfi_index !339
  %convt18 = bitcast float** @volatility to i64*
  call void @profileStore(i64* %convt18, i64 339)
  %.sum2 = add i64 %.sum1, %49, !llfi_index !340
  %60 = getelementptr inbounds float* %56, i64 %.sum2, !llfi_index !341
  store float* %60, float** @otime, align 8, !llfi_index !342
  %convt19 = bitcast float** @otime to i64*
  call void @profileStore(i64* %convt19, i64 342)
  %61 = shl nsw i64 %49, 2, !llfi_index !343
  %62 = add i64 %61, 256, !llfi_index !344
  %63 = call noalias i8* @malloc(i64 %62) nounwind, !llfi_index !345
  %64 = ptrtoint i8* %63 to i64, !llfi_index !346
  %65 = add i64 %64, 256, !llfi_index !347
  %66 = and i64 %65, -64, !llfi_index !348
  %67 = inttoptr i64 %66 to i32*, !llfi_index !349
  store i32* %67, i32** @otype, align 8, !llfi_index !350
  %convt20 = bitcast i32** @otype to i64*
  call void @profileStore(i64* %convt20, i64 350)
  %68 = icmp sgt i32 %48, 0, !llfi_index !351
  br i1 %68, label %bb17, label %bb19, !llfi_index !352

bb17:                                             ; preds = %bb17.bb17_crit_edge, %bb16
  %69 = phi i32* [ %.pre34, %bb17.bb17_crit_edge ], [ %67, %bb16 ], !llfi_index !353
  %indvar5 = phi i64 [ %tmp, %bb17.bb17_crit_edge ], [ 0, %bb16 ], !llfi_index !354
  %tmp = add i64 %indvar5, 1, !llfi_index !355
  %tmp20 = trunc i64 %tmp to i32, !llfi_index !356
  %70 = load %struct.OptionData** @data, align 8, !llfi_index !357
  %convt21 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt21, i64 357)
  %scevgep13 = getelementptr %struct.OptionData* %70, i64 %indvar5, i32 6, !llfi_index !358
  %71 = load i8* %scevgep13, align 4, !llfi_index !359
  %convt22 = bitcast i8* %scevgep13 to i64*
  call void @profileLoad(i64* %convt22, i64 359)
  %72 = icmp eq i8 %71, 80, !llfi_index !360
  %73 = zext i1 %72 to i32, !llfi_index !361
  %scevgep19 = getelementptr i32* %69, i64 %indvar5, !llfi_index !362
  store i32 %73, i32* %scevgep19, align 1, !llfi_index !363
  %convt23 = bitcast i32* %scevgep19 to i64*
  call void @profileStore(i64* %convt23, i64 363)
  %74 = load float** @sptprice, align 8, !llfi_index !364
  %convt24 = bitcast float** @sptprice to i64*
  call void @profileLoad(i64* %convt24, i64 364)
  %75 = load %struct.OptionData** @data, align 8, !llfi_index !365
  %convt25 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt25, i64 365)
  %scevgep1112 = getelementptr inbounds %struct.OptionData* %75, i64 %indvar5, i32 0, !llfi_index !366
  %76 = load float* %scevgep1112, align 4, !llfi_index !367
  %convt26 = bitcast float* %scevgep1112 to i64*
  call void @profileLoad(i64* %convt26, i64 367)
  %scevgep18 = getelementptr float* %74, i64 %indvar5, !llfi_index !368
  store float %76, float* %scevgep18, align 1, !llfi_index !369
  %convt27 = bitcast float* %scevgep18 to i64*
  call void @profileStore(i64* %convt27, i64 369)
  %77 = load float** @strike, align 8, !llfi_index !370
  %convt28 = bitcast float** @strike to i64*
  call void @profileLoad(i64* %convt28, i64 370)
  %78 = load %struct.OptionData** @data, align 8, !llfi_index !371
  %convt29 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt29, i64 371)
  %scevgep10 = getelementptr %struct.OptionData* %78, i64 %indvar5, i32 1, !llfi_index !372
  %79 = load float* %scevgep10, align 4, !llfi_index !373
  %convt30 = bitcast float* %scevgep10 to i64*
  call void @profileLoad(i64* %convt30, i64 373)
  %scevgep17 = getelementptr float* %77, i64 %indvar5, !llfi_index !374
  store float %79, float* %scevgep17, align 1, !llfi_index !375
  %convt31 = bitcast float* %scevgep17 to i64*
  call void @profileStore(i64* %convt31, i64 375)
  %80 = load float** @rate, align 8, !llfi_index !376
  %convt32 = bitcast float** @rate to i64*
  call void @profileLoad(i64* %convt32, i64 376)
  %81 = load %struct.OptionData** @data, align 8, !llfi_index !377
  %convt33 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt33, i64 377)
  %scevgep9 = getelementptr %struct.OptionData* %81, i64 %indvar5, i32 2, !llfi_index !378
  %82 = load float* %scevgep9, align 4, !llfi_index !379
  %convt34 = bitcast float* %scevgep9 to i64*
  call void @profileLoad(i64* %convt34, i64 379)
  %scevgep16 = getelementptr float* %80, i64 %indvar5, !llfi_index !380
  store float %82, float* %scevgep16, align 1, !llfi_index !381
  %convt35 = bitcast float* %scevgep16 to i64*
  call void @profileStore(i64* %convt35, i64 381)
  %83 = load float** @volatility, align 8, !llfi_index !382
  %convt36 = bitcast float** @volatility to i64*
  call void @profileLoad(i64* %convt36, i64 382)
  %84 = load %struct.OptionData** @data, align 8, !llfi_index !383
  %convt37 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt37, i64 383)
  %scevgep8 = getelementptr %struct.OptionData* %84, i64 %indvar5, i32 4, !llfi_index !384
  %85 = load float* %scevgep8, align 4, !llfi_index !385
  %convt38 = bitcast float* %scevgep8 to i64*
  call void @profileLoad(i64* %convt38, i64 385)
  %scevgep15 = getelementptr float* %83, i64 %indvar5, !llfi_index !386
  store float %85, float* %scevgep15, align 1, !llfi_index !387
  %convt39 = bitcast float* %scevgep15 to i64*
  call void @profileStore(i64* %convt39, i64 387)
  %86 = load float** @otime, align 8, !llfi_index !388
  %convt40 = bitcast float** @otime to i64*
  call void @profileLoad(i64* %convt40, i64 388)
  %87 = load %struct.OptionData** @data, align 8, !llfi_index !389
  %convt41 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt41, i64 389)
  %scevgep7 = getelementptr %struct.OptionData* %87, i64 %indvar5, i32 5, !llfi_index !390
  %88 = load float* %scevgep7, align 4, !llfi_index !391
  %convt42 = bitcast float* %scevgep7 to i64*
  call void @profileLoad(i64* %convt42, i64 391)
  %scevgep14 = getelementptr float* %86, i64 %indvar5, !llfi_index !392
  store float %88, float* %scevgep14, align 1, !llfi_index !393
  %convt43 = bitcast float* %scevgep14 to i64*
  call void @profileStore(i64* %convt43, i64 393)
  %89 = load i32* @numOptions, align 4, !llfi_index !394
  %convt44 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt44, i64 394)
  %90 = icmp slt i32 %tmp20, %89, !llfi_index !395
  br i1 %90, label %bb17.bb17_crit_edge, label %bb19, !llfi_index !396

bb17.bb17_crit_edge:                              ; preds = %bb17
  %.pre34 = load i32** @otype, align 8, !llfi_index !397
  %convt45 = bitcast i32** @otype to i64*
  call void @profileLoad(i64* %convt45, i64 397)
  br label %bb17, !llfi_index !398

bb19:                                             ; preds = %bb17, %bb16
  %.lcssa = phi i32 [ %48, %bb16 ], [ %89, %bb17 ], !llfi_index !399
  %91 = sext i32 %.lcssa to i64, !llfi_index !400
  %92 = mul i64 %91, 40, !llfi_index !401
  %93 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([18 x i8]* @.str13, i64 0, i64 0), i64 %92) nounwind, !llfi_index !402
  store i32 0, i32* %tid, align 4, !llfi_index !403
  %convt46 = bitcast i32* %tid to i64*
  call void @profileStore(i64* %convt46, i64 403)
  %tid20 = bitcast i32* %tid to i8*, !llfi_index !404
  %94 = call i32 @bs_thread(i8* %tid20) nounwind, !llfi_index !405
  %95 = call %struct.FILE* @fopen(i8* noalias %11, i8* noalias getelementptr inbounds ([2 x i8]* @.str14, i64 0, i64 0)) nounwind, !llfi_index !406
  %96 = icmp eq %struct.FILE* %95, null, !llfi_index !407
  br i1 %96, label %bb21, label %bb22, !llfi_index !408

bb21:                                             ; preds = %bb19
  %97 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([34 x i8]* @.str4, i64 0, i64 0), i8* %11) nounwind, !llfi_index !409
  call void @exit(i32 1) noreturn nounwind, !llfi_index !410
  unreachable, !llfi_index !411

bb22:                                             ; preds = %bb19
  %98 = load i32* @numOptions, align 4, !llfi_index !412
  %convt47 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt47, i64 412)
  %99 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %95, i8* noalias getelementptr inbounds ([4 x i8]* @.str15, i64 0, i64 0), i32 %98) nounwind, !llfi_index !413
  %100 = icmp slt i32 %99, 0, !llfi_index !414
  br i1 %100, label %bb23, label %bb28, !llfi_index !415

bb23:                                             ; preds = %bb22
  %101 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([38 x i8]* @.str16, i64 0, i64 0), i8* %11) nounwind, !llfi_index !416
  %102 = call i32 @fclose(%struct.FILE* %95) nounwind, !llfi_index !417
  call void @exit(i32 1) noreturn nounwind, !llfi_index !418
  unreachable, !llfi_index !419

bb25:                                             ; preds = %bb28
  %103 = load float** @prices, align 8, !llfi_index !420
  %convt48 = bitcast float** @prices to i64*
  call void @profileLoad(i64* %convt48, i64 420)
  %scevgep = getelementptr float* %103, i64 %indvar, !llfi_index !421
  %104 = load float* %scevgep, align 1, !llfi_index !422
  %convt49 = bitcast float* %scevgep to i64*
  call void @profileLoad(i64* %convt49, i64 422)
  %105 = fpext float %104 to double, !llfi_index !423
  %106 = call i32 (%struct.FILE*, i8*, ...)* @fprintf(%struct.FILE* noalias %95, i8* noalias getelementptr inbounds ([7 x i8]* @.str17, i64 0, i64 0), double %105) nounwind, !llfi_index !424
  %107 = icmp slt i32 %106, 0, !llfi_index !425
  br i1 %107, label %bb26, label %bb27, !llfi_index !426

bb26:                                             ; preds = %bb25
  %108 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([38 x i8]* @.str16, i64 0, i64 0), i8* %11) nounwind, !llfi_index !427
  %109 = call i32 @fclose(%struct.FILE* %95) nounwind, !llfi_index !428
  call void @exit(i32 1) noreturn nounwind, !llfi_index !429
  unreachable, !llfi_index !430

bb27:                                             ; preds = %bb25
  %indvar.next = add i64 %indvar, 1, !llfi_index !431
  br label %bb28, !llfi_index !432

bb28:                                             ; preds = %bb27, %bb22
  %indvar = phi i64 [ %indvar.next, %bb27 ], [ 0, %bb22 ], !llfi_index !433
  %i.1 = trunc i64 %indvar to i32, !llfi_index !434
  %110 = load i32* @numOptions, align 4, !llfi_index !435
  %convt50 = bitcast i32* @numOptions to i64*
  call void @profileLoad(i64* %convt50, i64 435)
  %111 = icmp slt i32 %i.1, %110, !llfi_index !436
  br i1 %111, label %bb25, label %bb29, !llfi_index !437

bb29:                                             ; preds = %bb28
  %112 = call i32 @fclose(%struct.FILE* %95) nounwind, !llfi_index !438
  %113 = icmp eq i32 %112, 0, !llfi_index !439
  br i1 %113, label %bb31, label %bb30, !llfi_index !440

bb30:                                             ; preds = %bb29
  %114 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([35 x i8]* @.str10, i64 0, i64 0), i8* %11) nounwind, !llfi_index !441
  call void @exit(i32 1) noreturn nounwind, !llfi_index !442
  unreachable, !llfi_index !443

bb31:                                             ; preds = %bb29
  %115 = load %struct.OptionData** @data, align 8, !llfi_index !444
  %convt51 = bitcast %struct.OptionData** @data to i64*
  call void @profileLoad(i64* %convt51, i64 444)
  %116 = bitcast %struct.OptionData* %115 to i8*, !llfi_index !445
  call void @free(i8* %116) nounwind, !llfi_index !446
  %117 = load float** @prices, align 8, !llfi_index !447
  %convt52 = bitcast float** @prices to i64*
  call void @profileLoad(i64* %convt52, i64 447)
  %118 = bitcast float* %117 to i8*, !llfi_index !448
  call void @free(i8* %118) nounwind, !llfi_index !449
  ret i32 0, !llfi_index !450
}

declare i32 @puts(i8* nocapture) nounwind

declare i32 @fflush(%struct.FILE* nocapture) nounwind

declare void @exit(i32) noreturn nounwind

declare i32 @atoi(i8* nocapture) nounwind readonly

declare noalias %struct.FILE* @fopen(i8* noalias nocapture, i8* noalias nocapture) nounwind

declare i32 @"\01__isoc99_fscanf"(%struct.FILE* noalias, i8* noalias, ...) nounwind

declare i32 @fclose(%struct.FILE* nocapture) nounwind

declare noalias i8* @malloc(i64) nounwind

declare i32 @fprintf(%struct.FILE* noalias nocapture, i8* noalias nocapture, ...) nounwind

declare void @free(i8* nocapture) nounwind

declare float @sqrtf(float) nounwind readonly

declare void @profileLoad(i64*, i64)

declare void @profileStore(i64*, i64)

!0 = metadata !{i64 0}
!1 = metadata !{i64 1}
!2 = metadata !{i64 2}
!3 = metadata !{i64 3}
!4 = metadata !{i64 4}
!5 = metadata !{i64 5}
!6 = metadata !{i64 6}
!7 = metadata !{i64 7}
!8 = metadata !{i64 8}
!9 = metadata !{i64 9}
!10 = metadata !{i64 10}
!11 = metadata !{i64 11}
!12 = metadata !{i64 12}
!13 = metadata !{i64 13}
!14 = metadata !{i64 14}
!15 = metadata !{i64 15}
!16 = metadata !{i64 16}
!17 = metadata !{i64 17}
!18 = metadata !{i64 18}
!19 = metadata !{i64 19}
!20 = metadata !{i64 20}
!21 = metadata !{i64 21}
!22 = metadata !{i64 22}
!23 = metadata !{i64 23}
!24 = metadata !{i64 24}
!25 = metadata !{i64 25}
!26 = metadata !{i64 26}
!27 = metadata !{i64 27}
!28 = metadata !{i64 28}
!29 = metadata !{i64 29}
!30 = metadata !{i64 30}
!31 = metadata !{i64 31}
!32 = metadata !{i64 32}
!33 = metadata !{i64 33}
!34 = metadata !{i64 34}
!35 = metadata !{i64 35}
!36 = metadata !{i64 36}
!37 = metadata !{i64 37}
!38 = metadata !{i64 38}
!39 = metadata !{i64 39}
!40 = metadata !{i64 40}
!41 = metadata !{i64 41}
!42 = metadata !{i64 42}
!43 = metadata !{i64 43}
!44 = metadata !{i64 44}
!45 = metadata !{i64 45}
!46 = metadata !{i64 46}
!47 = metadata !{i64 47}
!48 = metadata !{i64 48}
!49 = metadata !{i64 49}
!50 = metadata !{i64 50}
!51 = metadata !{i64 51}
!52 = metadata !{i64 52}
!53 = metadata !{i64 53}
!54 = metadata !{i64 54}
!55 = metadata !{i64 55}
!56 = metadata !{i64 56}
!57 = metadata !{i64 57}
!58 = metadata !{i64 58}
!59 = metadata !{i64 59}
!60 = metadata !{i64 60}
!61 = metadata !{i64 61}
!62 = metadata !{i64 62}
!63 = metadata !{i64 63}
!64 = metadata !{i64 64}
!65 = metadata !{i64 65}
!66 = metadata !{i64 66}
!67 = metadata !{i64 67}
!68 = metadata !{i64 68}
!69 = metadata !{i64 69}
!70 = metadata !{i64 70}
!71 = metadata !{i64 71}
!72 = metadata !{i64 72}
!73 = metadata !{i64 73}
!74 = metadata !{i64 74}
!75 = metadata !{i64 75}
!76 = metadata !{i64 76}
!77 = metadata !{i64 77}
!78 = metadata !{i64 78}
!79 = metadata !{i64 79}
!80 = metadata !{i64 80}
!81 = metadata !{i64 81}
!82 = metadata !{i64 82}
!83 = metadata !{i64 83}
!84 = metadata !{i64 84}
!85 = metadata !{i64 85}
!86 = metadata !{i64 86}
!87 = metadata !{i64 87}
!88 = metadata !{i64 88}
!89 = metadata !{i64 89}
!90 = metadata !{i64 90}
!91 = metadata !{i64 91}
!92 = metadata !{i64 92}
!93 = metadata !{i64 93}
!94 = metadata !{i64 94}
!95 = metadata !{i64 95}
!96 = metadata !{i64 96}
!97 = metadata !{i64 97}
!98 = metadata !{i64 98}
!99 = metadata !{i64 99}
!100 = metadata !{i64 100}
!101 = metadata !{i64 101}
!102 = metadata !{i64 102}
!103 = metadata !{i64 103}
!104 = metadata !{i64 104}
!105 = metadata !{i64 105}
!106 = metadata !{i64 106}
!107 = metadata !{i64 107}
!108 = metadata !{i64 108}
!109 = metadata !{i64 109}
!110 = metadata !{i64 110}
!111 = metadata !{i64 111}
!112 = metadata !{i64 112}
!113 = metadata !{i64 113}
!114 = metadata !{i64 114}
!115 = metadata !{i64 115}
!116 = metadata !{i64 116}
!117 = metadata !{i64 117}
!118 = metadata !{i64 118}
!119 = metadata !{i64 119}
!120 = metadata !{i64 120}
!121 = metadata !{i64 121}
!122 = metadata !{i64 122}
!123 = metadata !{i64 123}
!124 = metadata !{i64 124}
!125 = metadata !{i64 125}
!126 = metadata !{i64 126}
!127 = metadata !{i64 127}
!128 = metadata !{i64 128}
!129 = metadata !{i64 129}
!130 = metadata !{i64 130}
!131 = metadata !{i64 131}
!132 = metadata !{i64 132}
!133 = metadata !{i64 133}
!134 = metadata !{i64 134}
!135 = metadata !{i64 135}
!136 = metadata !{i64 136}
!137 = metadata !{i64 137}
!138 = metadata !{i64 138}
!139 = metadata !{i64 139}
!140 = metadata !{i64 140}
!141 = metadata !{i64 141}
!142 = metadata !{i64 142}
!143 = metadata !{i64 143}
!144 = metadata !{i64 144}
!145 = metadata !{i64 145}
!146 = metadata !{i64 146}
!147 = metadata !{i64 147}
!148 = metadata !{i64 148}
!149 = metadata !{i64 149}
!150 = metadata !{i64 150}
!151 = metadata !{i64 151}
!152 = metadata !{i64 152}
!153 = metadata !{i64 153}
!154 = metadata !{i64 154}
!155 = metadata !{i64 155}
!156 = metadata !{i64 156}
!157 = metadata !{i64 157}
!158 = metadata !{i64 158}
!159 = metadata !{i64 159}
!160 = metadata !{i64 160}
!161 = metadata !{i64 161}
!162 = metadata !{i64 162}
!163 = metadata !{i64 163}
!164 = metadata !{i64 164}
!165 = metadata !{i64 165}
!166 = metadata !{i64 166}
!167 = metadata !{i64 167}
!168 = metadata !{i64 168}
!169 = metadata !{i64 169}
!170 = metadata !{i64 170}
!171 = metadata !{i64 171}
!172 = metadata !{i64 172}
!173 = metadata !{i64 173}
!174 = metadata !{i64 174}
!175 = metadata !{i64 175}
!176 = metadata !{i64 176}
!177 = metadata !{i64 177}
!178 = metadata !{i64 178}
!179 = metadata !{i64 179}
!180 = metadata !{i64 180}
!181 = metadata !{i64 181}
!182 = metadata !{i64 182}
!183 = metadata !{i64 183}
!184 = metadata !{i64 184}
!185 = metadata !{i64 185}
!186 = metadata !{i64 186}
!187 = metadata !{i64 187}
!188 = metadata !{i64 188}
!189 = metadata !{i64 189}
!190 = metadata !{i64 190}
!191 = metadata !{i64 191}
!192 = metadata !{i64 192}
!193 = metadata !{i64 193}
!194 = metadata !{i64 194}
!195 = metadata !{i64 195}
!196 = metadata !{i64 196}
!197 = metadata !{i64 197}
!198 = metadata !{i64 198}
!199 = metadata !{i64 199}
!200 = metadata !{i64 200}
!201 = metadata !{i64 201}
!202 = metadata !{i64 202}
!203 = metadata !{i64 203}
!204 = metadata !{i64 204}
!205 = metadata !{i64 205}
!206 = metadata !{i64 206}
!207 = metadata !{i64 207}
!208 = metadata !{i64 208}
!209 = metadata !{i64 209}
!210 = metadata !{i64 210}
!211 = metadata !{i64 211}
!212 = metadata !{i64 212}
!213 = metadata !{i64 213}
!214 = metadata !{i64 214}
!215 = metadata !{i64 215}
!216 = metadata !{i64 216}
!217 = metadata !{i64 217}
!218 = metadata !{i64 218}
!219 = metadata !{i64 219}
!220 = metadata !{i64 220}
!221 = metadata !{i64 221}
!222 = metadata !{i64 222}
!223 = metadata !{i64 223}
!224 = metadata !{i64 224}
!225 = metadata !{i64 225}
!226 = metadata !{i64 226}
!227 = metadata !{i64 227}
!228 = metadata !{i64 228}
!229 = metadata !{i64 229}
!230 = metadata !{i64 230}
!231 = metadata !{i64 231}
!232 = metadata !{i64 232}
!233 = metadata !{i64 233}
!234 = metadata !{i64 234}
!235 = metadata !{i64 235}
!236 = metadata !{i64 236}
!237 = metadata !{i64 237}
!238 = metadata !{i64 238}
!239 = metadata !{i64 239}
!240 = metadata !{i64 240}
!241 = metadata !{i64 241}
!242 = metadata !{i64 242}
!243 = metadata !{i64 243}
!244 = metadata !{i64 244}
!245 = metadata !{i64 245}
!246 = metadata !{i64 246}
!247 = metadata !{i64 247}
!248 = metadata !{i64 248}
!249 = metadata !{i64 249}
!250 = metadata !{i64 250}
!251 = metadata !{i64 251}
!252 = metadata !{i64 252}
!253 = metadata !{i64 253}
!254 = metadata !{i64 254}
!255 = metadata !{i64 255}
!256 = metadata !{i64 256}
!257 = metadata !{i64 257}
!258 = metadata !{i64 258}
!259 = metadata !{i64 259}
!260 = metadata !{i64 260}
!261 = metadata !{i64 261}
!262 = metadata !{i64 262}
!263 = metadata !{i64 263}
!264 = metadata !{i64 264}
!265 = metadata !{i64 265}
!266 = metadata !{i64 266}
!267 = metadata !{i64 267}
!268 = metadata !{i64 268}
!269 = metadata !{i64 269}
!270 = metadata !{i64 270}
!271 = metadata !{i64 271}
!272 = metadata !{i64 272}
!273 = metadata !{i64 273}
!274 = metadata !{i64 274}
!275 = metadata !{i64 275}
!276 = metadata !{i64 276}
!277 = metadata !{i64 277}
!278 = metadata !{i64 278}
!279 = metadata !{i64 279}
!280 = metadata !{i64 280}
!281 = metadata !{i64 281}
!282 = metadata !{i64 282}
!283 = metadata !{i64 283}
!284 = metadata !{i64 284}
!285 = metadata !{i64 285}
!286 = metadata !{i64 286}
!287 = metadata !{i64 287}
!288 = metadata !{i64 288}
!289 = metadata !{i64 289}
!290 = metadata !{i64 290}
!291 = metadata !{i64 291}
!292 = metadata !{i64 292}
!293 = metadata !{i64 293}
!294 = metadata !{i64 294}
!295 = metadata !{i64 295}
!296 = metadata !{i64 296}
!297 = metadata !{i64 297}
!298 = metadata !{i64 298}
!299 = metadata !{i64 299}
!300 = metadata !{i64 300}
!301 = metadata !{i64 301}
!302 = metadata !{i64 302}
!303 = metadata !{i64 303}
!304 = metadata !{i64 304}
!305 = metadata !{i64 305}
!306 = metadata !{i64 306}
!307 = metadata !{i64 307}
!308 = metadata !{i64 308}
!309 = metadata !{i64 309}
!310 = metadata !{i64 310}
!311 = metadata !{i64 311}
!312 = metadata !{i64 312}
!313 = metadata !{i64 313}
!314 = metadata !{i64 314}
!315 = metadata !{i64 315}
!316 = metadata !{i64 316}
!317 = metadata !{i64 317}
!318 = metadata !{i64 318}
!319 = metadata !{i64 319}
!320 = metadata !{i64 320}
!321 = metadata !{i64 321}
!322 = metadata !{i64 322}
!323 = metadata !{i64 323}
!324 = metadata !{i64 324}
!325 = metadata !{i64 325}
!326 = metadata !{i64 326}
!327 = metadata !{i64 327}
!328 = metadata !{i64 328}
!329 = metadata !{i64 329}
!330 = metadata !{i64 330}
!331 = metadata !{i64 331}
!332 = metadata !{i64 332}
!333 = metadata !{i64 333}
!334 = metadata !{i64 334}
!335 = metadata !{i64 335}
!336 = metadata !{i64 336}
!337 = metadata !{i64 337}
!338 = metadata !{i64 338}
!339 = metadata !{i64 339}
!340 = metadata !{i64 340}
!341 = metadata !{i64 341}
!342 = metadata !{i64 342}
!343 = metadata !{i64 343}
!344 = metadata !{i64 344}
!345 = metadata !{i64 345}
!346 = metadata !{i64 346}
!347 = metadata !{i64 347}
!348 = metadata !{i64 348}
!349 = metadata !{i64 349}
!350 = metadata !{i64 350}
!351 = metadata !{i64 351}
!352 = metadata !{i64 352}
!353 = metadata !{i64 353}
!354 = metadata !{i64 354}
!355 = metadata !{i64 355}
!356 = metadata !{i64 356}
!357 = metadata !{i64 357}
!358 = metadata !{i64 358}
!359 = metadata !{i64 359}
!360 = metadata !{i64 360}
!361 = metadata !{i64 361}
!362 = metadata !{i64 362}
!363 = metadata !{i64 363}
!364 = metadata !{i64 364}
!365 = metadata !{i64 365}
!366 = metadata !{i64 366}
!367 = metadata !{i64 367}
!368 = metadata !{i64 368}
!369 = metadata !{i64 369}
!370 = metadata !{i64 370}
!371 = metadata !{i64 371}
!372 = metadata !{i64 372}
!373 = metadata !{i64 373}
!374 = metadata !{i64 374}
!375 = metadata !{i64 375}
!376 = metadata !{i64 376}
!377 = metadata !{i64 377}
!378 = metadata !{i64 378}
!379 = metadata !{i64 379}
!380 = metadata !{i64 380}
!381 = metadata !{i64 381}
!382 = metadata !{i64 382}
!383 = metadata !{i64 383}
!384 = metadata !{i64 384}
!385 = metadata !{i64 385}
!386 = metadata !{i64 386}
!387 = metadata !{i64 387}
!388 = metadata !{i64 388}
!389 = metadata !{i64 389}
!390 = metadata !{i64 390}
!391 = metadata !{i64 391}
!392 = metadata !{i64 392}
!393 = metadata !{i64 393}
!394 = metadata !{i64 394}
!395 = metadata !{i64 395}
!396 = metadata !{i64 396}
!397 = metadata !{i64 397}
!398 = metadata !{i64 398}
!399 = metadata !{i64 399}
!400 = metadata !{i64 400}
!401 = metadata !{i64 401}
!402 = metadata !{i64 402}
!403 = metadata !{i64 403}
!404 = metadata !{i64 404}
!405 = metadata !{i64 405}
!406 = metadata !{i64 406}
!407 = metadata !{i64 407}
!408 = metadata !{i64 408}
!409 = metadata !{i64 409}
!410 = metadata !{i64 410}
!411 = metadata !{i64 411}
!412 = metadata !{i64 412}
!413 = metadata !{i64 413}
!414 = metadata !{i64 414}
!415 = metadata !{i64 415}
!416 = metadata !{i64 416}
!417 = metadata !{i64 417}
!418 = metadata !{i64 418}
!419 = metadata !{i64 419}
!420 = metadata !{i64 420}
!421 = metadata !{i64 421}
!422 = metadata !{i64 422}
!423 = metadata !{i64 423}
!424 = metadata !{i64 424}
!425 = metadata !{i64 425}
!426 = metadata !{i64 426}
!427 = metadata !{i64 427}
!428 = metadata !{i64 428}
!429 = metadata !{i64 429}
!430 = metadata !{i64 430}
!431 = metadata !{i64 431}
!432 = metadata !{i64 432}
!433 = metadata !{i64 433}
!434 = metadata !{i64 434}
!435 = metadata !{i64 435}
!436 = metadata !{i64 436}
!437 = metadata !{i64 437}
!438 = metadata !{i64 438}
!439 = metadata !{i64 439}
!440 = metadata !{i64 440}
!441 = metadata !{i64 441}
!442 = metadata !{i64 442}
!443 = metadata !{i64 443}
!444 = metadata !{i64 444}
!445 = metadata !{i64 445}
!446 = metadata !{i64 446}
!447 = metadata !{i64 447}
!448 = metadata !{i64 448}
!449 = metadata !{i64 449}
!450 = metadata !{i64 450}
