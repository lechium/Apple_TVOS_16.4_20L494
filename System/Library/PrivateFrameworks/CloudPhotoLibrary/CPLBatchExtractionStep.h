//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CPLBatchExtractionStrategyStorage;

__attribute__((visibility("hidden")))
@interface CPLBatchExtractionStep : NSObject
{
    id <CPLBatchExtractionStrategyStorage> _storage;	// 8 = 0x8
    NSString *_scopeIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f42f5
@property(readonly, copy, nonatomic) NSString *scopeIdentifier; // @synthesize scopeIdentifier=_scopeIdentifier;
@property(readonly, nonatomic) id <CPLBatchExtractionStrategyStorage> storage; // @synthesize storage=_storage;
- (id)description;	// IMP=0x00000000000f4265
- (id)shortDescription;	// IMP=0x00000000000f4258
- (void)resetConditionallyFromNewIncomingChange:(id)arg1;	// IMP=0x00000000000f4221
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;	// IMP=0x00000000000f4219
- (void)reset;	// IMP=0x00000000000f4213
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000f41d5
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2;	// IMP=0x00000000000f412a

@end
