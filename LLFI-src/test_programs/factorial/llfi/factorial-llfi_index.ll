; ModuleID = '/home/gpli/LLFI-src/test_programs/factorial/factorial.ll'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-f128:128:128-n8:16:32:64"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

define i32 @main(i32 %argc, i8** %argv) nounwind {
entry:
  %argc_addr = alloca i32, align 4, !llfi_index !0
  %argv_addr = alloca i8**, align 8, !llfi_index !1
  %retval = alloca i32, !llfi_index !2
  %i = alloca i32, !llfi_index !3
  %fact = alloca i32, !llfi_index !4
  %n = alloca i32, !llfi_index !5
  %"alloca point" = bitcast i32 0 to i32, !llfi_index !6
  store i32 %argc, i32* %argc_addr, !llfi_index !7
  store i8** %argv, i8*** %argv_addr, !llfi_index !8
  %0 = load i8*** %argv_addr, align 8, !llfi_index !9
  %1 = getelementptr inbounds i8** %0, i64 1, !llfi_index !10
  %2 = load i8** %1, align 1, !llfi_index !11
  %3 = call i32 (...)* @atoi(i8* %2) nounwind, !llfi_index !12
  store i32 %3, i32* %n, align 4, !llfi_index !13
  store i32 1, i32* %fact, align 4, !llfi_index !14
  store i32 1, i32* %i, align 4, !llfi_index !15
  br label %bb1, !llfi_index !16

bb:                                               ; preds = %bb1
  %4 = load i32* %fact, align 4, !llfi_index !17
  %5 = load i32* %i, align 4, !llfi_index !18
  %6 = mul nsw i32 %4, %5, !llfi_index !19
  store i32 %6, i32* %fact, align 4, !llfi_index !20
  %7 = load i32* %i, align 4, !llfi_index !21
  %8 = add nsw i32 %7, 1, !llfi_index !22
  store i32 %8, i32* %i, align 4, !llfi_index !23
  br label %bb1, !llfi_index !24

bb1:                                              ; preds = %bb, %entry
  %9 = load i32* %i, align 4, !llfi_index !25
  %10 = load i32* %n, align 4, !llfi_index !26
  %11 = icmp sle i32 %9, %10, !llfi_index !27
  br i1 %11, label %bb, label %bb2, !llfi_index !28

bb2:                                              ; preds = %bb1
  %12 = load i32* %fact, align 4, !llfi_index !29
  %13 = call i32 (i8*, ...)* @printf(i8* noalias getelementptr inbounds ([4 x i8]* @.str, i64 0, i64 0), i32 %12) nounwind, !llfi_index !30
  br label %return, !llfi_index !31

return:                                           ; preds = %bb2
  %retval3 = load i32* %retval, !llfi_index !32
  ret i32 %retval3, !llfi_index !33
}

declare i32 @atoi(...)

declare i32 @printf(i8* noalias, ...) nounwind

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
