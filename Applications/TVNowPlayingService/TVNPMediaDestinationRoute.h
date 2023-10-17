//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol HMMediaDestination;

@interface TVNPMediaDestinationRoute
{
    id <HMMediaDestination> _mediaDestination;	// 96 = 0x60
}

+ (id)_imageForMediaDestination:(id)arg1;	// IMP=0x0040000000031210
+ (_Bool)_availableStatusForMediaDestination:(id)arg1;	// IMP=0x0010000000030e00
- (void).cxx_destruct;	// IMP=0x0020000000031560
@property(retain, nonatomic) id <HMMediaDestination> mediaDestination; // @synthesize mediaDestination=_mediaDestination;
- (void)updateWithMediaDestination:(id)arg1 selectionState:(unsigned long long)arg2;	// IMP=0x0010000000030b40
- (id)description;	// IMP=0x0010000000030a70
- (id)init;	// IMP=0x0010000000030a00

@end

