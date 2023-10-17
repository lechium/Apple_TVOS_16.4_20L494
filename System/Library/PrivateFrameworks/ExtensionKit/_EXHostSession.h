//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSUUID, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint, UIView, _EXExtensionProcessHandle, _EXHostViewControllerConfiguration, _EXRemoteViewController;
@protocol OS_dispatch_queue, _EXHostSessionDelegate;

__attribute__((visibility("hidden")))
@interface _EXHostSession : NSObject
{
    _Bool _requiresSceneHosting;	// 8 = 0x8
    _EXRemoteViewController *_remoteViewController;	// 16 = 0x10
    id <_EXHostSessionDelegate> _delegate;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    _EXHostViewControllerConfiguration *_configuration;	// 48 = 0x30
    NSError *_error;	// 56 = 0x38
    NSXPCConnection *_sceneSessionConnection;	// 64 = 0x40
    NSXPCListener *_hostListener;	// 72 = 0x48
    UIView *_hostView;	// 80 = 0x50
    unsigned long long _signpost;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_internalQueue;	// 96 = 0x60
    _EXExtensionProcessHandle *_extensionProcess;	// 104 = 0x68
    unsigned long long _maxState;	// 112 = 0x70
    NSXPCListenerEndpoint *_remoteViewControllerEndpoint;	// 120 = 0x78
    CDStruct_dfa98e2d _activity;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000004c75
@property(retain, nonatomic) NSXPCListenerEndpoint *remoteViewControllerEndpoint; // @synthesize remoteViewControllerEndpoint=_remoteViewControllerEndpoint;
@property(nonatomic) unsigned long long maxState; // @synthesize maxState=_maxState;
@property CDStruct_dfa98e2d activity; // @synthesize activity=_activity;
@property(retain) _EXExtensionProcessHandle *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property unsigned long long signpost; // @synthesize signpost=_signpost;
@property __weak UIView *hostView; // @synthesize hostView=_hostView;
@property(retain) NSXPCListener *hostListener; // @synthesize hostListener=_hostListener;
@property(retain) NSXPCConnection *sceneSessionConnection; // @synthesize sceneSessionConnection=_sceneSessionConnection;
@property(readonly) _Bool requiresSceneHosting; // @synthesize requiresSceneHosting=_requiresSceneHosting;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _EXHostViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <_EXHostSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _EXRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000004864
- (void)makeSceneHostViewController;	// IMP=0x0000000000004804
- (void)requestRemoteViewController;	// IMP=0x0000000000004595
- (void)_internalQueue_prepareToHost;	// IMP=0x00000000000035c5
- (void)_invalidateSession;	// IMP=0x0000000000003511
- (void)processDidInvalidate:(id)arg1;	// IMP=0x000000000000332e
- (void)invalidate;	// IMP=0x00000000000032f4
- (void)resume;	// IMP=0x000000000000324c
- (id)makeXPCConnectionWithError:(id *)arg1;	// IMP=0x000000000000284d
- (void)dealloc;	// IMP=0x00000000000026c6
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000024fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

