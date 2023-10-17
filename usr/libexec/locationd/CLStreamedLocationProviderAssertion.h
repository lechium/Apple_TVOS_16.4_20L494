//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLStreamedLocationProviderProtocol;

@interface CLStreamedLocationProviderAssertion : NSObject
{
    id <CLStreamedLocationProviderProtocol> _proxy;	// 8 = 0x8
}

@property(retain, nonatomic) id <CLStreamedLocationProviderProtocol> proxy; // @synthesize proxy=_proxy;
- (void)releaseAssertion;	// IMP=0x00100000000f1254
- (void)takeAssertion;	// IMP=0x00100000000f104f
- (void)dealloc;	// IMP=0x00100000000f1011
- (void)invalidate;	// IMP=0x00100000000f0fe1
- (id)initInUniverse:(id)arg1;	// IMP=0x00100000000f0f55

@end

