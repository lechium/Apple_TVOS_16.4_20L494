//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UASimulator;

@interface UASimulatorAdvertisementCreator
{
    UASimulator *_simulator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003f8eb
@property(readonly, retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (id)statusString;	// IMP=0x001000000003f6c2
- (_Bool)active;	// IMP=0x001000000003f67e
- (long long)priority;	// IMP=0x001000000003f5fc
- (id)eligibleAdvertiseableItemsInOrder;	// IMP=0x001000000003f219
- (id)items;	// IMP=0x001000000003f0ab
- (id)initWithManager:(id)arg1 simulator:(id)arg2;	// IMP=0x001000000003f02c

@end

