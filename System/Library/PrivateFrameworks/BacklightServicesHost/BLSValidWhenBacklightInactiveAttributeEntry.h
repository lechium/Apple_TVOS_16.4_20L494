//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSAttribute, NSString;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

__attribute__((visibility("hidden")))
@interface BLSValidWhenBacklightInactiveAttributeEntry : NSObject
{
    BLSAttribute *_attribute;	// 8 = 0x8
    id <BLSAssertionServiceResponding> _assertion;	// 16 = 0x10
    id <BLSHAssertionAttributeHandlerService> _service;	// 24 = 0x18
}

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;	// IMP=0x00100000000670e3
- (void).cxx_destruct;	// IMP=0x00000000000672a1
@property(readonly, nonatomic) __weak id <BLSHAssertionAttributeHandlerService> service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak id <BLSAssertionServiceResponding> assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) __weak BLSAttribute *attribute; // @synthesize attribute=_attribute;
- (void)invalidate;	// IMP=0x0000000000067259
- (_Bool)reactivateIfPossible;	// IMP=0x0000000000067251
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;	// IMP=0x000000000006719a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

