//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MRDPairingHandler : NSObject
{
    NSMutableDictionary *_handlers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000109892
@property(readonly) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void)performHandlerForRouteUID:(id)arg1 passcode:(id)arg2;	// IMP=0x00100000001097de
- (void)addHandlerForRouteUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010976c
- (id)init;	// IMP=0x0010000000109716

@end

