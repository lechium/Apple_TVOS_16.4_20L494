//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNObservable, NSString;
@protocol CNDataMapper;

__attribute__((visibility("hidden")))
@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject
{
    CNContactFetchRequest *_fetchRequest;	// 8 = 0x8
    id <CNDataMapper> _dataMapper;	// 16 = 0x10
    CNObservable *_observable;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a8e07
- (id)copyFetchRequestWithPredicate:(id)arg1;	// IMP=0x00000000000a8da4
- (id)evaluateSubpredicate:(id)arg1;	// IMP=0x00000000000a8c75
- (void)visitFalsePredicate:(id)arg1;	// IMP=0x00000000000a8c3c
- (void)visitTruePredicate:(id)arg1;	// IMP=0x00000000000a8c28
- (void)visitNSPredicate:(id)arg1;	// IMP=0x00000000000a887b
- (void)visitNotPredicate:(id)arg1;	// IMP=0x00000000000a8301
- (void)visitAndPredicate:(id)arg1;	// IMP=0x00000000000a7caa
- (void)visitOrPredicate:(id)arg1;	// IMP=0x00000000000a77a7
- (void)visitNSCompoundPredicate:(id)arg1;	// IMP=0x00000000000a7754
- (void)visitCNPredicate:(id)arg1;	// IMP=0x00000000000a76f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

