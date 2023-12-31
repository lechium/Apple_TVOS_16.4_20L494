//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKEventMetric, NSMutableSet, NSString;

@interface CPLCloudKitMetric : NSObject
{
    NSMutableSet *_outstandingOperations;	// 8 = 0x8
    CKEventMetric *_ckEventMetric;	// 16 = 0x10
    _Bool _submitted;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    CKContainer *_container;	// 40 = 0x28
    long long _result;	// 48 = 0x30
    unsigned long long _outstandingBeginCount;	// 56 = 0x38
    NSString *_identifier;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x0040000000138e61
- (void).cxx_destruct;	// IMP=0x0020000000139a8d
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool submitted; // @synthesize submitted=_submitted;
@property(readonly, nonatomic) unsigned long long outstandingBeginCount; // @synthesize outstandingBeginCount=_outstandingBeginCount;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)redactedDescription;	// IMP=0x00100000001399a1
- (id)description;	// IMP=0x001000000013990b
@property(readonly, nonatomic) NSString *resultDescription;
- (void)prepareCKEventMetric:(id)arg1;	// IMP=0x00100000001398dc
- (void)drop;	// IMP=0x00000000001398bc
- (void)setError:(id)arg1;	// IMP=0x0010000000139846
- (void)end;	// IMP=0x0010000000139754
- (void)begin;	// IMP=0x0010000000139693
- (void)associatedOperationDidComplete:(id)arg1;	// IMP=0x00100000001394af
- (void)associateWithOperation:(id)arg1;	// IMP=0x0010000000139361
- (void)_submitIfNecessary;	// IMP=0x00100000001391a3
- (id)initWithName:(id)arg1;	// IMP=0x0010000000138f13

@end

