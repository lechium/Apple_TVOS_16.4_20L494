//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, UIViewController, XBApplicationLaunchCompatibilityInfo, XBLaunchCaptureInformation, XBLaunchImageError, XBLaunchInterface, XBLaunchStateRequest, _XBWrapperWindow;

@interface XBLaunchImageContextWrapper : NSObject
{
    UIViewController *_rootViewController;	// 8 = 0x8
    XBLaunchInterface *_launchInterface;	// 16 = 0x10
    _XBWrapperWindow *_wrapperWindow;	// 24 = 0x18
    XBApplicationLaunchCompatibilityInfo *_appInfo;	// 32 = 0x20
    XBLaunchStateRequest *_launchRequest;	// 40 = 0x28
    NSBundle *_bundle;	// 48 = 0x30
    long long _captureOptions;	// 56 = 0x38
    XBLaunchImageError *_error;	// 64 = 0x40
    XBLaunchCaptureInformation *_captureInformation;	// 72 = 0x48
}

+ (id)contextWrapperForApplicationWithCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 captureOptions:(long long)arg3;	// IMP=0x00200000000012d6
+ (void)initialize;	// IMP=0x0010000000001294
- (void).cxx_destruct;	// IMP=0x0020000000004491
@property(retain, nonatomic) XBLaunchCaptureInformation *captureInformation; // @synthesize captureInformation=_captureInformation;
@property(readonly, nonatomic) XBLaunchImageError *error; // @synthesize error=_error;
@property(retain, nonatomic) XBLaunchStateRequest *launchRequest; // @synthesize launchRequest=_launchRequest;
@property(retain, nonatomic) XBApplicationLaunchCompatibilityInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) _XBWrapperWindow *wrapperWindow; // @synthesize wrapperWindow=_wrapperWindow;
@property(readonly, nonatomic) XBLaunchInterface *launchInterface; // @synthesize launchInterface=_launchInterface;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)invalidate;	// IMP=0x001000000000436c
- (void)updateLaunchRequest:(id)arg1;	// IMP=0x0010000000004316
- (unsigned long long)_estimatedMemorySizeOfViewHierarchy:(id)arg1;	// IMP=0x0010000000003bee
- (id)_ioSurfaceForLayerContents:(void *)arg1;	// IMP=0x0010000000003b98
- (void)_update;	// IMP=0x00100000000036a2
- (void)_configureNewWindow;	// IMP=0x0010000000002fcc
- (_Bool)_verifyMemoryImpactOfViewHierarchy:(id)arg1 bundleID:(id)arg2 size:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000002d42
- (void)_configureRootViewForRTL:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000002abd
- (id)_parseLaunchInterface:(id)arg1 bundle:(id)arg2 bundlePath:(id)arg3 bundleID:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000026e7
- (id)_parseInterfaceConfiguration:(id)arg1 bundle:(id)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000001d27
- (id)_parseInterfaceWithNibName:(id)arg1 bundle:(id)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000018b2
- (id)_parseInterfaceWithStoryboardName:(id)arg1 bundle:(id)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000016fc
- (id)_errorForParsingException:(id)arg1 bundleID:(id)arg2;	// IMP=0x00100000000015cb
@property(readonly, nonatomic) unsigned int contextID;
- (id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 captureOptions:(long long)arg3;	// IMP=0x0010000000001371

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

