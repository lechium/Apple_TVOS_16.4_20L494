//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PKPlugInCore.h"

@class NSDictionary, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection;

@interface PKServicePersonality : PKPlugInCore
{
    id _plugInPrincipal;	// 184 = 0xb8
    id _hostPrincipal;	// 192 = 0xc0
    id _embeddedPrincipal;	// 200 = 0xc8
    NSXPCConnection *_connection;	// 208 = 0xd0
    NSUserDefaults *_preferences;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000000001a97e
@property(retain) NSUserDefaults *preferences; // @synthesize preferences=_preferences;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) id embeddedPrincipal; // @synthesize embeddedPrincipal=_embeddedPrincipal;
@property(retain) id hostPrincipal; // @synthesize hostPrincipal=_hostPrincipal;
@property(retain) id plugInPrincipal; // @synthesize plugInPrincipal=_plugInPrincipal;
@property(readonly, copy) NSString *description;
- (void)prefsSetObject:(id)arg1 forKey:(id)arg2 inPlugIn:(id)arg3 result:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a758
- (void)prefsObjectForKey:(id)arg1 inPlugIn:(id)arg2 result:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a6ba
- (void)shutdownPlugIn;	// IMP=0x000000000001a4de
- (double)cleanExitTimeout;	// IMP=0x000000000001a25c
- (id)defaultPrincipalObject;	// IMP=0x000000000001a123
- (void)hostHasControl;	// IMP=0x000000000001a0d0
- (id)findProtocol:(id)arg1;	// IMP=0x0000000000019e07
- (void)beginUsingPlugIn:(id)arg1 ready:(CDUnknownBlockType)arg2;	// IMP=0x000000000001994a
- (void)prepareUsingPlugIn:(id)arg1 hostProtocol:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019759
- (void)prepareUsing:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018ccd
- (id)setupWithIdentifier:(id)arg1 extensionPointPlatform:(unsigned int)arg2;	// IMP=0x0000000000018a97
- (id)initWithConnection:(id)arg1 proxyFactory:(id)arg2;	// IMP=0x000000000001828e

// Remaining properties
@property(copy) NSDictionary *_userInfo; // @dynamic _userInfo;
@property(readonly) NSDictionary *bundleInfoDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *identifier;
@property(readonly) NSDictionary *plugInDictionary;
@property(readonly) Class superclass;
@property(readonly) NSURL *url;
@property(readonly) NSUUID *uuid;
@property(readonly) NSString *version;

@end

