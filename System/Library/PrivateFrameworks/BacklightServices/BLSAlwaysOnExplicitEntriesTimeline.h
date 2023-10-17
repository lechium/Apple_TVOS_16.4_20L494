//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSAlwaysOnTimeline.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BLSAlwaysOnExplicitEntriesTimeline : BLSAlwaysOnTimeline
{
    NSArray *_explicitEntries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000124fd
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;	// IMP=0x0000000000012466
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;	// IMP=0x00000000000121b1
- (id)initWithEntries:(id)arg1 identifier:(id)arg2 configure:(CDUnknownBlockType)arg3;	// IMP=0x00000000000120ff

@end

