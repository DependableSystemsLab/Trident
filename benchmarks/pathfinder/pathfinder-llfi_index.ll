; ModuleID = '/data/gpli/instruction-modeling/random_fi/rodinia/pathfinder/pathfinder.ll'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

%struct._IO_FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct._IO_FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct._IO_marker = type { %struct._IO_marker*, %struct._IO_FILE*, i32 }
%struct.timeval = type { i64, i64 }

@start_cycles = unnamed_addr global i64 0
@stderr = external unnamed_addr global %struct._IO_FILE*
@.str = private unnamed_addr constant [11 x i8] c"error: %s\0A\00", align 1
@cols = unnamed_addr global i32 0
@rows = unnamed_addr global i32 0
@data = unnamed_addr global i32* null
@wall = unnamed_addr global i32** null
@.str1 = private unnamed_addr constant [36 x i8] c"Usage: pathfiner width num_of_steps\00", align 8
@result = unnamed_addr global i32* null
@.str2 = private unnamed_addr constant [4 x i8] c"%d \00", align 1
@starttime = unnamed_addr global %struct.timeval zeroinitializer, align 16
@endtime = unnamed_addr global %struct.timeval zeroinitializer, align 16

define i32 @_Z3MINii(i32 %a, i32 %b) nounwind readnone {
entry:
  %0 = icmp sgt i32 %a, %b, !llfi_index !0
  %b.a = select i1 %0, i32 %b, i32 %a, !llfi_index !1
  ret i32 %b.a, !llfi_index !2
}

define void @_Z5fatalPc(i8* %s) nounwind {
entry:
  %0 = load %struct._IO_FILE** @stderr, align 8, !llfi_index !3
  %1 = tail call i32 (%struct._IO_FILE*, i8*, ...)* @fprintf(%struct._IO_FILE* noalias %0, i8* noalias getelementptr inbounds ([11 x i8]* @.str, i64 0, i64 0), i8* %s) nounwind, !llfi_index !4
  ret void, !llfi_index !5
}

declare i32 @fprintf(%struct._IO_FILE* noalias nocapture, i8* noalias nocapture, ...) nounwind

define void @_Z4initiPPc(i32 %argc, i8** nocapture %argv) nounwind {
entry:
  %0 = icmp eq i32 %argc, 3, !llfi_index !6
  br i1 %0, label %bb, label %bb1, !llfi_index !7

bb:                                               ; preds = %entry
  %1 = getelementptr inbounds i8** %argv, i64 1, !llfi_index !8
  %2 = load i8** %1, align 8, !llfi_index !9
  %3 = tail call i32 @atoi(i8* %2) nounwind readonly, !llfi_index !10
  store i32 %3, i32* @cols, align 4, !llfi_index !11
  %4 = getelementptr inbounds i8** %argv, i64 2, !llfi_index !12
  %5 = load i8** %4, align 8, !llfi_index !13
  %6 = tail call i32 @atoi(i8* %5) nounwind readonly, !llfi_index !14
  store i32 %6, i32* @rows, align 4, !llfi_index !15
  %7 = mul nsw i32 %6, %3, !llfi_index !16
  %8 = sext i32 %7 to i64, !llfi_index !17
  %9 = shl nsw i64 %8, 2, !llfi_index !18
  %10 = tail call i8* @_Znam(i64 %9) nounwind, !llfi_index !19
  %11 = bitcast i8* %10 to i32*, !llfi_index !20
  store i32* %11, i32** @data, align 8, !llfi_index !21
  %12 = load i32* @rows, align 4, !llfi_index !22
  %13 = sext i32 %12 to i64, !llfi_index !23
  %14 = shl nsw i64 %13, 3, !llfi_index !24
  %15 = tail call i8* @_Znam(i64 %14) nounwind, !llfi_index !25
  %16 = bitcast i8* %15 to i32**, !llfi_index !26
  store i32** %16, i32*** @wall, align 8, !llfi_index !27
  %17 = load i32* @rows, align 4, !llfi_index !28
  %18 = icmp sgt i32 %17, 0, !llfi_index !29
  %19 = load i32* @cols, align 4, !llfi_index !30
  br i1 %18, label %bb2.lr.ph, label %bb4, !llfi_index !31

bb2.lr.ph:                                        ; preds = %bb
  %tmp53 = icmp sgt i32 %17, 1, !llfi_index !32
  %.op = add i32 %17, -1, !llfi_index !33
  %20 = zext i32 %.op to i64, !llfi_index !34
  %.op61 = add i64 %20, 1, !llfi_index !35
  %tmp56 = select i1 %tmp53, i64 %.op61, i64 1, !llfi_index !36
  %tmp58 = zext i32 %19 to i64, !llfi_index !37
  br label %bb2, !llfi_index !38

bb1:                                              ; preds = %entry
  %21 = tail call i32 @puts(i8* getelementptr inbounds ([36 x i8]* @.str1, i64 0, i64 0)) nounwind, !llfi_index !39
  tail call void @exit(i32 0) noreturn nounwind, !llfi_index !40
  unreachable, !llfi_index !41

bb2:                                              ; preds = %bb2.bb2_crit_edge, %bb2.lr.ph
  %22 = phi i32** [ %16, %bb2.lr.ph ], [ %.pre67, %bb2.bb2_crit_edge ], !llfi_index !42
  %indvar51 = phi i64 [ 0, %bb2.lr.ph ], [ %indvar.next52, %bb2.bb2_crit_edge ], !llfi_index !43
  %tmp59 = mul i64 %tmp58, %indvar51, !llfi_index !44
  %23 = load i32** @data, align 8, !llfi_index !45
  %sext = shl i64 %tmp59, 32, !llfi_index !46
  %24 = ashr exact i64 %sext, 32, !llfi_index !47
  %25 = getelementptr inbounds i32* %23, i64 %24, !llfi_index !48
  %scevgep57 = getelementptr i32** %22, i64 %indvar51, !llfi_index !49
  store i32* %25, i32** %scevgep57, align 8, !llfi_index !50
  %indvar.next52 = add i64 %indvar51, 1, !llfi_index !51
  %exitcond = icmp eq i64 %indvar.next52, %tmp56, !llfi_index !52
  br i1 %exitcond, label %bb4, label %bb2.bb2_crit_edge, !llfi_index !53

bb2.bb2_crit_edge:                                ; preds = %bb2
  %.pre67 = load i32*** @wall, align 8, !llfi_index !54
  br label %bb2, !llfi_index !55

bb4:                                              ; preds = %bb2, %bb
  %26 = phi i32 [ %19, %bb2 ], [ %19, %bb ], !llfi_index !56
  %27 = sext i32 %26 to i64, !llfi_index !57
  %28 = shl nsw i64 %27, 2, !llfi_index !58
  %29 = tail call i8* @_Znam(i64 %28) nounwind, !llfi_index !59
  %30 = bitcast i8* %29 to i32*, !llfi_index !60
  store i32* %30, i32** @result, align 8, !llfi_index !61
  tail call void @srand(i32 9) nounwind, !llfi_index !62
  %31 = load i32* @rows, align 4, !llfi_index !63
  %32 = icmp sgt i32 %31, 0, !llfi_index !64
  %.pre62 = load i32* @cols, align 4, !llfi_index !65
  br i1 %32, label %bb7.preheader, label %bb13.preheader, !llfi_index !66

bb6:                                              ; preds = %bb7.preheader, %bb6
  %indvar41 = phi i64 [ %tmp44, %bb6 ], [ 0, %bb7.preheader ], !llfi_index !67
  %tmp44 = add i64 %indvar41, 1, !llfi_index !68
  %tmp45 = trunc i64 %tmp44 to i32, !llfi_index !69
  %33 = load i32*** @wall, align 8, !llfi_index !70
  %scevgep48 = getelementptr i32** %33, i64 %indvar46, !llfi_index !71
  %34 = load i32** %scevgep48, align 8, !llfi_index !72
  %35 = tail call i32 @rand() nounwind, !llfi_index !73
  %36 = srem i32 %35, 10, !llfi_index !74
  %scevgep43 = getelementptr i32* %34, i64 %indvar41, !llfi_index !75
  store i32 %36, i32* %scevgep43, align 4, !llfi_index !76
  %37 = load i32* @cols, align 4, !llfi_index !77
  %38 = icmp slt i32 %tmp45, %37, !llfi_index !78
  br i1 %38, label %bb6, label %bb7.bb8_crit_edge, !llfi_index !79

bb7.bb8_crit_edge:                                ; preds = %bb6
  %.pre63 = load i32* @rows, align 4, !llfi_index !80
  br label %bb8, !llfi_index !81

bb8:                                              ; preds = %bb7.preheader, %bb7.bb8_crit_edge
  %39 = phi i32 [ %.pre63, %bb7.bb8_crit_edge ], [ %42, %bb7.preheader ], !llfi_index !82
  %40 = phi i32 [ %37, %bb7.bb8_crit_edge ], [ %43, %bb7.preheader ], !llfi_index !83
  %41 = icmp slt i32 %tmp50, %39, !llfi_index !84
  br i1 %41, label %bb7.preheader, label %bb13.preheader, !llfi_index !85

bb7.preheader:                                    ; preds = %bb8, %bb4
  %42 = phi i32 [ %39, %bb8 ], [ %31, %bb4 ], !llfi_index !86
  %43 = phi i32 [ %40, %bb8 ], [ %.pre62, %bb4 ], !llfi_index !87
  %indvar46 = phi i64 [ %tmp49, %bb8 ], [ 0, %bb4 ], !llfi_index !88
  %tmp49 = add i64 %indvar46, 1, !llfi_index !89
  %tmp50 = trunc i64 %tmp49 to i32, !llfi_index !90
  %44 = icmp sgt i32 %43, 0, !llfi_index !91
  br i1 %44, label %bb6, label %bb8, !llfi_index !92

bb13.preheader:                                   ; preds = %bb8, %bb4
  %45 = phi i32 [ %40, %bb8 ], [ %.pre62, %bb4 ], !llfi_index !93
  %46 = phi i32 [ %39, %bb8 ], [ %31, %bb4 ], !llfi_index !94
  %47 = icmp sgt i32 %45, 0, !llfi_index !95
  br i1 %47, label %bb12, label %bb21.preheader, !llfi_index !96

bb12:                                             ; preds = %bb12, %bb13.preheader
  %indvar35 = phi i64 [ %tmp39, %bb12 ], [ 0, %bb13.preheader ], !llfi_index !97
  %tmp39 = add i64 %indvar35, 1, !llfi_index !98
  %tmp40 = trunc i64 %tmp39 to i32, !llfi_index !99
  %48 = load i32** @result, align 8, !llfi_index !100
  %49 = load i32*** @wall, align 8, !llfi_index !101
  %50 = load i32** %49, align 8, !llfi_index !102
  %scevgep38 = getelementptr i32* %50, i64 %indvar35, !llfi_index !103
  %51 = load i32* %scevgep38, align 4, !llfi_index !104
  %scevgep37 = getelementptr i32* %48, i64 %indvar35, !llfi_index !105
  store i32 %51, i32* %scevgep37, align 4, !llfi_index !106
  %52 = load i32* @cols, align 4, !llfi_index !107
  %53 = icmp slt i32 %tmp40, %52, !llfi_index !108
  br i1 %53, label %bb12, label %bb13.bb21.preheader_crit_edge, !llfi_index !109

bb13.bb21.preheader_crit_edge:                    ; preds = %bb12
  %.pre = load i32* @rows, align 4, !llfi_index !110
  br label %bb21.preheader, !llfi_index !111

bb21.preheader:                                   ; preds = %bb13.bb21.preheader_crit_edge, %bb13.preheader
  %54 = phi i32 [ %52, %bb13.bb21.preheader_crit_edge ], [ %45, %bb13.preheader ], !llfi_index !112
  %55 = phi i32 [ %.pre, %bb13.bb21.preheader_crit_edge ], [ %46, %bb13.preheader ], !llfi_index !113
  %56 = icmp sgt i32 %55, 0, !llfi_index !114
  br i1 %56, label %bb19.preheader, label %return, !llfi_index !115

bb18:                                             ; preds = %bb19.preheader, %bb18
  %indvar = phi i64 [ %tmp, %bb18 ], [ 0, %bb19.preheader ], !llfi_index !116
  %tmp = add i64 %indvar, 1, !llfi_index !117
  %tmp29 = trunc i64 %tmp to i32, !llfi_index !118
  %57 = load i32*** @wall, align 8, !llfi_index !119
  %scevgep32 = getelementptr i32** %57, i64 %indvar30, !llfi_index !120
  %58 = load i32** %scevgep32, align 8, !llfi_index !121
  %scevgep = getelementptr i32* %58, i64 %indvar, !llfi_index !122
  %59 = load i32* %scevgep, align 4, !llfi_index !123
  %60 = tail call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([4 x i8]* @.str2, i64 0, i64 0), i32 %59) nounwind, !llfi_index !124
  %61 = load i32* @cols, align 4, !llfi_index !125
  %62 = icmp slt i32 %tmp29, %61, !llfi_index !126
  br i1 %62, label %bb18, label %bb20, !llfi_index !127

bb20:                                             ; preds = %bb19.preheader, %bb18
  %63 = tail call i32 @putchar(i32 10) nounwind, !llfi_index !128
  %64 = load i32* @rows, align 4, !llfi_index !129
  %65 = icmp slt i32 %tmp34, %64, !llfi_index !130
  br i1 %65, label %bb20.bb19.preheader_crit_edge, label %return, !llfi_index !131

bb20.bb19.preheader_crit_edge:                    ; preds = %bb20
  %.pre66 = load i32* @cols, align 4, !llfi_index !132
  br label %bb19.preheader, !llfi_index !133

bb19.preheader:                                   ; preds = %bb20.bb19.preheader_crit_edge, %bb21.preheader
  %66 = phi i32 [ %.pre66, %bb20.bb19.preheader_crit_edge ], [ %54, %bb21.preheader ], !llfi_index !134
  %indvar30 = phi i64 [ %tmp33, %bb20.bb19.preheader_crit_edge ], [ 0, %bb21.preheader ], !llfi_index !135
  %tmp33 = add i64 %indvar30, 1, !llfi_index !136
  %tmp34 = trunc i64 %tmp33 to i32, !llfi_index !137
  %67 = icmp sgt i32 %66, 0, !llfi_index !138
  br i1 %67, label %bb18, label %bb20, !llfi_index !139

return:                                           ; preds = %bb20, %bb21.preheader
  ret void, !llfi_index !140
}

declare i32 @atoi(i8* nocapture) nounwind readonly

declare i8* @_Znam(i64)

declare i32 @puts(i8* nocapture) nounwind

declare void @exit(i32) noreturn nounwind

declare void @srand(i32) nounwind

declare i32 @rand() nounwind

declare i32 @printf(i8* noalias nocapture, ...) nounwind

declare i32 @putchar(i32) nounwind

define void @_Z3runiPPc(i32 %argc, i8** nocapture %argv) nounwind {
entry:
  tail call void @_Z4initiPPc(i32 %argc, i8** %argv) nounwind, !llfi_index !141
  %0 = load i32** @result, align 8, !llfi_index !142
  %1 = load i32* @cols, align 4, !llfi_index !143
  %2 = sext i32 %1 to i64, !llfi_index !144
  %3 = shl nsw i64 %2, 2, !llfi_index !145
  %4 = tail call i8* @_Znam(i64 %3) nounwind, !llfi_index !146
  %5 = bitcast i8* %4 to i32*, !llfi_index !147
  %6 = load i32* @rows, align 4, !llfi_index !148
  %7 = add nsw i32 %6, -1, !llfi_index !149
  %8 = icmp sgt i32 %7, 0, !llfi_index !150
  %.pre = load i32* @cols, align 4, !llfi_index !151
  br i1 %8, label %bb6.preheader, label %bb11.preheader, !llfi_index !152

bb1:                                              ; preds = %bb6.preheader, %bb5
  %9 = phi i32 [ %24, %bb5 ], [ %31, %bb6.preheader ], !llfi_index !153
  %indvar39 = phi i64 [ %tmp47, %bb5 ], [ 0, %bb6.preheader ], !llfi_index !154
  %scevgep41 = getelementptr i32* %src.030, i64 %indvar39, !llfi_index !155
  %scevgep43 = getelementptr i32* %dst.029, i64 %indvar39, !llfi_index !156
  %n.028 = trunc i64 %indvar39 to i32, !llfi_index !157
  %tmp47 = add i64 %indvar39, 1, !llfi_index !158
  %scevgep48 = getelementptr i32* %dst.029, i64 %tmp47, !llfi_index !159
  %tmp49 = trunc i64 %tmp47 to i32, !llfi_index !160
  %10 = load i32* %scevgep43, align 4, !llfi_index !161
  %11 = icmp sgt i32 %n.028, 0, !llfi_index !162
  br i1 %11, label %bb2, label %bb3, !llfi_index !163

bb2:                                              ; preds = %bb1
  %tmp45 = shl i64 %indvar39, 32, !llfi_index !164
  %sext = add i64 %tmp45, -4294967296, !llfi_index !165
  %12 = ashr exact i64 %sext, 32, !llfi_index !166
  %13 = getelementptr inbounds i32* %dst.029, i64 %12, !llfi_index !167
  %14 = load i32* %13, align 4, !llfi_index !168
  %15 = icmp sgt i32 %10, %14, !llfi_index !169
  %b.a.i = select i1 %15, i32 %14, i32 %10, !llfi_index !170
  br label %bb3, !llfi_index !171

bb3:                                              ; preds = %bb2, %bb1
  %min.0 = phi i32 [ %b.a.i, %bb2 ], [ %10, %bb1 ], !llfi_index !172
  %16 = add nsw i32 %9, -1, !llfi_index !173
  %17 = icmp sgt i32 %16, %n.028, !llfi_index !174
  br i1 %17, label %bb4, label %bb5, !llfi_index !175

bb4:                                              ; preds = %bb3
  %18 = load i32* %scevgep48, align 4, !llfi_index !176
  %19 = icmp sgt i32 %min.0, %18, !llfi_index !177
  %b.a.i25 = select i1 %19, i32 %18, i32 %min.0, !llfi_index !178
  br label %bb5, !llfi_index !179

bb5:                                              ; preds = %bb4, %bb3
  %min.1 = phi i32 [ %b.a.i25, %bb4 ], [ %min.0, %bb3 ], !llfi_index !180
  %20 = load i32*** @wall, align 8, !llfi_index !181
  %scevgep53 = getelementptr i32** %20, i64 %tmp52, !llfi_index !182
  %21 = load i32** %scevgep53, align 8, !llfi_index !183
  %scevgep42 = getelementptr i32* %21, i64 %indvar39, !llfi_index !184
  %22 = load i32* %scevgep42, align 4, !llfi_index !185
  %23 = add nsw i32 %22, %min.1, !llfi_index !186
  store i32 %23, i32* %scevgep41, align 4, !llfi_index !187
  %24 = load i32* @cols, align 4, !llfi_index !188
  %25 = icmp slt i32 %tmp49, %24, !llfi_index !189
  br i1 %25, label %bb1, label %bb6.bb7_crit_edge, !llfi_index !190

bb6.bb7_crit_edge:                                ; preds = %bb5
  %.pre55 = load i32* @rows, align 4, !llfi_index !191
  br label %bb7, !llfi_index !192

bb7:                                              ; preds = %bb6.preheader, %bb6.bb7_crit_edge
  %26 = phi i32 [ %.pre55, %bb6.bb7_crit_edge ], [ %30, %bb6.preheader ], !llfi_index !193
  %27 = phi i32 [ %24, %bb6.bb7_crit_edge ], [ %31, %bb6.preheader ], !llfi_index !194
  %28 = add nsw i32 %26, -1, !llfi_index !195
  %29 = icmp sgt i32 %28, %tmp54, !llfi_index !196
  br i1 %29, label %bb6.preheader, label %bb11.preheader, !llfi_index !197

bb6.preheader:                                    ; preds = %bb7, %entry
  %30 = phi i32 [ %26, %bb7 ], [ %6, %entry ], !llfi_index !198
  %31 = phi i32 [ %27, %bb7 ], [ %.pre, %entry ], !llfi_index !199
  %indvar50 = phi i64 [ %tmp52, %bb7 ], [ 0, %entry ], !llfi_index !200
  %src.030 = phi i32* [ %dst.029, %bb7 ], [ %5, %entry ], !llfi_index !201
  %dst.029 = phi i32* [ %src.030, %bb7 ], [ %0, %entry ], !llfi_index !202
  %tmp52 = add i64 %indvar50, 1, !llfi_index !203
  %tmp54 = trunc i64 %tmp52 to i32, !llfi_index !204
  %32 = icmp sgt i32 %31, 0, !llfi_index !205
  br i1 %32, label %bb1, label %bb7, !llfi_index !206

bb11.preheader:                                   ; preds = %bb7, %entry
  %33 = phi i32 [ %27, %bb7 ], [ %.pre, %entry ], !llfi_index !207
  %src.0.lcssa = phi i32* [ %dst.029, %bb7 ], [ %5, %entry ], !llfi_index !208
  %dst.0.lcssa = phi i32* [ %src.030, %bb7 ], [ %0, %entry ], !llfi_index !209
  %34 = icmp sgt i32 %33, 0, !llfi_index !210
  br i1 %34, label %bb10, label %bb12, !llfi_index !211

bb10:                                             ; preds = %bb10, %bb11.preheader
  %indvar34 = phi i64 [ %tmp37, %bb10 ], [ 0, %bb11.preheader ], !llfi_index !212
  %tmp37 = add i64 %indvar34, 1, !llfi_index !213
  %tmp38 = trunc i64 %tmp37 to i32, !llfi_index !214
  %35 = load i32** @data, align 8, !llfi_index !215
  %scevgep36 = getelementptr i32* %35, i64 %indvar34, !llfi_index !216
  %36 = load i32* %scevgep36, align 4, !llfi_index !217
  %37 = tail call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([4 x i8]* @.str2, i64 0, i64 0), i32 %36) nounwind, !llfi_index !218
  %38 = load i32* @cols, align 4, !llfi_index !219
  %39 = icmp slt i32 %tmp38, %38, !llfi_index !220
  br i1 %39, label %bb10, label %bb12, !llfi_index !221

bb12:                                             ; preds = %bb10, %bb11.preheader
  %40 = tail call i32 @putchar(i32 10) nounwind, !llfi_index !222
  %41 = load i32* @cols, align 4, !llfi_index !223
  %42 = icmp sgt i32 %41, 0, !llfi_index !224
  br i1 %42, label %bb14, label %bb16, !llfi_index !225

bb14:                                             ; preds = %bb14, %bb12
  %indvar = phi i64 [ %tmp, %bb14 ], [ 0, %bb12 ], !llfi_index !226
  %scevgep = getelementptr i32* %dst.0.lcssa, i64 %indvar, !llfi_index !227
  %tmp = add i64 %indvar, 1, !llfi_index !228
  %tmp33 = trunc i64 %tmp to i32, !llfi_index !229
  %43 = load i32* %scevgep, align 4, !llfi_index !230
  %44 = tail call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([4 x i8]* @.str2, i64 0, i64 0), i32 %43) nounwind, !llfi_index !231
  %45 = load i32* @cols, align 4, !llfi_index !232
  %46 = icmp slt i32 %tmp33, %45, !llfi_index !233
  br i1 %46, label %bb14, label %bb16, !llfi_index !234

bb16:                                             ; preds = %bb14, %bb12
  %47 = tail call i32 @putchar(i32 10) nounwind, !llfi_index !235
  %48 = load i32** @data, align 8, !llfi_index !236
  %49 = icmp eq i32* %48, null, !llfi_index !237
  br i1 %49, label %bb18, label %bb17, !llfi_index !238

bb17:                                             ; preds = %bb16
  %50 = bitcast i32* %48 to i8*, !llfi_index !239
  tail call void @_ZdaPv(i8* %50) nounwind, !llfi_index !240
  br label %bb18, !llfi_index !241

bb18:                                             ; preds = %bb17, %bb16
  %51 = load i32*** @wall, align 8, !llfi_index !242
  %52 = icmp eq i32** %51, null, !llfi_index !243
  br i1 %52, label %bb20, label %bb19, !llfi_index !244

bb19:                                             ; preds = %bb18
  %53 = bitcast i32** %51 to i8*, !llfi_index !245
  tail call void @_ZdaPv(i8* %53) nounwind, !llfi_index !246
  br label %bb20, !llfi_index !247

bb20:                                             ; preds = %bb19, %bb18
  %54 = icmp eq i32* %dst.0.lcssa, null, !llfi_index !248
  br i1 %54, label %bb22, label %bb21, !llfi_index !249

bb21:                                             ; preds = %bb20
  %55 = bitcast i32* %dst.0.lcssa to i8*, !llfi_index !250
  tail call void @_ZdaPv(i8* %55) nounwind, !llfi_index !251
  br label %bb22, !llfi_index !252

bb22:                                             ; preds = %bb21, %bb20
  %56 = icmp eq i32* %src.0.lcssa, null, !llfi_index !253
  br i1 %56, label %return, label %bb23, !llfi_index !254

bb23:                                             ; preds = %bb22
  %57 = bitcast i32* %src.0.lcssa to i8*, !llfi_index !255
  tail call void @_ZdaPv(i8* %57) nounwind, !llfi_index !256
  br label %return, !llfi_index !257

return:                                           ; preds = %bb23, %bb22
  ret void, !llfi_index !258
}

declare void @_ZdaPv(i8*) nounwind

define i32 @main(i32 %argc, i8** nocapture %argv) nounwind {
entry:
  tail call void @_Z3runiPPc(i32 %argc, i8** %argv) nounwind, !llfi_index !259
  ret i32 0, !llfi_index !260
}

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
