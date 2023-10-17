//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSVXPCTestServer : NSObject
{
    CDUnknownBlockType _invalidationHandler;	// 8 = 0x8
    CDUnknownBlockType _interruptionHandler;	// 16 = 0x10
    _Bool _shouldAcceptNewConnections;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
}

+ (id)serviceInterface;	// IMP=0x002000000000198e
- (void).cxx_destruct;	// IMP=0x002000000000190d
@property(nonatomic) _Bool shouldAcceptNewConnections; // @synthesize shouldAcceptNewConnections=_shouldAcceptNewConnections;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000181a
- (void)getMessageWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001808
- (void)sendMessage:(id)arg1;	// IMP=0x00100000000017db
- (void)setNewConnectionInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000017b6
- (void)setNewConnectionInterruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001791
- (id)initWithMessage:(id)arg1;	// IMP=0x001000000000164d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
