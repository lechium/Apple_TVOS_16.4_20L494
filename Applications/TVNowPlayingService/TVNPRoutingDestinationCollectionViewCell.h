//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVNPRoutingDestination;

@interface TVNPRoutingDestinationCollectionViewCell
{
    TVNPRoutingDestination *_destination;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000426d0
@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
- (void)_updateNowPlayingInfo;	// IMP=0x0010000000042120
- (void)_updateMusicBarState;	// IMP=0x0010000000042060
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000041e40
- (void)dealloc;	// IMP=0x0010000000041b30

@end
