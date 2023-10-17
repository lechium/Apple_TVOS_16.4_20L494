//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIForceMessage : NSObject
{
    _Bool _reset;	// 8 = 0x8
    double touchForce;	// 16 = 0x10
    unsigned long long stage;	// 24 = 0x18
    double timestamp;	// 32 = 0x20
}

+ (id)reset;	// IMP=0x0010000000c33ada
+ (id)observe:(CDUnknownBlockType)arg1;	// IMP=0x0010000000c33a97
@property(readonly, nonatomic, getter=isReset) _Bool reset; // @synthesize reset=_reset;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(nonatomic) unsigned long long stage; // @synthesize stage;
@property(nonatomic) double touchForce; // @synthesize touchForce;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

