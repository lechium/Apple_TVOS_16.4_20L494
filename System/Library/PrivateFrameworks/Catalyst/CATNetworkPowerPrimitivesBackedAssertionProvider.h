//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CATNetworkPowerPrimitives;

__attribute__((visibility("hidden")))
@interface CATNetworkPowerPrimitivesBackedAssertionProvider : NSObject
{
    id <CATNetworkPowerPrimitives> _networkPowerPrimitives;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000055ec
@property(readonly, nonatomic) id <CATNetworkPowerPrimitives> networkPowerPrimitives; // @synthesize networkPowerPrimitives=_networkPowerPrimitives;
- (id)acquireAssertion;	// IMP=0x0000000000005592
- (id)initWithNetworkPowerPrimitives:(id)arg1;	// IMP=0x0000000000005527

@end

