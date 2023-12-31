//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, NSXPCListener, TKToken;

__attribute__((visibility("hidden")))
@interface TKTokenConnection : NSObject
{
    TKToken *_token;	// 8 = 0x8
    NSXPCListener *_listener;	// 16 = 0x10
    NSMapTable *_sessions;	// 24 = 0x18
    id _initialKeepAlive;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002c08f
@property(retain, nonatomic) id initialKeepAlive; // @synthesize initialKeepAlive=_initialKeepAlive;
@property(readonly, nonatomic) NSMapTable *sessions; // @synthesize sessions=_sessions;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) TKToken *token; // @synthesize token=_token;
- (void)dealloc;	// IMP=0x000000000002bfda
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000002bf12
- (void)invalidate;	// IMP=0x000000000002befc
- (id)initWithToken:(id)arg1;	// IMP=0x000000000002bdac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

