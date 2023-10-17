//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface TIKeyboardInputManagerServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedKeyboardInputManagerServer;	// IMP=0x002000000000613f
- (void).cxx_destruct;	// IMP=0x0020000000006cc5
- (void)prepareForActivity;	// IMP=0x0010000000006bfa
- (void)prepareForInactivity;	// IMP=0x0010000000006af2
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;	// IMP=0x0010000000006a3a
- (void)keyboardActivityDidTransition:(id)arg1;	// IMP=0x00100000000069cf
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000006644
- (void)reduceCacheToSize:(unsigned long long)arg1;	// IMP=0x0010000000006556
- (void)releaseAllInputManagers:(_Bool)arg1;	// IMP=0x0010000000006503
- (void)appleKeyboardsSettingsChanged:(id)arg1;	// IMP=0x001000000000645e
- (id)init;	// IMP=0x0010000000006291
- (void)dealloc;	// IMP=0x00100000000061c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

