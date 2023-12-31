//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _OSLogStreamFilter : NSObject
{
    NSMutableDictionary *_filter;	// 8 = 0x8
    NSMutableDictionary *_pids;	// 16 = 0x10
    NSMutableDictionary *_processes;	// 24 = 0x18
    NSMutableDictionary *_processImagePaths;	// 32 = 0x20
    NSMutableDictionary *_subsystems;	// 40 = 0x28
    NSMutableDictionary *_categories;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002e102
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000002e101
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x000000000002e100
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000002e0af
- (void)processComparisonPredicate:(id)arg1;	// IMP=0x000000000002dfe8
- (unsigned long long)flagsForPredicate:(id)arg1;	// IMP=0x000000000002dfb9
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3;	// IMP=0x000000000002ddbd
- (void)addCategory:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002dca3
- (void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002db89
- (void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002da6f
- (void)addProcess:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002d955
- (void)addProcessID:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x000000000002d81e
@property(readonly, nonatomic) NSData *data;
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000002d66c

@end

