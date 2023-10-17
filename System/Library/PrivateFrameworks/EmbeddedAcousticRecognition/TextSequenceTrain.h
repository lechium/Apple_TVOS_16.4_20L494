//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TextSequenceTrain : NSObject
{
    NSMutableArray *_sequence;	// 8 = 0x8
    NSMutableArray *_target;	// 16 = 0x10
    NSMutableArray *_mask;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000da5d7
- (id)mask;	// IMP=0x00000000000da5c9
- (id)target;	// IMP=0x00000000000da5bb
- (id)sequence;	// IMP=0x00000000000da5ad
- (void)addWordWithInputId:(unsigned long long)arg1 target:(unsigned long long)arg2 mask:(unsigned long long)arg3;	// IMP=0x00000000000da4e7
- (void)addWordWithInputId:(unsigned long long)arg1;	// IMP=0x00000000000da47f
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x00000000000da385
- (id)init;	// IMP=0x00000000000da377

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

